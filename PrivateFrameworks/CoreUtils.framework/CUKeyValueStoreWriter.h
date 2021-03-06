/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUtils/CoreUtils-Structs.h>
@class NSString;

@interface CUKeyValueStoreWriter : NSObject {

	cdb_make* _cdb;
	BOOL _cdbStarted;
	NSString* _finalPath;
	int _tempFD;
	char _tempPath[1024];

}
-(void)cancel;
-(void)dealloc;
-(id)init;
-(BOOL)startAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)finishAndReturnError:(id*)arg1 ;
-(BOOL)addKey:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
@end

