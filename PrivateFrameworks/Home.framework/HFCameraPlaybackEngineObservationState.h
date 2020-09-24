/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFCameraPlaybackEngineObservationOptions;

@interface HFCameraPlaybackEngineObservationState : NSObject {

	HFCameraPlaybackEngineObservationOptions* _options;
	id _timeObservationToken;

}

@property (nonatomic,retain) HFCameraPlaybackEngineObservationOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) id timeObservationToken;                                         //@synthesize timeObservationToken=_timeObservationToken - In the implementation block
-(void)setOptions:(HFCameraPlaybackEngineObservationOptions *)arg1 ;
-(HFCameraPlaybackEngineObservationOptions *)options;
-(void)setTimeObservationToken:(id)arg1 ;
-(id)timeObservationToken;
@end
