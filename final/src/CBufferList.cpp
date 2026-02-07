#include "CBufferList.h"

/**
 * Symbol: CBufferList::__ct(void)
 * Address: 00045bbc
 */
CBufferList::CBufferList() {
    fCurrentSegment = NULL;
    fSegments = NULL;
    fIterator = NULL;
    fStartSegmentIdx = -1;
    fCurrentSegmentIdx = -1;
    fEndSegmentIdx = -1;
    fOwnsSegments = false;
    fOwnsList = false;
}

/**
 * Symbol: CBufferList::__dt(void)
 * Address: 00045c24
 */
CBufferList::~CBufferList() {
    if (fOwnsSegments) {
        this->DeleteAll();
    }
    if (fSegments && fOwnsList) {
        delete fSegments;
    }
    if (fIterator) {
        delete fIterator;
    }
}

/**
 * Symbol: CBufferList::Init(unsigned char)
 * Address: 0004650c
 */
NewtonErr CBufferList::Init(Boolean deleteSegments) {
    fOwnsSegments = deleteSegments;
    fOwnsList = true;
    fSegments = new CList();
    if (!fSegments) return -1;
    fIterator = new CListIterator(fSegments);
    if (!fIterator) return -1;
    this->ResetMark();
    return 0;
}

/**
 * Symbol: CBufferList::Init(CList*, Boolean)
 * Address: 00046548
 */
NewtonErr CBufferList::Init(CList* bufList, Boolean deleteSegments) {
    fOwnsList = false;
    fOwnsSegments = deleteSegments;
    fSegments = bufList;
    fIterator = new CListIterator(fSegments);
    if (!fIterator) return -1;
    this->ResetMark();
    return 0;
}

// --- CBuffer Interface Implementation ---

/**
 * Symbol: CBufferList::Get(void)
 * Address: 00046988
 */
int CBufferList::Get() {
    if (!fCurrentSegment) return -1;
    int result = fCurrentSegment->Get();
    if (result == -1 && this->NextSegment()) {
        result = fCurrentSegment->Get();
    }
    return result;
}

/**
 * Symbol: CBufferList::Put(int)
 * Address: 00045d0c
 */
NewtonErr CBufferList::Put(int data) {
    if (!fCurrentSegment) return -1;
    NewtonErr result = fCurrentSegment->Put(data);
    if (result == -1 && this->NextSegment()) {
        result = fCurrentSegment->Put(data);
    }
    return result;
}

/**
 * Symbol: CBufferList::Getn(unsigned char *, long)
 * Address: 000469e0
 */
NewtonErr CBufferList::Getn(UByte* dest, Size count) {
    Size totalRead = 0;
    while (totalRead < count) {
        if (!fCurrentSegment) break;
        Size n = count - totalRead;
        Size result = fCurrentSegment->Getn(dest + totalRead, n);
        totalRead += result;
        if (totalRead < count) {
            if (!this->NextSegment()) break;
        }
    }
    return totalRead;
}

/**
 * Symbol: CBufferList::Putn(const UByte*, Size)
 * Address: 00045d74
 */
NewtonErr CBufferList::Putn(const UByte* src, Size count) {
    Size totalWritten = 0;
    while (totalWritten < count) {
        if (!fCurrentSegment) break;
        Size n = count - totalWritten;
        Size result = fCurrentSegment->Putn(src + totalWritten, n);
        totalWritten += result;
        if (totalWritten < count) {
            if (!this->NextSegment()) break;
        }
    }
    return totalWritten;
}

/**
 * Symbol: CBufferList::CopyIn(const UByte*, Size&)
 * Address: 00045dec
 */
NewtonErr CBufferList::CopyIn(const UByte* src, Size& count) {
    if (!fCurrentSegment) return -1;
    Size requested = count;
    NewtonErr err = fCurrentSegment->Putn(src, count);
    count = requested - count;
    if (fCurrentSegmentIdx == fEndSegmentIdx) {
        if (fCurrentSegment->AtEOF()) return -1;
    }
    return 0;
}

/**
 * Symbol: CBufferList::CopyOut(UByte*, Size&)
 * Address: 00046a58
 */
NewtonErr CBufferList::CopyOut(UByte* dest, Size& count) {
    if (!fCurrentSegment) return -1;
    Size requested = count;
    NewtonErr err = fCurrentSegment->Getn(dest, count);
    count = requested - count;
    if (fCurrentSegmentIdx == fEndSegmentIdx) {
        if (fCurrentSegment->AtEOF()) return -1;
    }
    return 0;
}

/**
 * Symbol: CBufferList::Reset(void)
 * Address: 00045e50
 */
