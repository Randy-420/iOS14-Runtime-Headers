/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <QuartzCore/CALayer.h>

@class HKDateCache, CALayer, UIColor, UIFont, NSDate;

@interface HKCalendarDayCell : CALayer {

	long long _dayOfMonth;
	BOOL _selected;
	BOOL _representsToday;
	HKDateCache* _dateCache;
	CALayer* _circle;
	CALayer* _dayLabel;
	UIColor* _textColor;
	UIFont* _font;
	UIFont* _boldFont;
	double _dayDiameter;
	NSDate* _date;

}

@property (nonatomic,readonly) HKDateCache * dateCache;                    //@synthesize dateCache=_dateCache - In the implementation block
@property (nonatomic,readonly) CALayer * circle;                           //@synthesize circle=_circle - In the implementation block
@property (nonatomic,readonly) CALayer * dayLabel;                         //@synthesize dayLabel=_dayLabel - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                          //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                                //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIFont * boldFont;                            //@synthesize boldFont=_boldFont - In the implementation block
@property (assign,nonatomic) double dayDiameter;                           //@synthesize dayDiameter=_dayDiameter - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long dayOfMonth;                       //@synthesize dayOfMonth=_dayOfMonth - In the implementation block
@property (nonatomic,readonly) BOOL representsToday;                       //@synthesize representsToday=_representsToday - In the implementation block
+(void)clearImageCache;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSDate *)date;
-(CALayer *)circle;
-(long long)dayOfMonth;
-(void)setSelected:(BOOL)arg1 ;
-(id)debugDescription;
-(HKDateCache *)dateCache;
-(UIFont *)font;
-(id)_integerNumberFormatter;
-(id)init;
-(UIColor *)textColor;
-(BOOL)isSelected;
-(double)_roundedRectCornerRadius;
-(CALayer *)dayLabel;
-(UIFont *)boldFont;
-(CGSize)circleSize;
-(void)setFont:(UIFont *)arg1 ;
-(double)dayDiameter;
-(id)_reusedImageForDateIndex:(long long)arg1 color:(id)arg2 ;
-(void)layoutOnce;
-(CGSize)_roundedRectSizeForDayNumberString:(id)arg1 ;
-(void)updateDateTextForDayNumber:(long long)arg1 textColor:(id)arg2 ;
-(id)initWithDateCache:(id)arg1 ;
-(void)updateWithDate:(id)arg1 dayOfMonth:(long long)arg2 ;
-(void)setDayDiameter:(double)arg1 ;
-(void)setBoldFont:(UIFont *)arg1 ;
-(BOOL)representsToday;
@end

