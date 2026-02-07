#ifndef __CBUFFERLIST_H
#define __CBUFFERLIST_H

#include "CBuffer.h"
#include "CList.h"
#include "CListIterator.h"

class CBufferList : public CBuffer
{
public:
    CBufferList();
    virtual ~CBufferList();

    // Initialization
    NewtonErr Init(Boolean deleteSegments = true);
    NewtonErr Init(CList* bufList, Boolean deleteSegments = true);

    // CBuffer Interface Implementation
    virtual int       Get();
    virtual NewtonErr Put(int data);
    virtual NewtonErr Getn(UByte* dest, Size count);
    virtual NewtonErr Putn(const UByte* src, Size count);
    virtual NewtonErr CopyIn(const UByte* src, Size& count);
    virtual NewtonErr CopyOut(UByte* dest, Size& count);
    
    virtual void      Reset();
    virtual NewtonErr Seek(long offset, int mode);
    virtual void      Hide(long offset, int mode);
    virtual Size      GetSize() const;
    virtual Size      Position() const;

    // Sequential Access
    virtual int       Peek();
    virtual int       Next();
    virtual void      Skip();
    virtual Boolean   AtEOF() const;

    // List Management
    CBuffer*    At(ArrayIndex index);
    CBuffer*    First();
    CBuffer*    Last();
    ArrayIndex  GetIndex(CBuffer* item);

    NewtonErr   Insert(CBuffer* item);
    NewtonErr   InsertAt(ArrayIndex index, CBuffer* item);
    NewtonErr   InsertBefore(ArrayIndex index, CBuffer* item);
    NewtonErr   InsertFirst(CBuffer* item);
    NewtonErr   InsertLast(CBuffer* item);

    NewtonErr   Remove(CBuffer* item);
    NewtonErr   RemoveAt(ArrayIndex index);
    NewtonErr   RemoveFirst();
    NewtonErr   RemoveLast();
    NewtonErr   RemoveAll();

    NewtonErr   Delete(CBuffer* item);
    NewtonErr   DeleteAt(ArrayIndex index);
    NewtonErr   DeleteFirst();
    NewtonErr   DeleteLast();
    NewtonErr   DeleteAll();

    // Segment Navigation
    void        ResetMark();
    Boolean     NextSegment();

protected:
    void        SelectSegment(ArrayIndex index);

    CBuffer*       fCurrentSegment;     // offset 4
    CList*         fSegments;           // offset 8
    CListIterator* fIterator;           // offset 12
    ArrayIndex     fStartSegmentIdx;    // offset 16
    ArrayIndex     fCurrentSegmentIdx;  // offset 20
    ArrayIndex     fEndSegmentIdx;      // offset 24
    Boolean        fOwnsSegments;       // offset 28
    Boolean        fOwnsList;           // offset 29
};

#endif
