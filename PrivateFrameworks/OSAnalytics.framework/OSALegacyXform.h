/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OSALegacyXform : NSObject {

	NSMutableDictionary* _templates;

}
-(BOOL)prepareTemplate:(id)arg1 forLogType:(id)arg2 error:(id*)arg3 ;
-(BOOL)transformJSON:(id)arg1 header:(id)arg2 error:(id*)arg3 streamingBlock:(/*^block*/id)arg4 ;
-(id)_getValueForKey:(id)arg1 fromBody:(id)arg2 orHeader:(id)arg3 ;
-(BOOL)transformLines:(id)arg1 withDefinitions:(id)arg2 body:(id)arg3 header:(id)arg4 error:(id*)arg5 streamingBlock:(/*^block*/id)arg6 ;
-(id)formatCallstacks:(id)arg1 withImages:(id)arg2 andLegacyInfo:(id)arg3 macosStyle:(BOOL)arg4 ;
-(id)formatArm64ThreadState:(id)arg1 ;
-(id)formatArm32ThreadState:(id)arg1 ;
-(id)formatX86ThreadState:(id)arg1 ;
-(id)formatImages:(id)arg1 withLegacyInfo:(id)arg2 macosStyle:(BOOL)arg3 ;
-(id)init;
@end
