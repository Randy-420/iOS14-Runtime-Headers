/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SMBSearch/SMBSearch-Structs.h>
@interface wspFreeCursorIn : NSObject {

	SCD_Struct_ws1 msghdr;
	unsigned _cursorToFree;

}

@property (assign) unsigned cursorToFree;              //@synthesize cursorToFree=_cursorToFree - In the implementation block
-(id)initWithCursor:(unsigned)arg1 ;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(unsigned)cursorToFree;
-(void)setCursorToFree:(unsigned)arg1 ;
@end

