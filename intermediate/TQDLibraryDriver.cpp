#include "include/TQDLibraryDriver.h"

/**
 * Symbol: Sizeof__16TQDLibraryDriverSFv
 * Address: 00195810
 */
void TQDLibraryDriver::Sizeof() {
    /*
        195810:	e3a00010 	mov	r0, #16	; 0x10
        195814:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TQDLibraryDriver::New(void)
 * Address: 00195818
 */
TQDLibraryDriver::New(void) {
    /*
        195818:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TQDLibraryDriver::SetPortBits(PixelMap *)
 * Address: 0019581c
 */
TQDLibraryDriver::SetPortBits(PixelMap *) {
    /*
        19581c:	eafffffe 	b	19581c <TQDLibraryDriver::SetPortBits(PixelMap *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::KillPicture(Picture **)
 * Address: 00195820
 */
TQDLibraryDriver::KillPicture(Picture **) {
    /*
        195820:	eafffffe 	b	195820 <TQDLibraryDriver::KillPicture(Picture **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::OpenPicture(Rect *, unsigned char)
 * Address: 00195824
 */
TQDLibraryDriver::OpenPicture(Rect *, unsigned char) {
    /*
        195824:	e20220ff 	and	r2, r2, #255	; 0xff
        195828:	eafffffd 	b	195824 <TQDLibraryDriver::OpenPicture(Rect *, unsigned char)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PicComment(short, short, char **)
 * Address: 0019582c
 */
TQDLibraryDriver::PicComment(short, short, char **) {
    /*
        19582c:	e1a01801 	mov	r1, r1, lsl #16
        195830:	e1a01841 	mov	r1, r1, asr #16
        195834:	e1a02802 	mov	r2, r2, lsl #16
        195838:	e1a02842 	mov	r2, r2, asr #16
        19583c:	eafffffa 	b	19582c <TQDLibraryDriver::PicComment(short, short, char **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::EqualPt(Point, Point)
 * Address: 00195840
 */
TQDLibraryDriver::EqualPt(Point, Point) {
    /*
        195840:	eafffffe 	b	195840 <TQDLibraryDriver::EqualPt(Point, Point)>
    */
}

/**
 * Symbol: TQDLibraryDriver::LocalToGlobal(Point *)
 * Address: 00195844
 */
TQDLibraryDriver::LocalToGlobal(Point *) {
    /*
        195844:	eafffffe 	b	195844 <TQDLibraryDriver::LocalToGlobal(Point *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::MapPt(Point *, Rect *, Rect *)
 * Address: 00195848
 */
TQDLibraryDriver::MapPt(Point *, Rect *, Rect *) {
    /*
        195848:	eafffffe 	b	195848 <TQDLibraryDriver::MapPt(Point *, Rect *, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::ScalePt(Point *, Rect *, Rect *)
 * Address: 0019584c
 */
TQDLibraryDriver::ScalePt(Point *, Rect *, Rect *) {
    /*
        19584c:	eafffffe 	b	19584c <TQDLibraryDriver::ScalePt(Point *, Rect *, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetPt(Point *, long, long)
 * Address: 00195850
 */
TQDLibraryDriver::SetPt(Point *, long, long) {
    /*
        195850:	eafffffe 	b	195850 <TQDLibraryDriver::SetPt(Point *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::MapFPoint(FPoint *, Rect *, Rect *)
 * Address: 00195854
 */
TQDLibraryDriver::MapFPoint(FPoint *, Rect *, Rect *) {
    /*
        195854:	eafffffe 	b	195854 <TQDLibraryDriver::MapFPoint(FPoint *, Rect *, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::GetPixelMapBits(PixelMap *)
 * Address: 00195858
 */
TQDLibraryDriver::GetPixelMapBits(PixelMap *) {
    /*
        195858:	eafffffe 	b	195858 <TQDLibraryDriver::GetPixelMapBits(PixelMap *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetOrigin(long, long)
 * Address: 0019585c
 */
TQDLibraryDriver::SetOrigin(long, long) {
    /*
        19585c:	eafffffe 	b	19585c <TQDLibraryDriver::SetOrigin(long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PtInPixelMap(PixelMap *, long, long)
 * Address: 00195860
 */
TQDLibraryDriver::PtInPixelMap(PixelMap *, long, long) {
    /*
        195860:	eafffffe 	b	195860 <TQDLibraryDriver::PtInPixelMap(PixelMap *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::CopyBits(PixelMap *, PixelMap *, Rect *, Rect *, long, Region **)
 * Address: 00195864
 */
TQDLibraryDriver::CopyBits(PixelMap *, PixelMap *, Rect *, Rect *, long, Region **) {
    /*
        195864:	e1a0c00d 	mov	ip, sp
        195868:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19586c:	e24cb004 	sub	fp, ip, #4	; 0x4
        195870:	e1a04001 	mov	r4, r1
        195874:	e1a0e002 	mov	lr, r2
        195878:	e1a0c003 	mov	ip, r3
        19587c:	e99b000e 	ldmib	fp, {r1, r2, r3}
        195880:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        195884:	e1a0300c 	mov	r3, ip
        195888:	e1a0200e 	mov	r2, lr
        19588c:	e1a01004 	mov	r1, r4
        195890:	ebfffff3 	bl	195864 <TQDLibraryDriver::CopyBits(PixelMap *, PixelMap *, Rect *, Rect *, long, Region **)>
        195894:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::PackBits(char **, char **, long)
 * Address: 00195898
 */
TQDLibraryDriver::PackBits(char **, char **, long) {
    /*
        195898:	eafffffe 	b	195898 <TQDLibraryDriver::PackBits(char **, char **, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::ScrollRect(Rect *, long, long, Region **)
 * Address: 0019589c
 */
TQDLibraryDriver::ScrollRect(Rect *, long, long, Region **) {
    /*
        19589c:	e1a0c00d 	mov	ip, sp
        1958a0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1958a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1958a8:	e1a0c003 	mov	ip, r3
        1958ac:	e59b3004 	ldr	r3, [fp, #4]
        1958b0:	e92d0008 	stmdb	sp!, {r3}
        1958b4:	e1a0300c 	mov	r3, ip
        1958b8:	ebfffff7 	bl	19589c <TQDLibraryDriver::ScrollRect(Rect *, long, long, Region **)>
        1958bc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::UnpackBits(char **, char **, long)
 * Address: 001958c0
 */
TQDLibraryDriver::UnpackBits(char **, char **, long) {
    /*
        1958c0:	eafffffe 	b	1958c0 <TQDLibraryDriver::UnpackBits(char **, char **, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::UnpackWords(char **, char **, long)
 * Address: 001958c4
 */
TQDLibraryDriver::UnpackWords(char **, char **, long) {
    /*
        1958c4:	eafffffe 	b	1958c4 <TQDLibraryDriver::UnpackWords(char **, char **, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::GetRandSeed(void)
 * Address: 001958c8
 */
TQDLibraryDriver::GetRandSeed(void) {
    /*
        1958c8:	eafffffe 	b	1958c8 <TQDLibraryDriver::GetRandSeed(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::Random(void)
 * Address: 001958cc
 */
TQDLibraryDriver::Random(void) {
    /*
        1958cc:	eafffffe 	b	1958cc <TQDLibraryDriver::Random(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetRandSeed(long)
 * Address: 001958d0
 */
TQDLibraryDriver::SetRandSeed(long) {
    /*
        1958d0:	eafffffe 	b	1958d0 <TQDLibraryDriver::SetRandSeed(long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FrameCurve(curve *)
 * Address: 001958d4
 */
TQDLibraryDriver::FrameCurve(curve *) {
    /*
        1958d4:	eafffffe 	b	1958d4 <TQDLibraryDriver::FrameCurve(curve *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetClip(Region **)
 * Address: 001958d8
 */
TQDLibraryDriver::SetClip(Region **) {
    /*
        1958d8:	eafffffe 	b	1958d8 <TQDLibraryDriver::SetClip(Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PaintCurve(curve *)
 * Address: 001958dc
 */
TQDLibraryDriver::PaintCurve(curve *) {
    /*
        1958dc:	eafffffe 	b	1958dc <TQDLibraryDriver::PaintCurve(curve *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::EraseCurve(curve *)
 * Address: 001958e0
 */
TQDLibraryDriver::EraseCurve(curve *) {
    /*
        1958e0:	eafffffe 	b	1958e0 <TQDLibraryDriver::EraseCurve(curve *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::InvertCurve(curve *)
 * Address: 001958e4
 */
TQDLibraryDriver::InvertCurve(curve *) {
    /*
        1958e4:	eafffffe 	b	1958e4 <TQDLibraryDriver::InvertCurve(curve *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FillCurve(curve *, PixelMap **)
 * Address: 001958e8
 */
TQDLibraryDriver::FillCurve(curve *, PixelMap **) {
    /*
        1958e8:	eafffffe 	b	1958e8 <TQDLibraryDriver::FillCurve(curve *, PixelMap **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetCurve(curve *, FPoint, FPoint, FPoint)
 * Address: 001958ec
 */
TQDLibraryDriver::SetCurve(curve *, FPoint, FPoint, FPoint) {
    /*
        1958ec:	e1a0c00d 	mov	ip, sp
        1958f0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1958f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1958f8:	e24cb014 	sub	fp, ip, #20	; 0x14
        1958fc:	e1a0e003 	mov	lr, r3
        195900:	e24dd008 	sub	sp, sp, #8	; 0x8
        195904:	e28b501c 	add	r5, fp, #28	; 0x1c
        195908:	e8951010 	ldmia	r5, {r4, ip}
        19590c:	e88d1010 	stmia	sp, {r4, ip}
        195910:	e24dd008 	sub	sp, sp, #8	; 0x8
        195914:	e28b5014 	add	r5, fp, #20	; 0x14
        195918:	e8951010 	ldmia	r5, {r4, ip}
        19591c:	e88d1010 	stmia	sp, {r4, ip}
        195920:	e1a0300e 	mov	r3, lr
        195924:	ebfffff0 	bl	1958ec <TQDLibraryDriver::SetCurve(curve *, FPoint, FPoint, FPoint)>
        195928:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::OffsetCurve(curve *, long, long)
 * Address: 0019592c
 */
TQDLibraryDriver::OffsetCurve(curve *, long, long) {
    /*
        19592c:	eafffffe 	b	19592c <TQDLibraryDriver::OffsetCurve(curve *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::EqualCurve(curve *, curve *)
 * Address: 00195930
 */
TQDLibraryDriver::EqualCurve(curve *, curve *) {
    /*
        195930:	eafffffe 	b	195930 <TQDLibraryDriver::EqualCurve(curve *, curve *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::GetCurveBounds(curve *, Rect *)
 * Address: 00195934
 */
TQDLibraryDriver::GetCurveBounds(curve *, Rect *) {
    /*
        195934:	eafffffe 	b	195934 <TQDLibraryDriver::GetCurveBounds(curve *, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::ScaleCurve(curve *, long, long)
 * Address: 00195938
 */
TQDLibraryDriver::ScaleCurve(curve *, long, long) {
    /*
        195938:	eafffffe 	b	195938 <TQDLibraryDriver::ScaleCurve(curve *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::MapCurve(curve *, Rect *, Rect *)
 * Address: 0019593c
 */
TQDLibraryDriver::MapCurve(curve *, Rect *, Rect *) {
    /*
        19593c:	eafffffe 	b	19593c <TQDLibraryDriver::MapCurve(curve *, Rect *, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::GetClip(Region **)
 * Address: 00195940
 */
TQDLibraryDriver::GetClip(Region **) {
    /*
        195940:	eafffffe 	b	195940 <TQDLibraryDriver::GetClip(Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FramePaths(paths **)
 * Address: 00195944
 */
TQDLibraryDriver::FramePaths(paths **) {
    /*
        195944:	eafffffe 	b	195944 <TQDLibraryDriver::FramePaths(paths **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PaintPaths(paths **)
 * Address: 00195948
 */
TQDLibraryDriver::PaintPaths(paths **) {
    /*
        195948:	eafffffe 	b	195948 <TQDLibraryDriver::PaintPaths(paths **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::ErasePaths(paths **)
 * Address: 0019594c
 */
TQDLibraryDriver::ErasePaths(paths **) {
    /*
        19594c:	eafffffe 	b	19594c <TQDLibraryDriver::ErasePaths(paths **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::InvertPaths(paths **)
 * Address: 00195950
 */
TQDLibraryDriver::InvertPaths(paths **) {
    /*
        195950:	eafffffe 	b	195950 <TQDLibraryDriver::InvertPaths(paths **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FillPaths(paths **, PixelMap **)
 * Address: 00195954
 */
TQDLibraryDriver::FillPaths(paths **, PixelMap **) {
    /*
        195954:	eafffffe 	b	195954 <TQDLibraryDriver::FillPaths(paths **, PixelMap **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::OffsetPaths(paths **, long, long)
 * Address: 00195958
 */
TQDLibraryDriver::OffsetPaths(paths **, long, long) {
    /*
        195958:	eafffffe 	b	195958 <TQDLibraryDriver::OffsetPaths(paths **, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::DisposePaths(paths **)
 * Address: 0019595c
 */
TQDLibraryDriver::DisposePaths(paths **) {
    /*
        19595c:	eafffffe 	b	19595c <TQDLibraryDriver::DisposePaths(paths **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::MapPaths(paths **, Rect *, Rect *)
 * Address: 00195960
 */
TQDLibraryDriver::MapPaths(paths **, Rect *, Rect *) {
    /*
        195960:	eafffffe 	b	195960 <TQDLibraryDriver::MapPaths(paths **, Rect *, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::ScalePaths(paths **, long, long)
 * Address: 00195964
 */
TQDLibraryDriver::ScalePaths(paths **, long, long) {
    /*
        195964:	eafffffe 	b	195964 <TQDLibraryDriver::ScalePaths(paths **, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::CopyPaths(paths **, paths **)
 * Address: 00195968
 */
TQDLibraryDriver::CopyPaths(paths **, paths **) {
    /*
        195968:	eafffffe 	b	195968 <TQDLibraryDriver::CopyPaths(paths **, paths **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::ClipRect(Rect *)
 * Address: 0019596c
 */
TQDLibraryDriver::ClipRect(Rect *) {
    /*
        19596c:	eafffffe 	b	19596c <TQDLibraryDriver::ClipRect(Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SizeOfPaths(paths **)
 * Address: 00195970
 */
TQDLibraryDriver::SizeOfPaths(paths **) {
    /*
        195970:	eafffffe 	b	195970 <TQDLibraryDriver::SizeOfPaths(paths **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::GetPathsBounds(paths **, Rect *)
 * Address: 00195974
 */
TQDLibraryDriver::GetPathsBounds(paths **, Rect *) {
    /*
        195974:	eafffffe 	b	195974 <TQDLibraryDriver::GetPathsBounds(paths **, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::InitPathWalker(pathWalker *, path *)
 * Address: 00195978
 */
TQDLibraryDriver::InitPathWalker(pathWalker *, path *) {
    /*
        195978:	eafffffe 	b	195978 <TQDLibraryDriver::InitPathWalker(pathWalker *, path *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::NextPath(path *)
 * Address: 0019597c
 */
TQDLibraryDriver::NextPath(path *) {
    /*
        19597c:	eafffffe 	b	19597c <TQDLibraryDriver::NextPath(path *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::NextPathSegment(pathWalker *)
 * Address: 00195980
 */
TQDLibraryDriver::NextPathSegment(pathWalker *) {
    /*
        195980:	eafffffe 	b	195980 <TQDLibraryDriver::NextPathSegment(pathWalker *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::DisposePattern(PixelMap **)
 * Address: 00195984
 */
TQDLibraryDriver::DisposePattern(PixelMap **) {
    /*
        195984:	eafffffe 	b	195984 <TQDLibraryDriver::DisposePattern(PixelMap **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::DisposeFgPattern(void)
 * Address: 00195988
 */
TQDLibraryDriver::DisposeFgPattern(void) {
    /*
        195988:	eafffffe 	b	195988 <TQDLibraryDriver::DisposeFgPattern(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetFgPattern(PixelMap **)
 * Address: 0019598c
 */
TQDLibraryDriver::SetFgPattern(PixelMap **) {
    /*
        19598c:	eafffffe 	b	19598c <TQDLibraryDriver::SetFgPattern(PixelMap **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetBgPattern(PixelMap **)
 * Address: 00195990
 */
TQDLibraryDriver::SetBgPattern(PixelMap **) {
    /*
        195990:	eafffffe 	b	195990 <TQDLibraryDriver::SetBgPattern(PixelMap **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::GetFgPattern(void)
 * Address: 00195994
 */
TQDLibraryDriver::GetFgPattern(void) {
    /*
        195994:	eafffffe 	b	195994 <TQDLibraryDriver::GetFgPattern(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetStdProcs(QDProcs *)
 * Address: 00195998
 */
TQDLibraryDriver::SetStdProcs(QDProcs *) {
    /*
        195998:	eafffffe 	b	195998 <TQDLibraryDriver::SetStdProcs(QDProcs *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::GetBgPattern(void)
 * Address: 0019599c
 */
TQDLibraryDriver::GetBgPattern(void) {
    /*
        19599c:	eafffffe 	b	19599c <TQDLibraryDriver::GetBgPattern(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::MakeSimplePattern(long, long, long, long, long, long, long, long)
 * Address: 001959a0
 */
TQDLibraryDriver::MakeSimplePattern(long, long, long, long, long, long, long, long) {
    /*
        1959a0:	e1a0c00d 	mov	ip, sp
        1959a4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1959a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1959ac:	e1a05000 	mov	r5, r0
        1959b0:	e1a04001 	mov	r4, r1
        1959b4:	e1a0e002 	mov	lr, r2
        1959b8:	e1a0c003 	mov	ip, r3
        1959bc:	e28b3008 	add	r3, fp, #8	; 0x8
        1959c0:	e893000f 	ldmia	r3, {r0, r1, r2, r3}
        1959c4:	e59b6004 	ldr	r6, [fp, #4]
        1959c8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1959cc:	e1a03006 	mov	r3, r6
        1959d0:	e92d0008 	stmdb	sp!, {r3}
        1959d4:	e1a0300c 	mov	r3, ip
        1959d8:	e1a0200e 	mov	r2, lr
        1959dc:	e1a01004 	mov	r1, r4
        1959e0:	e1a00005 	mov	r0, r5
        1959e4:	ebffffed 	bl	1959a0 <TQDLibraryDriver::MakeSimplePattern(long, long, long, long, long, long, long, long)>
        1959e8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::MakeSimplePattern(char *)
 * Address: 001959ec
 */
TQDLibraryDriver::MakeSimplePattern(char *) {
    /*
        1959ec:	eafffffe 	b	1959ec <TQDLibraryDriver::MakeSimplePattern(char *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::GetStdPattern(unsigned char)
 * Address: 001959f0
 */
TQDLibraryDriver::GetStdPattern(unsigned char) {
    /*
        1959f0:	e20110ff 	and	r1, r1, #255	; 0xff
        1959f4:	eafffffd 	b	1959f0 <TQDLibraryDriver::GetStdPattern(unsigned char)>
    */
}

/**
 * Symbol: TQDLibraryDriver::CopyPattern(PixelMap **)
 * Address: 001959f8
 */
TQDLibraryDriver::CopyPattern(PixelMap **) {
    /*
        1959f8:	eafffffe 	b	1959f8 <TQDLibraryDriver::CopyPattern(PixelMap **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::EqualPat(PixelMap **, PixelMap **)
 * Address: 001959fc
 */
TQDLibraryDriver::EqualPat(PixelMap **, PixelMap **) {
    /*
        1959fc:	eafffffe 	b	1959fc <TQDLibraryDriver::EqualPat(PixelMap **, PixelMap **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::MonochromePat(PixelMap **, unsigned long *)
 * Address: 00195a00
 */
TQDLibraryDriver::MonochromePat(PixelMap **, unsigned long *) {
    /*
        195a00:	eafffffe 	b	195a00 <TQDLibraryDriver::MonochromePat(PixelMap **, unsigned long *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::MakeSimpleStyle(RefVar const &, long, long)
 * Address: 00195a04
 */
TQDLibraryDriver::MakeSimpleStyle(RefVar const &, long, long) {
    /*
        195a04:	e1a0c00d 	mov	ip, sp
        195a08:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        195a0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        195a10:	e1a0c003 	mov	ip, r3
        195a14:	e59b3004 	ldr	r3, [fp, #4]
        195a18:	e24dd020 	sub	sp, sp, #32	; 0x20
        195a1c:	e1a04000 	mov	r4, r0
        195a20:	e92d0008 	stmdb	sp!, {r3}
        195a24:	e1a0300c 	mov	r3, ip
        195a28:	e28d0004 	add	r0, sp, #4	; 0x4
        195a2c:	ebfffff4 	bl	195a04 <TQDLibraryDriver::MakeSimpleStyle(RefVar const &, long, long)>
        195a30:	e28dd004 	add	sp, sp, #4	; 0x4
        195a34:	e3a05000 	mov	r5, #0	; 0x0
        195a38:	e3340000 	teq	r4, #0	; 0x0
        195a3c:	1a000003 	bne	195a50 <TQDLibraryDriver::MakeSimpleStyle(RefVar const &, long, long)+0x4c>
        195a40:	e3a00020 	mov	r0, #32	; 0x20
        195a44:	eb68e33b 	bl	1bce738 <$__nw(unsigned int)>
        195a48:	e1b04000 	movs	r4, r0
        195a4c:	0a00000a 	beq	195a7c <TQDLibraryDriver::MakeSimpleStyle(RefVar const &, long, long)+0x78>
        195a50:	e59d0000 	ldr	r0, [sp]
        195a54:	e5900000 	ldr	r0, [r0]
        195a58:	eb68b1bb 	bl	1bc214c <$AllocateRefHandle(long)>
        195a5c:	e5840000 	str	r0, [r4]
        195a60:	e5a05004 	str	r5, [r0, #4]!
        195a64:	e2840004 	add	r0, r4, #4	; 0x4
        195a68:	e28de004 	add	lr, sp, #4	; 0x4
        195a6c:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        195a70:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        195a74:	e89e100c 	ldmia	lr, {r2, r3, ip}
        195a78:	e880100c 	stmia	r0, {r2, r3, ip}
        195a7c:	e59d001c 	ldr	r0, [sp, #28]
        195a80:	e3300000 	teq	r0, #0	; 0x0
        195a84:	159d001c 	ldrne	r0, [sp, #28]
        195a88:	1b66df13 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        195a8c:	e59d0000 	ldr	r0, [sp]
        195a90:	eb68b5c9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        195a94:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::EqualStyle(StyleRecord *, StyleRecord *)
 * Address: 00195a98
 */
TQDLibraryDriver::EqualStyle(StyleRecord *, StyleRecord *) {
    /*
        195a98:	eafffffe 	b	195a98 <TQDLibraryDriver::EqualStyle(StyleRecord *, StyleRecord *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::CopyStyle(StyleRecord *)
 * Address: 00195a9c
 */
TQDLibraryDriver::CopyStyle(StyleRecord *) {
    /*
        195a9c:	e1a0c00d 	mov	ip, sp
        195aa0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        195aa4:	e24cb004 	sub	fp, ip, #4	; 0x4
        195aa8:	e24dd020 	sub	sp, sp, #32	; 0x20
        195aac:	e1a04000 	mov	r4, r0
        195ab0:	e1a0000d 	mov	r0, sp
        195ab4:	ebfffff8 	bl	195a9c <TQDLibraryDriver::CopyStyle(StyleRecord *)>
        195ab8:	e3a05000 	mov	r5, #0	; 0x0
        195abc:	e3340000 	teq	r4, #0	; 0x0
        195ac0:	1a000003 	bne	195ad4 <TQDLibraryDriver::CopyStyle(StyleRecord *)+0x38>
        195ac4:	e3a00020 	mov	r0, #32	; 0x20
        195ac8:	eb68e31a 	bl	1bce738 <$__nw(unsigned int)>
        195acc:	e1b04000 	movs	r4, r0
        195ad0:	0a00000a 	beq	195b00 <TQDLibraryDriver::CopyStyle(StyleRecord *)+0x64>
        195ad4:	e59d0000 	ldr	r0, [sp]
        195ad8:	e5900000 	ldr	r0, [r0]
        195adc:	eb68b19a 	bl	1bc214c <$AllocateRefHandle(long)>
        195ae0:	e5840000 	str	r0, [r4]
        195ae4:	e5a05004 	str	r5, [r0, #4]!
        195ae8:	e2840004 	add	r0, r4, #4	; 0x4
        195aec:	e28de004 	add	lr, sp, #4	; 0x4
        195af0:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        195af4:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        195af8:	e89e100c 	ldmia	lr, {r2, r3, ip}
        195afc:	e880100c 	stmia	r0, {r2, r3, ip}
        195b00:	e59d001c 	ldr	r0, [sp, #28]
        195b04:	e3300000 	teq	r0, #0	; 0x0
        195b08:	159d001c 	ldrne	r0, [sp, #28]
        195b0c:	1b66def2 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        195b10:	e59d0000 	ldr	r0, [sp]
        195b14:	eb68b5a8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        195b18:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::InitPortRgns(GrafPort *)
 * Address: 00195b1c
 */
TQDLibraryDriver::InitPortRgns(GrafPort *) {
    /*
        195b1c:	eafffffe 	b	195b1c <TQDLibraryDriver::InitPortRgns(GrafPort *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FlushFontCache(void)
 * Address: 00195b20
 */
TQDLibraryDriver::FlushFontCache(void) {
    /*
        195b20:	eafffffe 	b	195b20 <TQDLibraryDriver::FlushFontCache(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::NewText(void *, long, StyleRecord **, short *, FPoint, TextOptions *)
 * Address: 00195b24
 */
TQDLibraryDriver::NewText(void *, long, StyleRecord **, short *, FPoint, TextOptions *) {
    /*
        195b24:	e1a0c00d 	mov	ip, sp
        195b28:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        195b2c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        195b30:	e24cb014 	sub	fp, ip, #20	; 0x14
        195b34:	e1a0e003 	mov	lr, r3
        195b38:	e59b3020 	ldr	r3, [fp, #32]
        195b3c:	e59b4014 	ldr	r4, [fp, #20]
        195b40:	e92d0008 	stmdb	sp!, {r3}
        195b44:	e24dd008 	sub	sp, sp, #8	; 0x8
        195b48:	e28b6018 	add	r6, fp, #24	; 0x18
        195b4c:	e8961020 	ldmia	r6, {r5, ip}
        195b50:	e88d1020 	stmia	sp, {r5, ip}
        195b54:	e1a03004 	mov	r3, r4
        195b58:	e92d0008 	stmdb	sp!, {r3}
        195b5c:	e1a0300e 	mov	r3, lr
        195b60:	ebffffef 	bl	195b24 <TQDLibraryDriver::NewText(void *, long, StyleRecord **, short *, FPoint, TextOptions *)>
        195b64:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::DrawTextObj(long)
 * Address: 00195b68
 */
TQDLibraryDriver::DrawTextObj(long) {
    /*
        195b68:	eafffffe 	b	195b68 <TQDLibraryDriver::DrawTextObj(long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::DisposeText(long)
 * Address: 00195b6c
 */
TQDLibraryDriver::DisposeText(long) {
    /*
        195b6c:	eafffffe 	b	195b6c <TQDLibraryDriver::DisposeText(long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)
 * Address: 00195b70
 */
TQDLibraryDriver::DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *) {
    /*
        195b70:	e1a0c00d 	mov	ip, sp
        195b74:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        195b78:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        195b7c:	e24cb014 	sub	fp, ip, #20	; 0x14
        195b80:	e1a04002 	mov	r4, r2
        195b84:	e1a0e003 	mov	lr, r3
        195b88:	e28b3020 	add	r3, fp, #32	; 0x20
        195b8c:	e893000c 	ldmia	r3, {r2, r3}
        195b90:	e59b5014 	ldr	r5, [fp, #20]
        195b94:	e92d000c 	stmdb	sp!, {r2, r3}
        195b98:	e24dd008 	sub	sp, sp, #8	; 0x8
        195b9c:	e28b6018 	add	r6, fp, #24	; 0x18
        195ba0:	e8961008 	ldmia	r6, {r3, ip}
        195ba4:	e88d1008 	stmia	sp, {r3, ip}
        195ba8:	e1a03005 	mov	r3, r5
        195bac:	e92d0008 	stmdb	sp!, {r3}
        195bb0:	e1a0300e 	mov	r3, lr
        195bb4:	e1a02004 	mov	r2, r4
        195bb8:	ebffffec 	bl	195b70 <TQDLibraryDriver::DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        195bbc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::MeasureTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)
 * Address: 00195bc0
 */
TQDLibraryDriver::MeasureTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *) {
    /*
        195bc0:	e1a0c00d 	mov	ip, sp
        195bc4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        195bc8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        195bcc:	e24cb014 	sub	fp, ip, #20	; 0x14
        195bd0:	e1a04002 	mov	r4, r2
        195bd4:	e1a0e003 	mov	lr, r3
        195bd8:	e28b3020 	add	r3, fp, #32	; 0x20
        195bdc:	e893000c 	ldmia	r3, {r2, r3}
        195be0:	e59b5014 	ldr	r5, [fp, #20]
        195be4:	e92d000c 	stmdb	sp!, {r2, r3}
        195be8:	e24dd008 	sub	sp, sp, #8	; 0x8
        195bec:	e28b6018 	add	r6, fp, #24	; 0x18
        195bf0:	e8961008 	ldmia	r6, {r3, ip}
        195bf4:	e88d1008 	stmia	sp, {r3, ip}
        195bf8:	e1a03005 	mov	r3, r5
        195bfc:	e92d0008 	stmdb	sp!, {r3}
        195c00:	e1a0300e 	mov	r3, lr
        195c04:	e1a02004 	mov	r2, r4
        195c08:	ebffffec 	bl	195bc0 <TQDLibraryDriver::MeasureTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        195c0c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::DrawRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *)
 * Address: 00195c10
 */
TQDLibraryDriver::DrawRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *) {
    /*
        195c10:	e1a0c00d 	mov	ip, sp
        195c14:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        195c18:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        195c1c:	e24cb014 	sub	fp, ip, #20	; 0x14
        195c20:	e1a04002 	mov	r4, r2
        195c24:	e1a0e003 	mov	lr, r3
        195c28:	e28b3020 	add	r3, fp, #32	; 0x20
        195c2c:	e893000c 	ldmia	r3, {r2, r3}
        195c30:	e59b5014 	ldr	r5, [fp, #20]
        195c34:	e92d000c 	stmdb	sp!, {r2, r3}
        195c38:	e24dd008 	sub	sp, sp, #8	; 0x8
        195c3c:	e28b6018 	add	r6, fp, #24	; 0x18
        195c40:	e8961008 	ldmia	r6, {r3, ip}
        195c44:	e88d1008 	stmia	sp, {r3, ip}
        195c48:	e1a03005 	mov	r3, r5
        195c4c:	e92d0008 	stmdb	sp!, {r3}
        195c50:	e1a0300e 	mov	r3, lr
        195c54:	e1a02004 	mov	r2, r4
        195c58:	ebffffec 	bl	195c10 <TQDLibraryDriver::DrawRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *)>
        195c5c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::MeasureRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *)
 * Address: 00195c60
 */
TQDLibraryDriver::MeasureRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *) {
    /*
        195c60:	e1a0c00d 	mov	ip, sp
        195c64:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        195c68:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        195c6c:	e24cb014 	sub	fp, ip, #20	; 0x14
        195c70:	e1a04002 	mov	r4, r2
        195c74:	e1a0e003 	mov	lr, r3
        195c78:	e28b3020 	add	r3, fp, #32	; 0x20
        195c7c:	e893000c 	ldmia	r3, {r2, r3}
        195c80:	e59b5014 	ldr	r5, [fp, #20]
        195c84:	e92d000c 	stmdb	sp!, {r2, r3}
        195c88:	e24dd008 	sub	sp, sp, #8	; 0x8
        195c8c:	e28b6018 	add	r6, fp, #24	; 0x18
        195c90:	e8961008 	ldmia	r6, {r3, ip}
        195c94:	e88d1008 	stmia	sp, {r3, ip}
        195c98:	e1a03005 	mov	r3, r5
        195c9c:	e92d0008 	stmdb	sp!, {r3}
        195ca0:	e1a0300e 	mov	r3, lr
        195ca4:	e1a02004 	mov	r2, r4
        195ca8:	ebffffec 	bl	195c60 <TQDLibraryDriver::MeasureRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *)>
        195cac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::GetTextObjField(long, int, void *)
 * Address: 00195cb0
 */
TQDLibraryDriver::GetTextObjField(long, int, void *) {
    /*
        195cb0:	eafffffe 	b	195cb0 <TQDLibraryDriver::GetTextObjField(long, int, void *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetTextObjField(long, int, void *)
 * Address: 00195cb4
 */
TQDLibraryDriver::SetTextObjField(long, int, void *) {
    /*
        195cb4:	eafffffe 	b	195cb4 <TQDLibraryDriver::SetTextObjField(long, int, void *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::HidePen(void)
 * Address: 00195cb8
 */
TQDLibraryDriver::HidePen(void) {
    /*
        195cb8:	eafffffe 	b	195cb8 <TQDLibraryDriver::HidePen(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::CharToPoint(long, long, FPoint *)
 * Address: 00195cbc
 */
TQDLibraryDriver::CharToPoint(long, long, FPoint *) {
    /*
        195cbc:	eafffffe 	b	195cbc <TQDLibraryDriver::CharToPoint(long, long, FPoint *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PointToChar(long, FPoint)
 * Address: 00195cc0
 */
TQDLibraryDriver::PointToChar(long, FPoint) {
    /*
        195cc0:	eafffffe 	b	195cc0 <TQDLibraryDriver::PointToChar(long, FPoint)>
    */
}

/**
 * Symbol: TQDLibraryDriver::TextArrowOffset(long, long, unsigned char)
 * Address: 00195cc4
 */
TQDLibraryDriver::TextArrowOffset(long, long, unsigned char) {
    /*
        195cc4:	e20330ff 	and	r3, r3, #255	; 0xff
        195cc8:	eafffffd 	b	195cc4 <TQDLibraryDriver::TextArrowOffset(long, long, unsigned char)>
    */
}

/**
 * Symbol: TQDLibraryDriver::InitTextWalker(long, TextWalker *, unsigned char)
 * Address: 00195ccc
 */
TQDLibraryDriver::InitTextWalker(long, TextWalker *, unsigned char) {
    /*
        195ccc:	e20330ff 	and	r3, r3, #255	; 0xff
        195cd0:	eafffffd 	b	195ccc <TQDLibraryDriver::InitTextWalker(long, TextWalker *, unsigned char)>
    */
}

/**
 * Symbol: TQDLibraryDriver::ReleaseTextWalker(TextWalker *)
 * Address: 00195cd4
 */
TQDLibraryDriver::ReleaseTextWalker(TextWalker *) {
    /*
        195cd4:	eafffffe 	b	195cd4 <TQDLibraryDriver::ReleaseTextWalker(TextWalker *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::ScanNextChunk(long *, void **, TextWalker *, long **)
 * Address: 00195cd8
 */
TQDLibraryDriver::ScanNextChunk(long *, void **, TextWalker *, long **) {
    /*
        195cd8:	e1a0c00d 	mov	ip, sp
        195cdc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        195ce0:	e24cb004 	sub	fp, ip, #4	; 0x4
        195ce4:	e1a0c003 	mov	ip, r3
        195ce8:	e59b3004 	ldr	r3, [fp, #4]
        195cec:	e92d0008 	stmdb	sp!, {r3}
        195cf0:	e1a0300c 	mov	r3, ip
        195cf4:	ebfffff7 	bl	195cd8 <TQDLibraryDriver::ScanNextChunk(long *, void **, TextWalker *, long **)>
        195cf8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::GetGrafInfo(long, void *)
 * Address: 00195cfc
 */
TQDLibraryDriver::GetGrafInfo(long, void *) {
    /*
        195cfc:	eafffffe 	b	195cfc <TQDLibraryDriver::GetGrafInfo(long, void *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetGrafInfo(long, long)
 * Address: 00195d00
 */
TQDLibraryDriver::SetGrafInfo(long, long) {
    /*
        195d00:	eafffffe 	b	195d00 <TQDLibraryDriver::SetGrafInfo(long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::InitScreen(void)
 * Address: 00195d04
 */
TQDLibraryDriver::InitScreen(void) {
    /*
        195d04:	eafffffe 	b	195d04 <TQDLibraryDriver::InitScreen(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::LCDPowerInit(unsigned char)
 * Address: 00195d08
 */
TQDLibraryDriver::LCDPowerInit(unsigned char) {
    /*
        195d08:	e20110ff 	and	r1, r1, #255	; 0xff
        195d0c:	eafffffd 	b	195d08 <TQDLibraryDriver::LCDPowerInit(unsigned char)>
    */
}

/**
 * Symbol: TQDLibraryDriver::ShowPen(void)
 * Address: 00195d10
 */
TQDLibraryDriver::ShowPen(void) {
    /*
        195d10:	eafffffe 	b	195d10 <TQDLibraryDriver::ShowPen(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::LCDPowerOn(unsigned char)
 * Address: 00195d14
 */
TQDLibraryDriver::LCDPowerOn(unsigned char) {
    /*
        195d14:	e20110ff 	and	r1, r1, #255	; 0xff
        195d18:	eafffffd 	b	195d14 <TQDLibraryDriver::LCDPowerOn(unsigned char)>
    */
}

/**
 * Symbol: TQDLibraryDriver::LCDPowerOff(unsigned char)
 * Address: 00195d1c
 */
TQDLibraryDriver::LCDPowerOff(unsigned char) {
    /*
        195d1c:	e20110ff 	and	r1, r1, #255	; 0xff
        195d20:	eafffffd 	b	195d1c <TQDLibraryDriver::LCDPowerOff(unsigned char)>
    */
}

/**
 * Symbol: TQDLibraryDriver::LCDEnterIdleMode(void)
 * Address: 00195d24
 */
TQDLibraryDriver::LCDEnterIdleMode(void) {
    /*
        195d24:	eafffffe 	b	195d24 <TQDLibraryDriver::LCDEnterIdleMode(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::LCDExitIdleMode(void)
 * Address: 00195d28
 */
TQDLibraryDriver::LCDExitIdleMode(void) {
    /*
        195d28:	eafffffe 	b	195d28 <TQDLibraryDriver::LCDExitIdleMode(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::StartDrawing(PixelMap *, Rect *)
 * Address: 00195d2c
 */
TQDLibraryDriver::StartDrawing(PixelMap *, Rect *) {
    /*
        195d2c:	eafffffe 	b	195d2c <TQDLibraryDriver::StartDrawing(PixelMap *, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::StopDrawing(PixelMap *, Rect *)
 * Address: 00195d30
 */
TQDLibraryDriver::StopDrawing(PixelMap *, Rect *) {
    /*
        195d30:	eafffffe 	b	195d30 <TQDLibraryDriver::StopDrawing(PixelMap *, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::ReleaseScreenLock(void)
 * Address: 00195d34
 */
TQDLibraryDriver::ReleaseScreenLock(void) {
    /*
        195d34:	eafffffe 	b	195d34 <TQDLibraryDriver::ReleaseScreenLock(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PtInCPixelMap(PixelMap *, long, long)
 * Address: 00195d38
 */
TQDLibraryDriver::PtInCPixelMap(PixelMap *, long, long) {
    /*
        195d38:	eafffffe 	b	195d38 <TQDLibraryDriver::PtInCPixelMap(PixelMap *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PtInMask(PixelMap *, long, long)
 * Address: 00195d3c
 */
TQDLibraryDriver::PtInMask(PixelMap *, long, long) {
    /*
        195d3c:	eafffffe 	b	195d3c <TQDLibraryDriver::PtInMask(PixelMap *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::RGBtoGray(unsigned long, unsigned long, unsigned long, long, long)
 * Address: 00195d40
 */
TQDLibraryDriver::RGBtoGray(unsigned long, unsigned long, unsigned long, long, long) {
    /*
        195d40:	e1a0c00d 	mov	ip, sp
        195d44:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        195d48:	e24cb004 	sub	fp, ip, #4	; 0x4
        195d4c:	e1a0c002 	mov	ip, r2
        195d50:	e1a0e003 	mov	lr, r3
        195d54:	e99b000c 	ldmib	fp, {r2, r3}
        195d58:	e92d000c 	stmdb	sp!, {r2, r3}
        195d5c:	e1a0300e 	mov	r3, lr
        195d60:	e1a0200c 	mov	r2, ip
        195d64:	ebfffff5 	bl	195d40 <TQDLibraryDriver::RGBtoGray(unsigned long, unsigned long, unsigned long, long, long)>
        195d68:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::GetPen(Point *)
 * Address: 00195d6c
 */
TQDLibraryDriver::GetPen(Point *) {
    /*
        195d6c:	eafffffe 	b	195d6c <TQDLibraryDriver::GetPen(Point *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::GrayToRGB(unsigned char, unsigned long *, unsigned long *, unsigned long *, long)
 * Address: 00195d70
 */
TQDLibraryDriver::GrayToRGB(unsigned char, unsigned long *, unsigned long *, unsigned long *, long) {
    /*
        195d70:	e1a0c00d 	mov	ip, sp
        195d74:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        195d78:	e24cb004 	sub	fp, ip, #4	; 0x4
        195d7c:	e1a0c002 	mov	ip, r2
        195d80:	e1a0e003 	mov	lr, r3
        195d84:	e20110ff 	and	r1, r1, #255	; 0xff
        195d88:	e99b000c 	ldmib	fp, {r2, r3}
        195d8c:	e92d000c 	stmdb	sp!, {r2, r3}
        195d90:	e1a0300e 	mov	r3, lr
        195d94:	e1a0200c 	mov	r2, ip
        195d98:	ebfffff4 	bl	195d70 <TQDLibraryDriver::GrayToRGB(unsigned char, unsigned long *, unsigned long *, unsigned long *, long)>
        195d9c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::PackRGBvalues(unsigned long, unsigned long, unsigned long)
 * Address: 00195da0
 */
TQDLibraryDriver::PackRGBvalues(unsigned long, unsigned long, unsigned long) {
    /*
        195da0:	eafffffe 	b	195da0 <TQDLibraryDriver::PackRGBvalues(unsigned long, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::UnpackRGBvalues(unsigned long, unsigned long *, unsigned long *, unsigned long *)
 * Address: 00195da4
 */
TQDLibraryDriver::UnpackRGBvalues(unsigned long, unsigned long *, unsigned long *, unsigned long *) {
    /*
        195da4:	e1a0c00d 	mov	ip, sp
        195da8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        195dac:	e24cb004 	sub	fp, ip, #4	; 0x4
        195db0:	e1a0c003 	mov	ip, r3
        195db4:	e59b3004 	ldr	r3, [fp, #4]
        195db8:	e92d0008 	stmdb	sp!, {r3}
        195dbc:	e1a0300c 	mov	r3, ip
        195dc0:	ebfffff7 	bl	195da4 <TQDLibraryDriver::UnpackRGBvalues(unsigned long, unsigned long *, unsigned long *, unsigned long *)>
        195dc4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::GetStdGrayPattern(unsigned long, unsigned long, unsigned long)
 * Address: 00195dc8
 */
TQDLibraryDriver::GetStdGrayPattern(unsigned long, unsigned long, unsigned long) {
    /*
        195dc8:	eafffffe 	b	195dc8 <TQDLibraryDriver::GetStdGrayPattern(unsigned long, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::MakeGrayPattern(RefVar const &)
 * Address: 00195dcc
 */
TQDLibraryDriver::MakeGrayPattern(RefVar const &) {
    /*
        195dcc:	eafffffe 	b	195dcc <TQDLibraryDriver::MakeGrayPattern(RefVar const &)>
    */
}

/**
 * Symbol: TQDLibraryDriver::MakeSimpleGrayPattern(long *, unsigned long, unsigned long)
 * Address: 00195dd0
 */
TQDLibraryDriver::MakeSimpleGrayPattern(long *, unsigned long, unsigned long) {
    /*
        195dd0:	eafffffe 	b	195dd0 <TQDLibraryDriver::MakeSimpleGrayPattern(long *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PutPixMap(PixelMap *)
 * Address: 00195dd4
 */
TQDLibraryDriver::PutPixMap(PixelMap *) {
    /*
        195dd4:	eafffffe 	b	195dd4 <TQDLibraryDriver::PutPixMap(PixelMap *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PutColorTable(long)
 * Address: 00195dd8
 */
TQDLibraryDriver::PutColorTable(long) {
    /*
        195dd8:	eafffffe 	b	195dd8 <TQDLibraryDriver::PutColorTable(long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PutGrayTable(PixelMap *)
 * Address: 00195ddc
 */
TQDLibraryDriver::PutGrayTable(PixelMap *) {
    /*
        195ddc:	eafffffe 	b	195ddc <TQDLibraryDriver::PutGrayTable(PixelMap *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::Delete(void)
 * Address: 00195de0
 */
TQDLibraryDriver::Delete(void) {
    /*
        195de0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TQDLibraryDriver::GetPenState(PenState *)
 * Address: 00195de4
 */
TQDLibraryDriver::GetPenState(PenState *) {
    /*
        195de4:	eafffffe 	b	195de4 <TQDLibraryDriver::GetPenState(PenState *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetPenState(PenState *)
 * Address: 00195de8
 */
TQDLibraryDriver::SetPenState(PenState *) {
    /*
        195de8:	eafffffe 	b	195de8 <TQDLibraryDriver::SetPenState(PenState *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PenSize(long, long)
 * Address: 00195dec
 */
TQDLibraryDriver::PenSize(long, long) {
    /*
        195dec:	eafffffe 	b	195dec <TQDLibraryDriver::PenSize(long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PenMode(long)
 * Address: 00195df0
 */
TQDLibraryDriver::PenMode(long) {
    /*
        195df0:	eafffffe 	b	195df0 <TQDLibraryDriver::PenMode(long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PenNormal(void)
 * Address: 00195df4
 */
TQDLibraryDriver::PenNormal(void) {
    /*
        195df4:	eafffffe 	b	195df4 <TQDLibraryDriver::PenNormal(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::MoveTo(long, long)
 * Address: 00195df8
 */
TQDLibraryDriver::MoveTo(long, long) {
    /*
        195df8:	eafffffe 	b	195df8 <TQDLibraryDriver::MoveTo(long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::Move(long, long)
 * Address: 00195dfc
 */
TQDLibraryDriver::Move(long, long) {
    /*
        195dfc:	eafffffe 	b	195dfc <TQDLibraryDriver::Move(long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::LineTo(long, long)
 * Address: 00195e00
 */
TQDLibraryDriver::LineTo(long, long) {
    /*
        195e00:	eafffffe 	b	195e00 <TQDLibraryDriver::LineTo(long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::Line(long, long)
 * Address: 00195e04
 */
TQDLibraryDriver::Line(long, long) {
    /*
        195e04:	eafffffe 	b	195e04 <TQDLibraryDriver::Line(long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::InkerLine(Point const, Point const, Rect *, Point const)
 * Address: 00195e08
 */
TQDLibraryDriver::InkerLine(Point const, Point const, Rect *, Point const) {
    /*
        195e08:	e1a0c00d 	mov	ip, sp
        195e0c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        195e10:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        195e14:	e24cb014 	sub	fp, ip, #20	; 0x14
        195e18:	e24dd004 	sub	sp, sp, #4	; 0x4
        195e1c:	e59bc014 	ldr	ip, [fp, #20]
        195e20:	e58dc000 	str	ip, [sp]
        195e24:	ebfffff7 	bl	195e08 <TQDLibraryDriver::InkerLine(Point const, Point const, Rect *, Point const)>
        195e28:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::InitGraf(void)
 * Address: 00195e2c
 */
TQDLibraryDriver::InitGraf(void) {
    /*
        195e2c:	eafffffe 	b	195e2c <TQDLibraryDriver::InitGraf(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::EmptyRect(Rect *)
 * Address: 00195e30
 */
TQDLibraryDriver::EmptyRect(Rect *) {
    /*
        195e30:	eafffffe 	b	195e30 <TQDLibraryDriver::EmptyRect(Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::EqualRect(Rect *, Rect *)
 * Address: 00195e34
 */
TQDLibraryDriver::EqualRect(Rect *, Rect *) {
    /*
        195e34:	eafffffe 	b	195e34 <TQDLibraryDriver::EqualRect(Rect *, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::EraseRect(Rect *)
 * Address: 00195e38
 */
TQDLibraryDriver::EraseRect(Rect *) {
    /*
        195e38:	eafffffe 	b	195e38 <TQDLibraryDriver::EraseRect(Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FillRect(Rect *, PixelMap **)
 * Address: 00195e3c
 */
TQDLibraryDriver::FillRect(Rect *, PixelMap **) {
    /*
        195e3c:	eafffffe 	b	195e3c <TQDLibraryDriver::FillRect(Rect *, PixelMap **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FrameRect(Rect *)
 * Address: 00195e40
 */
TQDLibraryDriver::FrameRect(Rect *) {
    /*
        195e40:	eafffffe 	b	195e40 <TQDLibraryDriver::FrameRect(Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::InsetRect(Rect *, long, long)
 * Address: 00195e44
 */
TQDLibraryDriver::InsetRect(Rect *, long, long) {
    /*
        195e44:	eafffffe 	b	195e44 <TQDLibraryDriver::InsetRect(Rect *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::InvertRect(Rect *)
 * Address: 00195e48
 */
TQDLibraryDriver::InvertRect(Rect *) {
    /*
        195e48:	eafffffe 	b	195e48 <TQDLibraryDriver::InvertRect(Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::MapRect(Rect *, Rect *, Rect *)
 * Address: 00195e4c
 */
TQDLibraryDriver::MapRect(Rect *, Rect *, Rect *) {
    /*
        195e4c:	eafffffe 	b	195e4c <TQDLibraryDriver::MapRect(Rect *, Rect *, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::OffsetRect(Rect *, long, long)
 * Address: 00195e50
 */
TQDLibraryDriver::OffsetRect(Rect *, long, long) {
    /*
        195e50:	eafffffe 	b	195e50 <TQDLibraryDriver::OffsetRect(Rect *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PaintRect(Rect *)
 * Address: 00195e54
 */
TQDLibraryDriver::PaintRect(Rect *) {
    /*
        195e54:	eafffffe 	b	195e54 <TQDLibraryDriver::PaintRect(Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::InitQD(void)
 * Address: 00195e58
 */
TQDLibraryDriver::InitQD(void) {
    /*
        195e58:	eafffffe 	b	195e58 <TQDLibraryDriver::InitQD(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::Pt2Rect(Point, Point, Rect *)
 * Address: 00195e5c
 */
TQDLibraryDriver::Pt2Rect(Point, Point, Rect *) {
    /*
        195e5c:	eafffffe 	b	195e5c <TQDLibraryDriver::Pt2Rect(Point, Point, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PtInRect(Point, Rect *)
 * Address: 00195e60
 */
TQDLibraryDriver::PtInRect(Point, Rect *) {
    /*
        195e60:	eafffffe 	b	195e60 <TQDLibraryDriver::PtInRect(Point, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SectRect(Rect *, Rect *, Rect *)
 * Address: 00195e64
 */
TQDLibraryDriver::SectRect(Rect *, Rect *, Rect *) {
    /*
        195e64:	eafffffe 	b	195e64 <TQDLibraryDriver::SectRect(Rect *, Rect *, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetEmptyRect(Rect *)
 * Address: 00195e68
 */
TQDLibraryDriver::SetEmptyRect(Rect *) {
    /*
        195e68:	eafffffe 	b	195e68 <TQDLibraryDriver::SetEmptyRect(Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetRect(Rect *, long, long, long, long)
 * Address: 00195e6c
 */
TQDLibraryDriver::SetRect(Rect *, long, long, long, long) {
    /*
        195e6c:	e1a0c00d 	mov	ip, sp
        195e70:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        195e74:	e24cb004 	sub	fp, ip, #4	; 0x4
        195e78:	e1a0c002 	mov	ip, r2
        195e7c:	e1a0e003 	mov	lr, r3
        195e80:	e99b000c 	ldmib	fp, {r2, r3}
        195e84:	e92d000c 	stmdb	sp!, {r2, r3}
        195e88:	e1a0300e 	mov	r3, lr
        195e8c:	e1a0200c 	mov	r2, ip
        195e90:	ebfffff5 	bl	195e6c <TQDLibraryDriver::SetRect(Rect *, long, long, long, long)>
        195e94:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::UnionRect(Rect *, Rect *, Rect *)
 * Address: 00195e98
 */
TQDLibraryDriver::UnionRect(Rect *, Rect *, Rect *) {
    /*
        195e98:	eafffffe 	b	195e98 <TQDLibraryDriver::UnionRect(Rect *, Rect *, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::JoinRect(Rect *, Rect *, Rect *)
 * Address: 00195e9c
 */
TQDLibraryDriver::JoinRect(Rect *, Rect *, Rect *) {
    /*
        195e9c:	eafffffe 	b	195e9c <TQDLibraryDriver::JoinRect(Rect *, Rect *, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::ZoomRect(Rect *, Rect *, long, unsigned char)
 * Address: 00195ea0
 */
TQDLibraryDriver::ZoomRect(Rect *, Rect *, long, unsigned char) {
    /*
        195ea0:	e1a0c00d 	mov	ip, sp
        195ea4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        195ea8:	e24cb004 	sub	fp, ip, #4	; 0x4
        195eac:	e1a0c003 	mov	ip, r3
        195eb0:	e59b3004 	ldr	r3, [fp, #4]
        195eb4:	e20330ff 	and	r3, r3, #255	; 0xff
        195eb8:	e92d0008 	stmdb	sp!, {r3}
        195ebc:	e1a0300c 	mov	r3, ip
        195ec0:	ebfffff6 	bl	195ea0 <TQDLibraryDriver::ZoomRect(Rect *, Rect *, long, unsigned char)>
        195ec4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::EraseOval(Rect *)
 * Address: 00195ec8
 */
TQDLibraryDriver::EraseOval(Rect *) {
    /*
        195ec8:	eafffffe 	b	195ec8 <TQDLibraryDriver::EraseOval(Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FillOval(Rect *, PixelMap **)
 * Address: 00195ecc
 */
TQDLibraryDriver::FillOval(Rect *, PixelMap **) {
    /*
        195ecc:	eafffffe 	b	195ecc <TQDLibraryDriver::FillOval(Rect *, PixelMap **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::OpenPort(GrafPort *)
 * Address: 00195ed0
 */
TQDLibraryDriver::OpenPort(GrafPort *) {
    /*
        195ed0:	eafffffe 	b	195ed0 <TQDLibraryDriver::OpenPort(GrafPort *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FrameOval(Rect *)
 * Address: 00195ed4
 */
TQDLibraryDriver::FrameOval(Rect *) {
    /*
        195ed4:	eafffffe 	b	195ed4 <TQDLibraryDriver::FrameOval(Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::InvertOval(Rect *)
 * Address: 00195ed8
 */
TQDLibraryDriver::InvertOval(Rect *) {
    /*
        195ed8:	eafffffe 	b	195ed8 <TQDLibraryDriver::InvertOval(Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PaintOval(Rect *)
 * Address: 00195edc
 */
TQDLibraryDriver::PaintOval(Rect *) {
    /*
        195edc:	eafffffe 	b	195edc <TQDLibraryDriver::PaintOval(Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::EraseRoundRect(Rect *, long, long)
 * Address: 00195ee0
 */
TQDLibraryDriver::EraseRoundRect(Rect *, long, long) {
    /*
        195ee0:	eafffffe 	b	195ee0 <TQDLibraryDriver::EraseRoundRect(Rect *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FillRoundRect(Rect *, long, long, PixelMap **)
 * Address: 00195ee4
 */
TQDLibraryDriver::FillRoundRect(Rect *, long, long, PixelMap **) {
    /*
        195ee4:	e1a0c00d 	mov	ip, sp
        195ee8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        195eec:	e24cb004 	sub	fp, ip, #4	; 0x4
        195ef0:	e1a0c003 	mov	ip, r3
        195ef4:	e59b3004 	ldr	r3, [fp, #4]
        195ef8:	e92d0008 	stmdb	sp!, {r3}
        195efc:	e1a0300c 	mov	r3, ip
        195f00:	ebfffff7 	bl	195ee4 <TQDLibraryDriver::FillRoundRect(Rect *, long, long, PixelMap **)>
        195f04:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::FrameRoundRect(Rect *, long, long)
 * Address: 00195f08
 */
TQDLibraryDriver::FrameRoundRect(Rect *, long, long) {
    /*
        195f08:	eafffffe 	b	195f08 <TQDLibraryDriver::FrameRoundRect(Rect *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::InvertRoundRect(Rect *, long, long)
 * Address: 00195f0c
 */
TQDLibraryDriver::InvertRoundRect(Rect *, long, long) {
    /*
        195f0c:	eafffffe 	b	195f0c <TQDLibraryDriver::InvertRoundRect(Rect *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PaintRoundRect(Rect *, long, long)
 * Address: 00195f10
 */
TQDLibraryDriver::PaintRoundRect(Rect *, long, long) {
    /*
        195f10:	eafffffe 	b	195f10 <TQDLibraryDriver::PaintRoundRect(Rect *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::EraseArc(Rect *, long, long)
 * Address: 00195f14
 */
TQDLibraryDriver::EraseArc(Rect *, long, long) {
    /*
        195f14:	eafffffe 	b	195f14 <TQDLibraryDriver::EraseArc(Rect *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FillArc(Rect *, long, long, PixelMap **)
 * Address: 00195f18
 */
TQDLibraryDriver::FillArc(Rect *, long, long, PixelMap **) {
    /*
        195f18:	e1a0c00d 	mov	ip, sp
        195f1c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        195f20:	e24cb004 	sub	fp, ip, #4	; 0x4
        195f24:	e1a0c003 	mov	ip, r3
        195f28:	e59b3004 	ldr	r3, [fp, #4]
        195f2c:	e92d0008 	stmdb	sp!, {r3}
        195f30:	e1a0300c 	mov	r3, ip
        195f34:	ebfffff7 	bl	195f18 <TQDLibraryDriver::FillArc(Rect *, long, long, PixelMap **)>
        195f38:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::InitPort(GrafPort *)
 * Address: 00195f3c
 */
TQDLibraryDriver::InitPort(GrafPort *) {
    /*
        195f3c:	eafffffe 	b	195f3c <TQDLibraryDriver::InitPort(GrafPort *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FrameArc(Rect *, long, long)
 * Address: 00195f40
 */
TQDLibraryDriver::FrameArc(Rect *, long, long) {
    /*
        195f40:	eafffffe 	b	195f40 <TQDLibraryDriver::FrameArc(Rect *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::InvertArc(Rect *, long, long)
 * Address: 00195f44
 */
TQDLibraryDriver::InvertArc(Rect *, long, long) {
    /*
        195f44:	eafffffe 	b	195f44 <TQDLibraryDriver::InvertArc(Rect *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PaintArc(Rect *, long, long)
 * Address: 00195f48
 */
TQDLibraryDriver::PaintArc(Rect *, long, long) {
    /*
        195f48:	eafffffe 	b	195f48 <TQDLibraryDriver::PaintArc(Rect *, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::CloseRgn(Region **)
 * Address: 00195f4c
 */
TQDLibraryDriver::CloseRgn(Region **) {
    /*
        195f4c:	eafffffe 	b	195f4c <TQDLibraryDriver::CloseRgn(Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::CopyRgn(Region **, Region **)
 * Address: 00195f50
 */
TQDLibraryDriver::CopyRgn(Region **, Region **) {
    /*
        195f50:	eafffffe 	b	195f50 <TQDLibraryDriver::CopyRgn(Region **, Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::DiffRgn(Region **, Region **, Region **)
 * Address: 00195f54
 */
TQDLibraryDriver::DiffRgn(Region **, Region **, Region **) {
    /*
        195f54:	eafffffe 	b	195f54 <TQDLibraryDriver::DiffRgn(Region **, Region **, Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::DisposeRgn(Region **)
 * Address: 00195f58
 */
TQDLibraryDriver::DisposeRgn(Region **) {
    /*
        195f58:	eafffffe 	b	195f58 <TQDLibraryDriver::DisposeRgn(Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::EmptyRgn(Region **)
 * Address: 00195f5c
 */
TQDLibraryDriver::EmptyRgn(Region **) {
    /*
        195f5c:	eafffffe 	b	195f5c <TQDLibraryDriver::EmptyRgn(Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::EqualRgn(Region **, Region **)
 * Address: 00195f60
 */
TQDLibraryDriver::EqualRgn(Region **, Region **) {
    /*
        195f60:	eafffffe 	b	195f60 <TQDLibraryDriver::EqualRgn(Region **, Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::EraseRgn(Region **)
 * Address: 00195f64
 */
TQDLibraryDriver::EraseRgn(Region **) {
    /*
        195f64:	eafffffe 	b	195f64 <TQDLibraryDriver::EraseRgn(Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::ClosePort(GrafPort *)
 * Address: 00195f68
 */
TQDLibraryDriver::ClosePort(GrafPort *) {
    /*
        195f68:	eafffffe 	b	195f68 <TQDLibraryDriver::ClosePort(GrafPort *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FillRgn(Region **, PixelMap **)
 * Address: 00195f6c
 */
TQDLibraryDriver::FillRgn(Region **, PixelMap **) {
    /*
        195f6c:	eafffffe 	b	195f6c <TQDLibraryDriver::FillRgn(Region **, PixelMap **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FrameRgn(Region **)
 * Address: 00195f70
 */
TQDLibraryDriver::FrameRgn(Region **) {
    /*
        195f70:	eafffffe 	b	195f70 <TQDLibraryDriver::FrameRgn(Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::InsetRgn(Region **, long, long)
 * Address: 00195f74
 */
TQDLibraryDriver::InsetRgn(Region **, long, long) {
    /*
        195f74:	eafffffe 	b	195f74 <TQDLibraryDriver::InsetRgn(Region **, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::InvertRgn(Region **)
 * Address: 00195f78
 */
TQDLibraryDriver::InvertRgn(Region **) {
    /*
        195f78:	eafffffe 	b	195f78 <TQDLibraryDriver::InvertRgn(Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::MapRgn(Region **, Rect *, Rect *)
 * Address: 00195f7c
 */
TQDLibraryDriver::MapRgn(Region **, Rect *, Rect *) {
    /*
        195f7c:	eafffffe 	b	195f7c <TQDLibraryDriver::MapRgn(Region **, Rect *, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::NewRgn(void)
 * Address: 00195f80
 */
TQDLibraryDriver::NewRgn(void) {
    /*
        195f80:	eafffffe 	b	195f80 <TQDLibraryDriver::NewRgn(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::OffsetRgn(Region **, long, long)
 * Address: 00195f84
 */
TQDLibraryDriver::OffsetRgn(Region **, long, long) {
    /*
        195f84:	eafffffe 	b	195f84 <TQDLibraryDriver::OffsetRgn(Region **, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::OpenRgn(void)
 * Address: 00195f88
 */
TQDLibraryDriver::OpenRgn(void) {
    /*
        195f88:	eafffffe 	b	195f88 <TQDLibraryDriver::OpenRgn(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PaintRgn(Region **)
 * Address: 00195f8c
 */
TQDLibraryDriver::PaintRgn(Region **) {
    /*
        195f8c:	eafffffe 	b	195f8c <TQDLibraryDriver::PaintRgn(Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PtInRgn(Point, Region **)
 * Address: 00195f90
 */
TQDLibraryDriver::PtInRgn(Point, Region **) {
    /*
        195f90:	eafffffe 	b	195f90 <TQDLibraryDriver::PtInRgn(Point, Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetPort(GrafPort *)
 * Address: 00195f94
 */
TQDLibraryDriver::SetPort(GrafPort *) {
    /*
        195f94:	eafffffe 	b	195f94 <TQDLibraryDriver::SetPort(GrafPort *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::RectInRgn(Rect *, Region **)
 * Address: 00195f98
 */
TQDLibraryDriver::RectInRgn(Rect *, Region **) {
    /*
        195f98:	eafffffe 	b	195f98 <TQDLibraryDriver::RectInRgn(Rect *, Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::RectRgn(Region **, Rect *)
 * Address: 00195f9c
 */
TQDLibraryDriver::RectRgn(Region **, Rect *) {
    /*
        195f9c:	eafffffe 	b	195f9c <TQDLibraryDriver::RectRgn(Region **, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SectRgn(Region **, Region **, Region **)
 * Address: 00195fa0
 */
TQDLibraryDriver::SectRgn(Region **, Region **, Region **) {
    /*
        195fa0:	eafffffe 	b	195fa0 <TQDLibraryDriver::SectRgn(Region **, Region **, Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetEmptyRgn(Region **)
 * Address: 00195fa4
 */
TQDLibraryDriver::SetEmptyRgn(Region **) {
    /*
        195fa4:	eafffffe 	b	195fa4 <TQDLibraryDriver::SetEmptyRgn(Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::SetRectRgn(Region **, long, long, long, long)
 * Address: 00195fa8
 */
TQDLibraryDriver::SetRectRgn(Region **, long, long, long, long) {
    /*
        195fa8:	e1a0c00d 	mov	ip, sp
        195fac:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        195fb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        195fb4:	e1a0c002 	mov	ip, r2
        195fb8:	e1a0e003 	mov	lr, r3
        195fbc:	e99b000c 	ldmib	fp, {r2, r3}
        195fc0:	e92d000c 	stmdb	sp!, {r2, r3}
        195fc4:	e1a0300e 	mov	r3, lr
        195fc8:	e1a0200c 	mov	r2, ip
        195fcc:	ebfffff5 	bl	195fa8 <TQDLibraryDriver::SetRectRgn(Region **, long, long, long, long)>
        195fd0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TQDLibraryDriver::UnionRgn(Region **, Region **, Region **)
 * Address: 00195fd4
 */
TQDLibraryDriver::UnionRgn(Region **, Region **, Region **) {
    /*
        195fd4:	eafffffe 	b	195fd4 <TQDLibraryDriver::UnionRgn(Region **, Region **, Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::XorRgn(Region **, Region **, Region **)
 * Address: 00195fd8
 */
TQDLibraryDriver::XorRgn(Region **, Region **, Region **) {
    /*
        195fd8:	eafffffe 	b	195fd8 <TQDLibraryDriver::XorRgn(Region **, Region **, Region **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::ClosePoly(void)
 * Address: 00195fdc
 */
TQDLibraryDriver::ClosePoly(void) {
    /*
        195fdc:	eafffffe 	b	195fdc <TQDLibraryDriver::ClosePoly(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::ErasePoly(Polygon **)
 * Address: 00195fe0
 */
TQDLibraryDriver::ErasePoly(Polygon **) {
    /*
        195fe0:	eafffffe 	b	195fe0 <TQDLibraryDriver::ErasePoly(Polygon **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FillPoly(Polygon **, PixelMap **)
 * Address: 00195fe4
 */
TQDLibraryDriver::FillPoly(Polygon **, PixelMap **) {
    /*
        195fe4:	eafffffe 	b	195fe4 <TQDLibraryDriver::FillPoly(Polygon **, PixelMap **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::GetPort(GrafPort **)
 * Address: 00195fe8
 */
TQDLibraryDriver::GetPort(GrafPort **) {
    /*
        195fe8:	eafffffe 	b	195fe8 <TQDLibraryDriver::GetPort(GrafPort **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::FramePoly(Polygon **)
 * Address: 00195fec
 */
TQDLibraryDriver::FramePoly(Polygon **) {
    /*
        195fec:	eafffffe 	b	195fec <TQDLibraryDriver::FramePoly(Polygon **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::KillPoly(Polygon **)
 * Address: 00195ff0
 */
TQDLibraryDriver::KillPoly(Polygon **) {
    /*
        195ff0:	eafffffe 	b	195ff0 <TQDLibraryDriver::KillPoly(Polygon **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::InvertPoly(Polygon **)
 * Address: 00195ff4
 */
TQDLibraryDriver::InvertPoly(Polygon **) {
    /*
        195ff4:	eafffffe 	b	195ff4 <TQDLibraryDriver::InvertPoly(Polygon **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::MapPoly(Polygon **, Rect *, Rect *)
 * Address: 00195ff8
 */
TQDLibraryDriver::MapPoly(Polygon **, Rect *, Rect *) {
    /*
        195ff8:	eafffffe 	b	195ff8 <TQDLibraryDriver::MapPoly(Polygon **, Rect *, Rect *)>
    */
}

/**
 * Symbol: TQDLibraryDriver::OffsetPoly(Polygon **, long, long)
 * Address: 00195ffc
 */
TQDLibraryDriver::OffsetPoly(Polygon **, long, long) {
    /*
        195ffc:	eafffffe 	b	195ffc <TQDLibraryDriver::OffsetPoly(Polygon **, long, long)>
    */
}

/**
 * Symbol: TQDLibraryDriver::OpenPoly(void)
 * Address: 00196000
 */
TQDLibraryDriver::OpenPoly(void) {
    /*
        196000:	eafffffe 	b	196000 <TQDLibraryDriver::OpenPoly(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::PaintPoly(Polygon **)
 * Address: 00196004
 */
TQDLibraryDriver::PaintPoly(Polygon **) {
    /*
        196004:	eafffffe 	b	196004 <TQDLibraryDriver::PaintPoly(Polygon **)>
    */
}

/**
 * Symbol: TQDLibraryDriver::CheckPic(void)
 * Address: 00196008
 */
TQDLibraryDriver::CheckPic(void) {
    /*
        196008:	eafffffe 	b	196008 <TQDLibraryDriver::CheckPic(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::ClosePicture(void)
 * Address: 0019600c
 */
TQDLibraryDriver::ClosePicture(void) {
    /*
        19600c:	eafffffe 	b	19600c <TQDLibraryDriver::ClosePicture(void)>
    */
}

/**
 * Symbol: TQDLibraryDriver::DrawPicture(Picture **, Rect *, unsigned char)
 * Address: 00196010
 */
TQDLibraryDriver::DrawPicture(Picture **, Rect *, unsigned char) {
    /*
        196010:	e20330ff 	and	r3, r3, #255	; 0xff
        196014:	eafffffd 	b	196010 <TQDLibraryDriver::DrawPicture(Picture **, Rect *, unsigned char)>
    */
}

/**
 * Symbol: ClassInfo__16TQDLibraryDriverSFv
 * Address: 003887c8
 */
void TQDLibraryDriver::ClassInfo() {
    /*
        3887c8:	e24f0044 	sub	r0, pc, #68	; 0x44
        3887cc:	e1a0f00e 	mov	pc, lr
        3887d0:	e3a00000 	mov	r0, #0	; 0x0
        3887d4:	e1a0f00e 	mov	pc, lr
        3887d8:	5451444c 	ldrplb	r4, [r1], -#1100
        3887dc:	69627261 	stmvsdb	r2!, {r0, r5, r6, r9, ip, sp, lr}^
        3887e0:	72794472 	rsbvcs	r4, r9, #1912602624	; 0x72000000
        3887e4:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        3887e8:	00545144 	subeqs	r5, r4, r4, asr #2
        3887ec:	4c696272 	sfmmi	f6, 2, [r9], -#456
        3887f0:	61727900 	cmnvs	r2, r0, lsl #18
        3887fc:	eafffff1 	b	3887c8 <ClassInfo__16TQDLibraryDriverSFv>
        388800:	eaf83404 	b	195818 <TQDLibraryDriver::New(void)>
        388804:	eaf83575 	b	195de0 <TQDLibraryDriver::Delete(void)>
        388808:	eaf83587 	b	195e2c <TQDLibraryDriver::InitGraf(void)>
        38880c:	eaf83591 	b	195e58 <TQDLibraryDriver::InitQD(void)>
        388810:	eaf835ae 	b	195ed0 <TQDLibraryDriver::OpenPort(GrafPort *)>
        388814:	eaf835c8 	b	195f3c <TQDLibraryDriver::InitPort(GrafPort *)>
        388818:	eaf835d2 	b	195f68 <TQDLibraryDriver::ClosePort(GrafPort *)>
        38881c:	eaf835dc 	b	195f94 <TQDLibraryDriver::SetPort(GrafPort *)>
        388820:	eaf835f0 	b	195fe8 <TQDLibraryDriver::GetPort(GrafPort **)>
        388824:	eaf833fc 	b	19581c <TQDLibraryDriver::SetPortBits(PixelMap *)>
        388828:	eaf8340b 	b	19585c <TQDLibraryDriver::SetOrigin(long, long)>
        38882c:	eaf83429 	b	1958d8 <TQDLibraryDriver::SetClip(Region **)>
        388830:	eaf83442 	b	195940 <TQDLibraryDriver::GetClip(Region **)>
        388834:	eaf8344c 	b	19596c <TQDLibraryDriver::ClipRect(Rect *)>
        388838:	eaf83456 	b	195998 <TQDLibraryDriver::SetStdProcs(QDProcs *)>
        38883c:	eaf834b6 	b	195b1c <TQDLibraryDriver::InitPortRgns(GrafPort *)>
        388840:	eaf8351c 	b	195cb8 <TQDLibraryDriver::HidePen(void)>
        388844:	eaf83531 	b	195d10 <TQDLibraryDriver::ShowPen(void)>
        388848:	eaf83547 	b	195d6c <TQDLibraryDriver::GetPen(Point *)>
        38884c:	eaf83564 	b	195de4 <TQDLibraryDriver::GetPenState(PenState *)>
        388850:	eaf83564 	b	195de8 <TQDLibraryDriver::SetPenState(PenState *)>
        388854:	eaf83564 	b	195dec <TQDLibraryDriver::PenSize(long, long)>
        388858:	eaf83564 	b	195df0 <TQDLibraryDriver::PenMode(long)>
        38885c:	eaf83564 	b	195df4 <TQDLibraryDriver::PenNormal(void)>
        388860:	eaf83564 	b	195df8 <TQDLibraryDriver::MoveTo(long, long)>
        388864:	eaf83564 	b	195dfc <TQDLibraryDriver::Move(long, long)>
        388868:	eaf83564 	b	195e00 <TQDLibraryDriver::LineTo(long, long)>
        38886c:	eaf83564 	b	195e04 <TQDLibraryDriver::Line(long, long)>
        388870:	eaf83564 	b	195e08 <TQDLibraryDriver::InkerLine(Point const, Point const, Rect *, Point const)>
        388874:	eaf8356d 	b	195e30 <TQDLibraryDriver::EmptyRect(Rect *)>
        388878:	eaf8356d 	b	195e34 <TQDLibraryDriver::EqualRect(Rect *, Rect *)>
        38887c:	eaf8356d 	b	195e38 <TQDLibraryDriver::EraseRect(Rect *)>
        388880:	eaf8356d 	b	195e3c <TQDLibraryDriver::FillRect(Rect *, PixelMap **)>
        388884:	eaf8356d 	b	195e40 <TQDLibraryDriver::FrameRect(Rect *)>
        388888:	eaf8356d 	b	195e44 <TQDLibraryDriver::InsetRect(Rect *, long, long)>
        38888c:	eaf8356d 	b	195e48 <TQDLibraryDriver::InvertRect(Rect *)>
        388890:	eaf8356d 	b	195e4c <TQDLibraryDriver::MapRect(Rect *, Rect *, Rect *)>
        388894:	eaf8356d 	b	195e50 <TQDLibraryDriver::OffsetRect(Rect *, long, long)>
        388898:	eaf8356d 	b	195e54 <TQDLibraryDriver::PaintRect(Rect *)>
        38889c:	eaf8356e 	b	195e5c <TQDLibraryDriver::Pt2Rect(Point, Point, Rect *)>
        3888a0:	eaf8356e 	b	195e60 <TQDLibraryDriver::PtInRect(Point, Rect *)>
        3888a4:	eaf8356e 	b	195e64 <TQDLibraryDriver::SectRect(Rect *, Rect *, Rect *)>
        3888a8:	eaf8356e 	b	195e68 <TQDLibraryDriver::SetEmptyRect(Rect *)>
        3888ac:	eaf8356e 	b	195e6c <TQDLibraryDriver::SetRect(Rect *, long, long, long, long)>
        3888b0:	eaf83578 	b	195e98 <TQDLibraryDriver::UnionRect(Rect *, Rect *, Rect *)>
        3888b4:	eaf83578 	b	195e9c <TQDLibraryDriver::JoinRect(Rect *, Rect *, Rect *)>
        3888b8:	eaf83578 	b	195ea0 <TQDLibraryDriver::ZoomRect(Rect *, Rect *, long, unsigned char)>
        3888bc:	eaf83581 	b	195ec8 <TQDLibraryDriver::EraseOval(Rect *)>
        3888c0:	eaf83581 	b	195ecc <TQDLibraryDriver::FillOval(Rect *, PixelMap **)>
        3888c4:	eaf83582 	b	195ed4 <TQDLibraryDriver::FrameOval(Rect *)>
        3888c8:	eaf83582 	b	195ed8 <TQDLibraryDriver::InvertOval(Rect *)>
        3888cc:	eaf83582 	b	195edc <TQDLibraryDriver::PaintOval(Rect *)>
        3888d0:	eaf83582 	b	195ee0 <TQDLibraryDriver::EraseRoundRect(Rect *, long, long)>
        3888d4:	eaf83582 	b	195ee4 <TQDLibraryDriver::FillRoundRect(Rect *, long, long, PixelMap **)>
        3888d8:	eaf8358a 	b	195f08 <TQDLibraryDriver::FrameRoundRect(Rect *, long, long)>
        3888dc:	eaf8358a 	b	195f0c <TQDLibraryDriver::InvertRoundRect(Rect *, long, long)>
        3888e0:	eaf8358a 	b	195f10 <TQDLibraryDriver::PaintRoundRect(Rect *, long, long)>
        3888e4:	eaf8358a 	b	195f14 <TQDLibraryDriver::EraseArc(Rect *, long, long)>
        3888e8:	eaf8358a 	b	195f18 <TQDLibraryDriver::FillArc(Rect *, long, long, PixelMap **)>
        3888ec:	eaf83593 	b	195f40 <TQDLibraryDriver::FrameArc(Rect *, long, long)>
        3888f0:	eaf83593 	b	195f44 <TQDLibraryDriver::InvertArc(Rect *, long, long)>
        3888f4:	eaf83593 	b	195f48 <TQDLibraryDriver::PaintArc(Rect *, long, long)>
        3888f8:	eaf83593 	b	195f4c <TQDLibraryDriver::CloseRgn(Region **)>
        3888fc:	eaf83593 	b	195f50 <TQDLibraryDriver::CopyRgn(Region **, Region **)>
        388900:	eaf83593 	b	195f54 <TQDLibraryDriver::DiffRgn(Region **, Region **, Region **)>
        388904:	eaf83593 	b	195f58 <TQDLibraryDriver::DisposeRgn(Region **)>
        388908:	eaf83593 	b	195f5c <TQDLibraryDriver::EmptyRgn(Region **)>
        38890c:	eaf83593 	b	195f60 <TQDLibraryDriver::EqualRgn(Region **, Region **)>
        388910:	eaf83593 	b	195f64 <TQDLibraryDriver::EraseRgn(Region **)>
        388914:	eaf83594 	b	195f6c <TQDLibraryDriver::FillRgn(Region **, PixelMap **)>
        388918:	eaf83594 	b	195f70 <TQDLibraryDriver::FrameRgn(Region **)>
        38891c:	eaf83594 	b	195f74 <TQDLibraryDriver::InsetRgn(Region **, long, long)>
        388920:	eaf83594 	b	195f78 <TQDLibraryDriver::InvertRgn(Region **)>
        388924:	eaf83594 	b	195f7c <TQDLibraryDriver::MapRgn(Region **, Rect *, Rect *)>
        388928:	eaf83594 	b	195f80 <TQDLibraryDriver::NewRgn(void)>
        38892c:	eaf83594 	b	195f84 <TQDLibraryDriver::OffsetRgn(Region **, long, long)>
        388930:	eaf83594 	b	195f88 <TQDLibraryDriver::OpenRgn(void)>
        388934:	eaf83594 	b	195f8c <TQDLibraryDriver::PaintRgn(Region **)>
        388938:	eaf83594 	b	195f90 <TQDLibraryDriver::PtInRgn(Point, Region **)>
        38893c:	eaf83595 	b	195f98 <TQDLibraryDriver::RectInRgn(Rect *, Region **)>
        388940:	eaf83595 	b	195f9c <TQDLibraryDriver::RectRgn(Region **, Rect *)>
        388944:	eaf83595 	b	195fa0 <TQDLibraryDriver::SectRgn(Region **, Region **, Region **)>
        388948:	eaf83595 	b	195fa4 <TQDLibraryDriver::SetEmptyRgn(Region **)>
        38894c:	eaf83595 	b	195fa8 <TQDLibraryDriver::SetRectRgn(Region **, long, long, long, long)>
        388950:	eaf8359f 	b	195fd4 <TQDLibraryDriver::UnionRgn(Region **, Region **, Region **)>
        388954:	eaf8359f 	b	195fd8 <TQDLibraryDriver::XorRgn(Region **, Region **, Region **)>
        388958:	eaf8359f 	b	195fdc <TQDLibraryDriver::ClosePoly(void)>
        38895c:	eaf8359f 	b	195fe0 <TQDLibraryDriver::ErasePoly(Polygon **)>
        388960:	eaf8359f 	b	195fe4 <TQDLibraryDriver::FillPoly(Polygon **, PixelMap **)>
        388964:	eaf835a0 	b	195fec <TQDLibraryDriver::FramePoly(Polygon **)>
        388968:	eaf835a0 	b	195ff0 <TQDLibraryDriver::KillPoly(Polygon **)>
        38896c:	eaf835a0 	b	195ff4 <TQDLibraryDriver::InvertPoly(Polygon **)>
        388970:	eaf835a0 	b	195ff8 <TQDLibraryDriver::MapPoly(Polygon **, Rect *, Rect *)>
        388974:	eaf835a0 	b	195ffc <TQDLibraryDriver::OffsetPoly(Polygon **, long, long)>
        388978:	eaf835a0 	b	196000 <TQDLibraryDriver::OpenPoly(void)>
        38897c:	eaf835a0 	b	196004 <TQDLibraryDriver::PaintPoly(Polygon **)>
        388980:	eaf835a0 	b	196008 <TQDLibraryDriver::CheckPic(void)>
        388984:	eaf835a0 	b	19600c <TQDLibraryDriver::ClosePicture(void)>
        388988:	eaf835a0 	b	196010 <TQDLibraryDriver::DrawPicture(Picture **, Rect *, unsigned char)>
        38898c:	eaf833a3 	b	195820 <TQDLibraryDriver::KillPicture(Picture **)>
        388990:	eaf833a3 	b	195824 <TQDLibraryDriver::OpenPicture(Rect *, unsigned char)>
        388994:	eaf833a4 	b	19582c <TQDLibraryDriver::PicComment(short, short, char **)>
        388998:	eaf833a8 	b	195840 <TQDLibraryDriver::EqualPt(Point, Point)>
        38899c:	eaf833a8 	b	195844 <TQDLibraryDriver::LocalToGlobal(Point *)>
        3889a0:	eaf833a8 	b	195848 <TQDLibraryDriver::MapPt(Point *, Rect *, Rect *)>
        3889a4:	eaf833a8 	b	19584c <TQDLibraryDriver::ScalePt(Point *, Rect *, Rect *)>
        3889a8:	eaf833a8 	b	195850 <TQDLibraryDriver::SetPt(Point *, long, long)>
        3889ac:	eaf833a8 	b	195854 <TQDLibraryDriver::MapFPoint(FPoint *, Rect *, Rect *)>
        3889b0:	eaf833a8 	b	195858 <TQDLibraryDriver::GetPixelMapBits(PixelMap *)>
        3889b4:	eaf833a9 	b	195860 <TQDLibraryDriver::PtInPixelMap(PixelMap *, long, long)>
        3889b8:	eaf833a9 	b	195864 <TQDLibraryDriver::CopyBits(PixelMap *, PixelMap *, Rect *, Rect *, long, Region **)>
        3889bc:	eaf833b5 	b	195898 <TQDLibraryDriver::PackBits(char **, char **, long)>
        3889c0:	eaf833b5 	b	19589c <TQDLibraryDriver::ScrollRect(Rect *, long, long, Region **)>
        3889c4:	eaf833bd 	b	1958c0 <TQDLibraryDriver::UnpackBits(char **, char **, long)>
        3889c8:	eaf833bd 	b	1958c4 <TQDLibraryDriver::UnpackWords(char **, char **, long)>
        3889cc:	eaf833bd 	b	1958c8 <TQDLibraryDriver::GetRandSeed(void)>
        3889d0:	eaf833bd 	b	1958cc <TQDLibraryDriver::Random(void)>
        3889d4:	eaf833bd 	b	1958d0 <TQDLibraryDriver::SetRandSeed(long)>
        3889d8:	eaf833bd 	b	1958d4 <TQDLibraryDriver::FrameCurve(curve *)>
        3889dc:	eaf833be 	b	1958dc <TQDLibraryDriver::PaintCurve(curve *)>
        3889e0:	eaf833be 	b	1958e0 <TQDLibraryDriver::EraseCurve(curve *)>
        3889e4:	eaf833be 	b	1958e4 <TQDLibraryDriver::InvertCurve(curve *)>
        3889e8:	eaf833be 	b	1958e8 <TQDLibraryDriver::FillCurve(curve *, PixelMap **)>
        3889ec:	eaf833be 	b	1958ec <TQDLibraryDriver::SetCurve(curve *, FPoint, FPoint, FPoint)>
        3889f0:	eaf833cd 	b	19592c <TQDLibraryDriver::OffsetCurve(curve *, long, long)>
        3889f4:	eaf833cd 	b	195930 <TQDLibraryDriver::EqualCurve(curve *, curve *)>
        3889f8:	eaf833cd 	b	195934 <TQDLibraryDriver::GetCurveBounds(curve *, Rect *)>
        3889fc:	eaf833cd 	b	195938 <TQDLibraryDriver::ScaleCurve(curve *, long, long)>
        388a00:	eaf833cd 	b	19593c <TQDLibraryDriver::MapCurve(curve *, Rect *, Rect *)>
        388a04:	eaf833ce 	b	195944 <TQDLibraryDriver::FramePaths(paths **)>
        388a08:	eaf833ce 	b	195948 <TQDLibraryDriver::PaintPaths(paths **)>
        388a0c:	eaf833ce 	b	19594c <TQDLibraryDriver::ErasePaths(paths **)>
        388a10:	eaf833ce 	b	195950 <TQDLibraryDriver::InvertPaths(paths **)>
        388a14:	eaf833ce 	b	195954 <TQDLibraryDriver::FillPaths(paths **, PixelMap **)>
        388a18:	eaf833ce 	b	195958 <TQDLibraryDriver::OffsetPaths(paths **, long, long)>
        388a1c:	eaf833ce 	b	19595c <TQDLibraryDriver::DisposePaths(paths **)>
        388a20:	eaf833ce 	b	195960 <TQDLibraryDriver::MapPaths(paths **, Rect *, Rect *)>
        388a24:	eaf833ce 	b	195964 <TQDLibraryDriver::ScalePaths(paths **, long, long)>
        388a28:	eaf833ce 	b	195968 <TQDLibraryDriver::CopyPaths(paths **, paths **)>
        388a2c:	eaf833cf 	b	195970 <TQDLibraryDriver::SizeOfPaths(paths **)>
        388a30:	eaf833cf 	b	195974 <TQDLibraryDriver::GetPathsBounds(paths **, Rect *)>
        388a34:	eaf833cf 	b	195978 <TQDLibraryDriver::InitPathWalker(pathWalker *, path *)>
        388a38:	eaf833cf 	b	19597c <TQDLibraryDriver::NextPath(path *)>
        388a3c:	eaf833cf 	b	195980 <TQDLibraryDriver::NextPathSegment(pathWalker *)>
        388a40:	eaf833cf 	b	195984 <TQDLibraryDriver::DisposePattern(PixelMap **)>
        388a44:	eaf833cf 	b	195988 <TQDLibraryDriver::DisposeFgPattern(void)>
        388a48:	eaf833cf 	b	19598c <TQDLibraryDriver::SetFgPattern(PixelMap **)>
        388a4c:	eaf833cf 	b	195990 <TQDLibraryDriver::SetBgPattern(PixelMap **)>
        388a50:	eaf833cf 	b	195994 <TQDLibraryDriver::GetFgPattern(void)>
        388a54:	eaf833d0 	b	19599c <TQDLibraryDriver::GetBgPattern(void)>
        388a58:	eaf833d0 	b	1959a0 <TQDLibraryDriver::MakeSimplePattern(long, long, long, long, long, long, long, long)>
        388a5c:	eaf833e2 	b	1959ec <TQDLibraryDriver::MakeSimplePattern(char *)>
        388a60:	eaf833e2 	b	1959f0 <TQDLibraryDriver::GetStdPattern(unsigned char)>
        388a64:	eaf833e3 	b	1959f8 <TQDLibraryDriver::CopyPattern(PixelMap **)>
        388a68:	eaf833e3 	b	1959fc <TQDLibraryDriver::EqualPat(PixelMap **, PixelMap **)>
        388a6c:	eaf833e3 	b	195a00 <TQDLibraryDriver::MonochromePat(PixelMap **, unsigned long *)>
        388a70:	eaf833e3 	b	195a04 <TQDLibraryDriver::MakeSimpleStyle(RefVar const &, long, long)>
        388a74:	eaf83407 	b	195a98 <TQDLibraryDriver::EqualStyle(StyleRecord *, StyleRecord *)>
        388a78:	eaf83407 	b	195a9c <TQDLibraryDriver::CopyStyle(StyleRecord *)>
        388a7c:	eaf83427 	b	195b20 <TQDLibraryDriver::FlushFontCache(void)>
        388a80:	eaf83427 	b	195b24 <TQDLibraryDriver::NewText(void *, long, StyleRecord **, short *, FPoint, TextOptions *)>
        388a84:	eaf83437 	b	195b68 <TQDLibraryDriver::DrawTextObj(long)>
        388a88:	eaf83437 	b	195b6c <TQDLibraryDriver::DisposeText(long)>
        388a8c:	eaf83437 	b	195b70 <TQDLibraryDriver::DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        388a90:	eaf8344a 	b	195bc0 <TQDLibraryDriver::MeasureTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        388a94:	eaf8345d 	b	195c10 <TQDLibraryDriver::DrawRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *)>
        388a98:	eaf83470 	b	195c60 <TQDLibraryDriver::MeasureRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *)>
        388a9c:	eaf83483 	b	195cb0 <TQDLibraryDriver::GetTextObjField(long, int, void *)>
        388aa0:	eaf83483 	b	195cb4 <TQDLibraryDriver::SetTextObjField(long, int, void *)>
        388aa4:	eaf83484 	b	195cbc <TQDLibraryDriver::CharToPoint(long, long, FPoint *)>
        388aa8:	eaf83484 	b	195cc0 <TQDLibraryDriver::PointToChar(long, FPoint)>
        388aac:	eaf83484 	b	195cc4 <TQDLibraryDriver::TextArrowOffset(long, long, unsigned char)>
        388ab0:	eaf83485 	b	195ccc <TQDLibraryDriver::InitTextWalker(long, TextWalker *, unsigned char)>
        388ab4:	eaf83486 	b	195cd4 <TQDLibraryDriver::ReleaseTextWalker(TextWalker *)>
        388ab8:	eaf83486 	b	195cd8 <TQDLibraryDriver::ScanNextChunk(long *, void **, TextWalker *, long **)>
        388abc:	eaf8348e 	b	195cfc <TQDLibraryDriver::GetGrafInfo(long, void *)>
        388ac0:	eaf8348e 	b	195d00 <TQDLibraryDriver::SetGrafInfo(long, long)>
        388ac4:	eaf8348e 	b	195d04 <TQDLibraryDriver::InitScreen(void)>
        388ac8:	eaf8348e 	b	195d08 <TQDLibraryDriver::LCDPowerInit(unsigned char)>
        388acc:	eaf83490 	b	195d14 <TQDLibraryDriver::LCDPowerOn(unsigned char)>
        388ad0:	eaf83491 	b	195d1c <TQDLibraryDriver::LCDPowerOff(unsigned char)>
        388ad4:	eaf83492 	b	195d24 <TQDLibraryDriver::LCDEnterIdleMode(void)>
        388ad8:	eaf83492 	b	195d28 <TQDLibraryDriver::LCDExitIdleMode(void)>
        388adc:	eaf83492 	b	195d2c <TQDLibraryDriver::StartDrawing(PixelMap *, Rect *)>
        388ae0:	eaf83492 	b	195d30 <TQDLibraryDriver::StopDrawing(PixelMap *, Rect *)>
        388ae4:	eaf83492 	b	195d34 <TQDLibraryDriver::ReleaseScreenLock(void)>
        388ae8:	eaf83492 	b	195d38 <TQDLibraryDriver::PtInCPixelMap(PixelMap *, long, long)>
        388aec:	eaf83492 	b	195d3c <TQDLibraryDriver::PtInMask(PixelMap *, long, long)>
        388af0:	eaf83492 	b	195d40 <TQDLibraryDriver::RGBtoGray(unsigned long, unsigned long, unsigned long, long, long)>
        388af4:	eaf8349d 	b	195d70 <TQDLibraryDriver::GrayToRGB(unsigned char, unsigned long *, unsigned long *, unsigned long *, long)>
        388af8:	eaf834a8 	b	195da0 <TQDLibraryDriver::PackRGBvalues(unsigned long, unsigned long, unsigned long)>
        388afc:	eaf834a8 	b	195da4 <TQDLibraryDriver::UnpackRGBvalues(unsigned long, unsigned long *, unsigned long *, unsigned long *)>
        388b00:	eaf834b0 	b	195dc8 <TQDLibraryDriver::GetStdGrayPattern(unsigned long, unsigned long, unsigned long)>
        388b04:	eaf834b0 	b	195dcc <TQDLibraryDriver::MakeGrayPattern(RefVar const &)>
        388b08:	eaf834b0 	b	195dd0 <TQDLibraryDriver::MakeSimpleGrayPattern(long *, unsigned long, unsigned long)>
        388b0c:	eaf834b0 	b	195dd4 <TQDLibraryDriver::PutPixMap(PixelMap *)>
        388b10:	eaf834b0 	b	195dd8 <TQDLibraryDriver::PutColorTable(long)>
        388b14:	eaf834b0 	b	195ddc <TQDLibraryDriver::PutGrayTable(PixelMap *)>
        388b18:	e1a0000f 	mov	r0, pc
        388b1c:	e1a0f00e 	mov	pc, lr
        388b20:	54506978 	ldrplb	r6, [r0], -#2424	; fField2424
        388b24:	656c4d61 	strvsb	r4, [ip, -#3425]!
        388b28:	70416e74 	subvc	r6, r1, r4, ror lr
        388b2c:	69616c69 	stmvsdb	r1!, {r0, r3, r5, r6, sl, fp, sp, lr}^
        388b30:	61730000 	cmnvs	r3, r0
    */
}

