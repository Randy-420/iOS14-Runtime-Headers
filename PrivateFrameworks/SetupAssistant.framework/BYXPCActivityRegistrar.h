/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BYXPCActivityRegistrar : NSObject
+(id)sharedInstance;
-(void)registerActivityWithIdentifier:(const char*)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)unregisterActivityWithIdentifier:(const char*)arg1 ;
@end