void CBufferList::Reset() {
    if (fSegments) {
        CListIterator iter(fSegments);
        CBuffer* segment = (CBuffer*)iter.FirstItem();
        while (iter.More()) {
            segment->Reset();
            segment = (CBuffer*)iter.NextItem();
        }
    }
    this->ResetMark();
}

/**
 * Symbol: CBufferList::Seek(long, int)
 * Address: 0004602c
 */
NewtonErr CBufferList::Seek(long offset, int mode) {
    Size totalSize = this->GetSize();
    Size targetPos = 0;
    if (mode == 0) targetPos = offset;
    else if (mode == 1) targetPos = this->Position() + offset;
    else if (mode == 2) targetPos = totalSize - offset;

    if (targetPos < 0) targetPos = 0;
    if (targetPos > totalSize) targetPos = totalSize;

    this->ResetMark();
    Size currentBase = 0;
    while (fCurrentSegment) {
        Size segSize = fCurrentSegment->GetSize();
        if (targetPos <= currentBase + segSize) {
            fCurrentSegment->Seek(targetPos - currentBase, 0);
            return targetPos;
        }
        currentBase += segSize;
        if (!this->NextSegment()) break;
    }
    return targetPos;
}

/**
 * Symbol: CBufferList::Hide(long, int)
 * Address: 00045ec0
 */
void CBufferList::Hide(long offset, int mode) {
    // Mode: 0 = FromStart, 2 = FromEnd
    if (mode == 0) {
        // Find segment where offset starts
        this->ResetMark();
        Size currentBase = 0;
        while (fCurrentSegment) {
            Size segSize = fCurrentSegment->GetSize();
            if (offset < currentBase + segSize) {
                fStartSegmentIdx = fCurrentSegmentIdx;
                fCurrentSegment->Seek(offset - currentBase, 0);
                return;
            }
            currentBase += segSize;
            if (!this->NextSegment()) break;
        }
    } else if (mode == 2) {
        Size totalSize = this->GetSize();
        Size hideFromEnd = totalSize - offset;
        this->ResetMark();
        Size currentBase = 0;
        while (fCurrentSegment) {
            Size segSize = fCurrentSegment->GetSize();
            if (hideFromEnd <= currentBase + segSize) {
                fEndSegmentIdx = fCurrentSegmentIdx;
                // Theoretically we should truncate or hide the rest of this segment
                return;
            }
            currentBase += segSize;
            if (!this->NextSegment()) break;
        }
    }
}

/**
 * Symbol: CBufferList::GetSize(void) const
 * Address: 00046298
 */
Size CBufferList::GetSize() const {
    if (!fSegments) return 0;
    Size total = 0;
    for (ArrayIndex i = fStartSegmentIdx; i <= fEndSegmentIdx; ++i) {
        CBuffer* seg = (CBuffer*)fSegments->At(i);
        if (seg) total += seg->GetSize();
    }
    return total;
}

/**
 * Symbol: CBufferList::Position(void) const
 * Address: 000461d0
 */
Size CBufferList::Position() const {
    if (!fSegments || !fCurrentSegment) return 0;
    Size pos = 0;
    for (ArrayIndex i = fStartSegmentIdx; i < fCurrentSegmentIdx; ++i) {
        CBuffer* seg = (CBuffer*)fSegments->At(i);
        if (seg) pos += seg->GetSize();
    }
    pos += fCurrentSegment->Position();
    return pos;
}

// --- Sequential Access ---

/**
 * Symbol: CBufferList::Peek(void)
 * Address: 00046860
 */
int CBufferList::Peek() {
    if (!fCurrentSegment) return -1;
    int result = fCurrentSegment->Peek();
    if (result == -1 && this->NextSegment()) {
        result = fCurrentSegment->Peek();
    }
    return result;
}

/**
 * Symbol: CBufferList::Next(void)
 * Address: 000468d8
 */
int CBufferList::Next() {
    if (!fCurrentSegment) return -1;
    int result = fCurrentSegment->Next();
    if (result == -1 && this->NextSegment()) {
        result = fCurrentSegment->Next();
    }
    return result;
}

/**
 * Symbol: CBufferList::Skip(void)
 * Address: 00046930
 */
void CBufferList::Skip() {
    if (!fCurrentSegment) return;
    int result = fCurrentSegment->Next();
    if (result == -1 && this->NextSegment()) {
        fCurrentSegment->Next();
    }
}

/**
 * Symbol: CBufferList::AtEOF(void) const
 * Address: 000468b8
 */
