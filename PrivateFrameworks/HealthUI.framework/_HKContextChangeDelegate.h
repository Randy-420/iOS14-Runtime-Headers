/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _HKContextChangeDelegate
@property (assign,nonatomic) BOOL durationContextSelected; 
@property (assign,nonatomic) BOOL scheduleContextSelected; 
@property (assign,nonatomic) BOOL baseDisplayIsSchedule; 
@property (assign,nonatomic) BOOL shouldHighlightBaseDisplayContext; 
@required
-(BOOL)durationContextSelected;
-(BOOL)scheduleContextSelected;
-(void)setDurationContextSelected:(BOOL)arg1;
-(void)setScheduleContextSelected:(BOOL)arg1;
-(BOOL)baseDisplayIsSchedule;
-(void)setBaseDisplayIsSchedule:(BOOL)arg1;
-(BOOL)shouldHighlightBaseDisplayContext;
-(void)setShouldHighlightBaseDisplayContext:(BOOL)arg1;

@end

