/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <MediaPlayer/MPVolumeSlider.h>

@class UIColor;

@interface ADVolumeSlider : MPVolumeSlider {

	UIColor* _maximumTintUsedForTrackImageColor;
	UIColor* _minimumTintUsedForTrackImageColor;

}
-(id)_newVolumeWarningView;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_availableRoutesDidChangeNotification:(id)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(id)_trackImageWithTintColor:(id)arg1 ;
-(void)_updateTrackTintForVolumeControlAvailability;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
@end

