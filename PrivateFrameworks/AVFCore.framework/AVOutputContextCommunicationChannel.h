/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVOutputContextCommunicationChannelInternal;

@interface AVOutputContextCommunicationChannel : NSObject {

	AVOutputContextCommunicationChannelInternal* _ivars;

}

@property (nonatomic,readonly) const CFStringRef commChannelUUID; 
@property (nonatomic,readonly) id<AVOutputContextCommunicationChannelImpl> impl; 
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)initWithOutputContextCommunicationChannelImpl:(id)arg1 ;
-(id)init;
-(id<AVOutputContextCommunicationChannelImpl>)impl;
-(const CFStringRef)commChannelUUID;
@end

