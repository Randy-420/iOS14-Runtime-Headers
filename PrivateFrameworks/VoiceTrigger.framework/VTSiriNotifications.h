/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceTrigger/VoiceTrigger-Structs.h>
@class VTSiriPHash;

@interface VTSiriNotifications : NSObject {

	CFNotificationCenterRef _center;
	VTSiriPHash* _hasher;

}
-(id)init;
-(void)broadcastAudioPayload:(id)arg1 numSamples:(unsigned long long)arg2 superVectorScore:(double)arg3 absoluteTime:(unsigned long long)arg4 ;
@end
