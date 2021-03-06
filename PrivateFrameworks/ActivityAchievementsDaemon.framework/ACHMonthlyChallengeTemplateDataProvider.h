/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSCalendar, ACHAchievementStore, HDProfile, ACHActivitySummaryUtility;

@interface ACHMonthlyChallengeTemplateDataProvider : NSObject {

	NSDate* _currentDateOverride;
	NSCalendar* _currentCalendarOverride;
	ACHAchievementStore* _achievementStore;
	HDProfile* _profile;
	ACHActivitySummaryUtility* _activitySummaryUtility;
	NSCalendar* _currentCalendar;
	NSDate* _currentDate;

}

@property (assign,nonatomic,__weak) ACHAchievementStore * achievementStore;                          //@synthesize achievementStore=_achievementStore - In the implementation block
@property (assign,nonatomic,__weak) HDProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) ACHActivitySummaryUtility * activitySummaryUtility;              //@synthesize activitySummaryUtility=_activitySummaryUtility - In the implementation block
@property (nonatomic,retain) NSCalendar * currentCalendar;                                           //@synthesize currentCalendar=_currentCalendar - In the implementation block
@property (nonatomic,retain) NSDate * currentDate;                                                   //@synthesize currentDate=_currentDate - In the implementation block
-(void)setProfile:(HDProfile *)arg1 ;
-(NSDate *)currentDate;
-(BOOL)isWheelchairUser;
-(HDProfile *)profile;
-(NSCalendar *)currentCalendar;
-(void)setAchievementStore:(ACHAchievementStore *)arg1 ;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(void)setActivitySummaryUtility:(ACHActivitySummaryUtility *)arg1 ;
-(ACHAchievementStore *)achievementStore;
-(ACHActivitySummaryUtility *)activitySummaryUtility;
-(void)setCurrentCalendar:(NSCalendar *)arg1 ;
-(BOOL)isDate:(id)arg1 betweenStartDate:(id)arg2 andEndDate:(id)arg3 ;
-(id)existingMonthlyChallengeTemplates;
-(unsigned long long)monthlyChallengeTypeForMonth:(id)arg1 ;
-(id)initWithProfile:(id)arg1 achievementStore:(id)arg2 activitySummaryUtility:(id)arg3 ;
-(long long)numberOfEarnedInstancesOfTemplateWithUniqueName:(id)arg1 inDateComponentInterval:(id)arg2 withCalendar:(id)arg3 ;
-(BOOL)monthlyChallengeExistsForMonth:(id)arg1 ;
-(long long)currentActivityMoveMode;
-(unsigned long long)currentExperienceType;
-(BOOL)hasMinimumActiveDays;
-(void)setCurrentDateOverride:(id)arg1 ;
-(void)setCurrentCalendarOverride:(id)arg1 ;
@end

