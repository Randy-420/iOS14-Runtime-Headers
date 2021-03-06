/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GQDTTable, GQDTOverlapCell, GQDTCell;

@interface GQSTable : NSObject {

	GQDTTable* mTable;
	GQDTOverlapCell* mCurrentOverlapCell;
	GQDTCell* mLastCellRead;
	BOOL mIsStreaming;
	BOOL mAlwaysPutReadCellsInArray;
	long long mCellCount;
	BOOL mIsCounting;

}
-(id)initWithStreaming:(BOOL)arg1 table:(id)arg2 ;
-(void)dealloc;
-(id)currentOverlapCell;
-(void)setCurrentOverlapCell:(id)arg1 ;
-(id)lastCellRead;
-(void)setLastCellRead:(id)arg1 ;
-(BOOL)isStreaming;
-(id)table;
-(BOOL)alwaysPutReadCellsInArray;
-(void)setAlwaysPutReadCellsInArray:(BOOL)arg1 ;
-(long long)row;
-(long long)column;
-(void)skipCells:(long long)arg1 ;
-(void)incrementCellPosition;
-(void)setIsCountingCount:(BOOL)arg1 ;
-(BOOL)isCounting;
@end

