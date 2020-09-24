/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSString, CCUISensorActivityData, UILabel, UIView, UIImageView;

@interface CCUISensorStatusButton : UIButton {

	NSString* _bundleIdentifier;
	CCUISensorActivityData* _sensorActivityData;
	UILabel* _descriptionLabel;
	UIView* _indicatorView;
	UIImageView* _settingsLaunchIndicatorImageView;

}

@property (nonatomic,copy) CCUISensorActivityData * sensorActivityData;                   //@synthesize sensorActivityData=_sensorActivityData - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                  //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIView * indicatorView;                                      //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,retain) UIImageView * settingsLaunchIndicatorImageView;              //@synthesize settingsLaunchIndicatorImageView=_settingsLaunchIndicatorImageView - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSString *)bundleIdentifier;
-(UIView *)indicatorView;
-(void)setIndicatorView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(BOOL)showsLargeContentViewer;
-(id)largeContentTitle;
-(id)_imageSymbolConfiguration;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(BOOL)scalesLargeContentImage;
-(id)initWithSensorActivityData:(id)arg1 ;
-(double)_indicatorsWidth;
-(void)_configureDescriptionLabelIfNecessary;
-(void)_configureIndicatorViewIfNecessary;
-(void)_configureSettingsLaunchIndicatorImageView;
-(void)_layoutIndicatorViewIfNecessary;
-(void)_layoutDescriptionLabelIfNecessary;
-(void)_layoutSettingsLaunchIndicatorImageView;
-(id)_cameraIndicatorImage;
-(id)_micIndicatorImage;
-(id)_plainCircleImage;
-(id)_fontForTitleLabel;
-(id)sensorDescription;
-(id)_rightChevronImage;
-(CCUISensorActivityData *)sensorActivityData;
-(void)setSensorActivityData:(CCUISensorActivityData *)arg1 ;
-(UIImageView *)settingsLaunchIndicatorImageView;
-(void)setSettingsLaunchIndicatorImageView:(UIImageView *)arg1 ;
@end
