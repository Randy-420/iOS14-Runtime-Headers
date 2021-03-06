/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKLabelMarkerView.h>
#import <libobjc.A.dylib/_MKBalloonCalloutViewConfiguring.h>

@class UIColor, UIImage, UIView, NSString;

@interface _MKBalloonLabelMarkerView : _MKLabelMarkerView <_MKBalloonCalloutViewConfiguring> {

	UIView* _anchorDotView;
	BOOL _needsToResolveBalloonAttributes;
	long long _balloonCalloutStyle;
	BOOL _balloonCalloutShouldOriginateFromSmallSize;
	UIColor* _balloonFillColor;
	UIColor* _balloonStrokeColor;
	UIImage* _balloonImage;
	UIView* _balloonContentView;
	double _smallBalloonScaleFactor;

}

@property (getter=_balloonCalloutStyle,nonatomic,readonly) long long balloonCalloutStyle; 
@property (getter=_balloonTintColor,nonatomic,readonly) UIColor * balloonTintColor; 
@property (getter=_balloonStrokeColor,nonatomic,readonly) UIColor * balloonStrokeColor; 
@property (getter=_balloonImage,nonatomic,readonly) UIImage * balloonImage; 
@property (getter=_balloonContentView,nonatomic,readonly) UIView * balloonContentView; 
@property (getter=_balloonInnerStrokeColor,nonatomic,readonly) UIColor * balloonInnerStrokeColor; 
@property (getter=_balloonImageTintColor,nonatomic,readonly) UIColor * balloonImageTintColor; 
@property (getter=_balloonCalloutShouldShowArrow,nonatomic,readonly) BOOL balloonCalloutShouldShowArrow; 
@property (getter=_balloonCalloutShouldCenterWhenOffscreen,nonatomic,readonly) BOOL balloonCalloutShouldCenterWhenOffscreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_balloonStrokeColor;
-(id)_balloonInnerStrokeColor;
-(id)_balloonTintColor;
-(void)prepareForReuse;
-(void)_configureBalloonForDataIconImageKeys:(id)arg1 scale:(double)arg2 ;
-(void)_resolveBalloonAttributesIfNecessary;
-(void)_addAnchorDotViewIfNeeded;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_balloonImage;
-(long long)_balloonCalloutStyle;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)shouldShowCallout;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1 ;
-(BOOL)_balloonCalloutShouldOriginateFromSmallSize:(double*)arg1 ;
-(id)_balloonContentView;
@end

