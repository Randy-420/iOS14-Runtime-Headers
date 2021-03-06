/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VCAudioClientManager : NSObject {

	NSMutableDictionary* _clientList;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;

}
+(id)sharedInstance;
-(id)getAudioClientWithProcessId:(id)arg1 create:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(void)registerBlocksForService;
-(void)unregisterBlocksForService;
@end

