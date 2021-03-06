/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface LPShadowStyle : NSObject {

	double _radius;
	double _opacity;
	UIColor* _color;

}

@property (assign,nonatomic) double radius;                //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double opacity;               //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
+(id)cardHeadingIconShadow;
-(double)opacity;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(id)init;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setOpacity:(double)arg1 ;
@end

