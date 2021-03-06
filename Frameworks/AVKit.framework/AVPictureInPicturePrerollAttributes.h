/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVKit/AVKit-Structs.h>
@class PGPlaybackStatePrerollAttributes, UIColor;

@interface AVPictureInPicturePrerollAttributes : NSObject {

	PGPlaybackStatePrerollAttributes* _pegasusAttributes;
	SCD_Struct_AV3 _requiredLinearPlaybackEndTime;

}

@property (nonatomic,readonly) PGPlaybackStatePrerollAttributes * pegasusAttributes;              //@synthesize pegasusAttributes=_pegasusAttributes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AV3 requiredLinearPlaybackEndTime;                      //@synthesize requiredLinearPlaybackEndTime=_requiredLinearPlaybackEndTime - In the implementation block
@property (nonatomic,readonly) UIColor * preferredTintColor; 
+(id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:(SCD_Struct_AV3)arg1 preferredTintColor:(id)arg2 ;
+(id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:(SCD_Struct_AV3)arg1 preferredTintColor:(id)arg2 ;
-(PGPlaybackStatePrerollAttributes *)pegasusAttributes;
-(UIColor *)preferredTintColor;
-(id)initWithPlaybackStatePrerollAttributes:(id)arg1 requiredLinearPlaybackEndTime:(SCD_Struct_AV3)arg2 ;
-(SCD_Struct_AV3)requiredLinearPlaybackEndTime;
@end