Boolean CBufferList::AtEOF() const {
    if (fCurrentSegmentIdx < fEndSegmentIdx) return false;
    if (!fCurrentSegment) return true;
    return fCurrentSegment->AtEOF();
}

// --- List Management ---

/**
 * Symbol: CBufferList::At(long)
 * Address: 00046340
 */
CBuffer* CBufferList::At(ArrayIndex index) {
    return (CBuffer*)fSegments->At(index);
}

CBuffer* CBufferList::First() {
    return (CBuffer*)fSegments->At(0);
}

CBuffer* CBufferList::Last() {
    return (CBuffer*)fSegments->At(fSegments->GetArraySize() - 1);
}

ArrayIndex CBufferList::GetIndex(CBuffer* item) {
    return fSegments->GetIdentityIndex(item);
}

NewtonErr CBufferList::Insert(CBuffer* item) {
    return this->InsertLast(item);
}

NewtonErr CBufferList::InsertAt(ArrayIndex index, CBuffer* item) {
    NewtonErr err = fSegments->InsertAt(index, item);
    if (err == 0) this->ResetMark();
    return err;
}

NewtonErr CBufferList::InsertBefore(ArrayIndex index, CBuffer* item) {
    return this->InsertAt(index, item);
}

NewtonErr CBufferList::InsertFirst(CBuffer* item) {
    return this->InsertAt(0, item);
}

NewtonErr CBufferList::InsertLast(CBuffer* item) {
    return this->InsertAt(fSegments->GetArraySize(), item);
}

NewtonErr CBufferList::Remove(CBuffer* item) {
    NewtonErr err = fSegments->Remove(item);
    if (err == 0) this->ResetMark();
    return err;
}

NewtonErr CBufferList::RemoveAt(ArrayIndex index) {
    NewtonErr err = fSegments->RemoveElementsAt(index, 1);
    if (err == 0) this->ResetMark();
    return err;
}

NewtonErr CBufferList::RemoveFirst() {
    return this->RemoveAt(0);
}

NewtonErr CBufferList::RemoveLast() {
    return this->RemoveAt(fSegments->GetArraySize() - 1);
}

NewtonErr CBufferList::RemoveAll() {
    NewtonErr err = fSegments->RemoveElementsAt(0, fSegments->GetArraySize());
    if (err == 0) this->ResetMark();
    return err;
}

NewtonErr CBufferList::Delete(CBuffer* item) {
    NewtonErr err = fSegments->Remove(item);
    if (err == 0) {
        if (item) delete item;
        this->ResetMark();
    }
    return err;
}

NewtonErr CBufferList::DeleteAt(ArrayIndex index) {
    CBuffer* item = (CBuffer*)fSegments->At(index);
    NewtonErr err = fSegments->RemoveElementsAt(index, 1);
    if (err == 0) {
        if (item) delete item;
        this->ResetMark();
    }
    return err;
}

NewtonErr CBufferList::DeleteFirst() {
    return this->DeleteAt(0);
}

NewtonErr CBufferList::DeleteLast() {
    return this->DeleteAt(fSegments->GetArraySize() - 1);
}

NewtonErr CBufferList::DeleteAll() {
    fIterator->ResetBounds(true);
    CBuffer* item = (CBuffer*)fIterator->FirstItem();
    while (fIterator->More()) {
        if (item) delete item;
        item = (CBuffer*)fIterator->NextItem();
    }
    return this->RemoveAll();
}

// --- Segment Navigation ---

/**
 * Symbol: CBufferList::SelectSegment(long)
 * Address: 000467c4
 */
void CBufferList::SelectSegment(ArrayIndex index) {
    fCurrentSegmentIdx = index;
    fCurrentSegment = (CBuffer*)fSegments->At(index);
    if (fCurrentSegment) {
        fCurrentSegment->Reset();
    }
}

/**
 * Symbol: CBufferList::NextSegment(void)
 * Address: 000467f8
 */
Boolean CBufferList::NextSegment() {
    if (fCurrentSegmentIdx >= fEndSegmentIdx) {
        fCurrentSegment = NULL;
        return false;
    }
    this->SelectSegment(++fCurrentSegmentIdx);
    return (fCurrentSegment != NULL);
}

/**
 * Symbol: CBufferList::ResetMark(void)
 * Address: 00046830
 */
void CBufferList::ResetMark() {
    long count = fSegments->GetArraySize();
    fEndSegmentIdx = count - 1;
    if (fEndSegmentIdx < 0) {
        fStartSegmentIdx = -1;
        fCurrentSegmentIdx = -1;
        fCurrentSegment = NULL;
    } else {
        fStartSegmentIdx = 0;
        this->SelectSegment(0);
    }
}
