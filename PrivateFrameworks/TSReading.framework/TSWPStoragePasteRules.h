/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSWPStorage;

@interface TSWPStoragePasteRules : NSObject {

	unsigned _flags;
	unsigned _actionFlags[4];
	unsigned _lastFlag;
	NSRange _srcLeadRange;
	NSRange _srcTrailRange;
	BOOL _mapDestTrailCS;
	TSWPStorage* _destStorage;
	unsigned long long _sourceColumnStyleCount;
	unsigned long long _sourceSectionCount;
	SCD_Struct_TS131 _paragraphs[4];

}
-(void)dealloc;
-(void)willPasteStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(NSRange)arg3 ;
-(void)didPasteWithIOTransaction:(TSWPStorageTransaction*)arg1 atDestRange:(NSRange)arg2 ;
-(void)mapCharacterStyleProperties:(id)arg1 toRange:(NSRange)arg2 ioTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)setupFlagsForPastingSrcStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(NSRange)arg3 ;
-(void)addActionFlag:(int)arg1 ;
-(void)applyParagraph:(int)arg1 toCharIndex:(unsigned long long)arg2 ioTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)mapCharacterStyles:(int)arg1 toRange:(NSRange)arg2 ioTransaction:(TSWPStorageTransaction*)arg3 ;
@end

