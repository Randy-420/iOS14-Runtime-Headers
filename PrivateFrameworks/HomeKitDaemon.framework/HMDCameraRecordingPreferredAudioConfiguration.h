/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface HMDCameraRecordingPreferredAudioConfiguration : NSObject {

	NSNumber* _bitRate;
	long long _sampleRate;

}

@property (readonly) NSNumber * bitRate;                //@synthesize bitRate=_bitRate - In the implementation block
@property (readonly) long long sampleRate;              //@synthesize sampleRate=_sampleRate - In the implementation block
-(long long)sampleRate;
-(NSNumber *)bitRate;
-(id)description;
-(id)initWithSampleRate:(long long)arg1 bitRate:(id)arg2 ;
@end

