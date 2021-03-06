/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSLocale, NSTimeZone, NSArray;

@interface NSCalendar : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * calendarIdentifier; 
@property (copy) NSLocale * locale; 
@property (copy) NSTimeZone * timeZone; 
@property (assign) unsigned long long firstWeekday; 
@property (assign) unsigned long long minimumDaysInFirstWeek; 
@property (copy,readonly) NSArray * eraSymbols; 
@property (copy,readonly) NSArray * longEraSymbols; 
@property (copy,readonly) NSArray * monthSymbols; 
@property (copy,readonly) NSArray * shortMonthSymbols; 
@property (copy,readonly) NSArray * veryShortMonthSymbols; 
@property (copy,readonly) NSArray * standaloneMonthSymbols; 
@property (copy,readonly) NSArray * shortStandaloneMonthSymbols; 
@property (copy,readonly) NSArray * veryShortStandaloneMonthSymbols; 
@property (copy,readonly) NSArray * weekdaySymbols; 
@property (copy,readonly) NSArray * shortWeekdaySymbols; 
@property (copy,readonly) NSArray * veryShortWeekdaySymbols; 
@property (copy,readonly) NSArray * standaloneWeekdaySymbols; 
@property (copy,readonly) NSArray * shortStandaloneWeekdaySymbols; 
@property (copy,readonly) NSArray * veryShortStandaloneWeekdaySymbols; 
@property (copy,readonly) NSArray * quarterSymbols; 
@property (copy,readonly) NSArray * shortQuarterSymbols; 
@property (copy,readonly) NSArray * standaloneQuarterSymbols; 
@property (copy,readonly) NSArray * shortStandaloneQuarterSymbols; 
@property (copy,readonly) NSString * AMSymbol; 
@property (copy,readonly) NSString * PMSymbol; 
+(id)hmf_unarchiveFromData:(id)arg1 error:(id*)arg2 ;
+(id)hk_gregorianCalendar;
+(id)hk_gregorianCalendarWithUTCTimeZone;
+(id)hk_gregorianCalendarWithLocalTimeZone;
+(id)hk_gregorianCalendarWithCupertinoTimeZone;
+(id)hk_canonicalDateOfBirthDateComponentsWithDate:(id)arg1 ;
+(id)CalYearlessDateThreshold;
+(id)CalDateFromBirthdayComponents:(id)arg1 ;
+(id)CalCalendarWithUnsanitizedCalendarIdentifier:(id)arg1 ;
+(id)sharedAutoupdatingCurrentCalendar;
+(id)CalGregorianGMTCalendar;
+(id)CalGregorianCalendarForTimeZone:(id)arg1 ;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
+(id)if_currentCalendarWithLanguageCode:(id)arg1 ;
+(void)initialize;
+(id)autoupdatingCurrentCalendar;
+(BOOL)supportsSecureCoding;
+(id)calendarWithIdentifier:(id)arg1 ;
+(id)currentCalendar;
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)pl_isDateValid:(id)arg1 ;
-(id)pl_startOfNextDayForDate:(id)arg1 ;
-(id)pl_endOfWeekForDate:(id)arg1 ;
-(id)pl_startOfWeekForDate:(id)arg1 ;
-(id)pl_validDateForDate:(id)arg1 ;
-(id)pl_startOfDayForDate:(id)arg1 ;
-(id)pl_startOfMonthForDate:(id)arg1 ;
-(id)pl_endOfDayForDate:(id)arg1 ;
-(id)pl_dateByAddingDays:(long long)arg1 toDate:(id)arg2 ;
-(id)pl_endOfPreviousDayForDate:(id)arg1 ;
-(void)hk_enumerateDateInterval:(id)arg1 byDateComponents:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)hk_dateOfBirthDateComponentsWithDate:(id)arg1 ;
-(id)hk_weekendDays;
-(id)hk_startOfDateByAddingDays:(long long)arg1 toDate:(id)arg2 ;
-(id)hk_startOfMonthForDate:(id)arg1 ;
-(id)hk_startOfWeekWithFirstWeekday:(long long)arg1 beforeDate:(id)arg2 addingWeeks:(long long)arg3 ;
-(id)_hk_weekendDaysForDate:(id)arg1 ;
-(id)hk_dateByAddingDays:(unsigned long long)arg1 toDate:(id)arg2 ;
-(id)hk_dateFromComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 ;
-(id)hk_timeZoneDependentReferenceDate;
-(id)hk_startOfHourForDate:(id)arg1 addingHours:(long long)arg2 ;
-(id)hk_startOfUnitForDate:(id)arg1 calendarUnit:(unsigned long long)arg2 ;
-(id)hk_startOfFitnessWeekBeforeDate:(id)arg1 ;
-(long long)_hk_cachedValueSinceTimeZoneDependentReferenceDateForUnitStartDate:(id)arg1 calendarUnit:(unsigned long long)arg2 ;
-(id)hk_nearestStartOfDayForDate:(id)arg1 ;
-(double)_hk_cachedLengthOfUnitForUnitStartDate:(id)arg1 calendarUnit:(unsigned long long)arg2 ;
-(id)hk_startOfDateBySubtractingDays:(long long)arg1 fromDate:(id)arg2 ;
-(id)hk_startOfMinuteForDate:(id)arg1 moduloMinutes:(long long)arg2 addingModuloCount:(long long)arg3 ;
-(id)hk_startOfMonthForDate:(id)arg1 addingMonths:(long long)arg2 ;
-(id)hk_startOfYearForDate:(id)arg1 addingYears:(long long)arg2 ;
-(id)hk_nearestStartOfWeekWithFirstWeekDay:(long long)arg1 date:(id)arg2 ;
-(id)hk_nearestStartOfMonthForDate:(id)arg1 ;
-(id)hk_dateBySubtractingDays:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)hk_firstDateWithHour:(long long)arg1 minute:(long long)arg2 afterDate:(id)arg3 ;
-(id)hk_nearestNoonBeforeDateOrEqualToDate:(id)arg1 ;
-(double)hk_timeIntervalSinceStartOfDayForDate:(id)arg1 ;
-(double)hk_lengthOfDayForDate:(id)arg1 ;
-(id)hk_dateByShiftingToGregorianCalendarWithUTCTimeZone:(id)arg1 ;
-(id)hk_dateByShiftingFromGregorianCalendarWithUTCTimeZone:(id)arg1 ;
-(id)hk_dateFromComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 ;
-(id)hk_dateFromComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 ;
-(BOOL)hk_isDate:(id)arg1 withinNumberOfCalendarDays:(unsigned long long)arg2 ofDate:(id)arg3 ;
-(double)hk_durationSinceReferenceDateForDate:(id)arg1 calendarUnit:(unsigned long long)arg2 ;
-(id)hk_dateWithDurationSinceReferenceDate:(double)arg1 calendarUnit:(unsigned long long)arg2 ;
-(id)hk_activitySummaryDateComponentsFromDate:(id)arg1 ;
-(id)CalOccurrencesForBirthday:(id)arg1 inDateRange:(id)arg2 ;
-(long long)secondsInMinute;
-(long long)minutesInHour;
-(long long)hoursInDay;
-(long long)monthsInYearForDate:(id)arg1 ;
-(long long)daysInWeek;
-(long long)secondsInDay;
-(id)dateBySanityCheckingDateRoundedToDay:(id)arg1 ;
-(long long)calendarDaysFromDate:(id)arg1 toDate:(id)arg2 ;
-(long long)daysInMonthContainingDate:(id)arg1 ;
-(long long)CalDaysInYearContainingDate:(id)arg1 ;
-(long long)CalWeeksInYearContainingDate:(id)arg1 ;
-(BOOL)dateIsFirstOfMonth:(id)arg1 ;
-(BOOL)dateIsFirstOfYear:(id)arg1 ;
-(id)CalDateFromComponents:(id)arg1 inTimeZone:(id)arg2 ;
-(id)CalDateBySubtractingComponents:(id)arg1 fromDate:(id)arg2 ;
-(id)mapDatesFromDate:(id)arg1 stepSize:(unsigned long long)arg2 range:(unsigned long long)arg3 mapBlock:(/*^block*/id)arg4 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(unsigned long long)bs_dayPeriodForDate:(id)arg1 inLocale:(id)arg2 ;
-(BOOL)date:(id)arg1 isSameDayAsDate:(id)arg2 ;
-(BOOL)date:(id)arg1 isSameYearAsDate:(id)arg2 ;
-(Class)classForCoder;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)AMSymbol;
-(NSString *)PMSymbol;
-(NSArray *)eraSymbols;
-(NSArray *)monthSymbols;
-(NSRange)minimumRangeOfUnit:(unsigned long long)arg1 ;
-(id)_copyLocale;
-(BOOL)isDateInToday:(id)arg1 ;
-(id)_copyTimeZone;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(BOOL)isDateInTomorrow:(id)arg1 ;
-(unsigned long long)firstWeekday;
-(id)dateWithEra:(long long)arg1 yearForWeekOfYear:(long long)arg2 weekOfYear:(long long)arg3 weekday:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8 ;
-(NSArray *)weekdaySymbols;
-(NSArray *)longEraSymbols;
-(NSArray *)quarterSymbols;
-(id)dateBySettingHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 ofDate:(id)arg4 options:(unsigned long long)arg5 ;
-(NSArray *)shortMonthSymbols;
-(void)getHour:(out long long*)arg1 minute:(out long long*)arg2 second:(out long long*)arg3 nanosecond:(out long long*)arg4 fromDate:(id)arg5 ;
-(NSArray *)veryShortStandaloneWeekdaySymbols;
-(id)nextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)isDateInYesterday:(id)arg1 ;
-(long long)component:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)nextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3 options:(unsigned long long)arg4 ;
-(void)setGregorianStartDate:(id)arg1 ;
-(NSArray *)shortWeekdaySymbols;
-(NSArray *)shortQuarterSymbols;
-(void)getEra:(out long long*)arg1 year:(out long long*)arg2 month:(out long long*)arg3 day:(out long long*)arg4 fromDate:(id)arg5 ;
-(BOOL)isDate:(id)arg1 equalToDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3 ;
-(NSArray *)standaloneMonthSymbols;
-(void)getEra:(out long long*)arg1 yearForWeekOfYear:(out long long*)arg2 weekOfYear:(out long long*)arg3 weekday:(out long long*)arg4 fromDate:(id)arg5 ;
-(BOOL)isDate:(id)arg1 inSameDayAsDate:(id)arg2 ;
-(NSArray *)veryShortStandaloneMonthSymbols;
-(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(long long)_ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forAT:(double)arg3 ;
-(id)dateWithEra:(long long)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8 ;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)nextDateAfterDate:(id)arg1 matchingHour:(long long)arg2 minute:(long long)arg3 second:(long long)arg4 options:(unsigned long long)arg5 ;
-(SCD_Struct_NS29)_minimumRangeOfUnit:(unsigned long long)arg1 ;
-(void)setMinimumDaysInFirstWeek:(unsigned long long)arg1 ;
-(NSArray *)veryShortMonthSymbols;
-(SCD_Struct_NS29)_maximumRangeOfUnit:(unsigned long long)arg1 ;
-(unsigned char)_diffComponents:(double)arg1 :(double)arg2 :(unsigned long long)arg3 :(const char*)arg4 :(char*)arg5 ;
-(NSArray *)shortStandaloneMonthSymbols;
-(NSArray *)standaloneWeekdaySymbols;
-(unsigned long long)_cfTypeID;
-(SCD_Struct_NS29)_rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forAT:(double)arg3 ;
-(NSArray *)standaloneQuarterSymbols;
-(id)dateBySettingUnit:(unsigned long long)arg1 value:(long long)arg2 ofDate:(id)arg3 options:(unsigned long long)arg4 ;
-(unsigned char)_addComponents:(double*)arg1 :(unsigned long long)arg2 :(const char*)arg3 :(char*)arg4 ;
-(id)componentsInTimeZone:(id)arg1 fromDate:(id)arg2 ;
-(BOOL)date:(id)arg1 matchesComponents:(id)arg2 ;
-(void)_setGregorianStartDate:(id)arg1 ;
-(unsigned char)_decomposeAbsoluteTime:(double)arg1 :(const char*)arg2 :(char*)arg3 ;
-(id)dateFromComponents:(id)arg1 ;
-(BOOL)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4 ;
-(NSArray *)shortStandaloneWeekdaySymbols;
-(BOOL)isDateInWeekend:(id)arg1 ;
-(void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(NSArray *)shortStandaloneQuarterSymbols;
-(BOOL)rangeOfWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 containingDate:(id)arg3 ;
-(id)_copyGregorianStartDate;
-(NSArray *)veryShortWeekdaySymbols;
-(unsigned char)_composeAbsoluteTime:(double*)arg1 :(const char*)arg2 :(char*)arg3 ;
-(id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(unsigned char)_rangeOfUnit:(unsigned long long)arg1 startTime:(double*)arg2 interval:(double*)arg3 forAT:(double)arg4 ;
-(BOOL)rangeOfUnit:(unsigned long long)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)initWithCalendarIdentifier:(id)arg1 ;
-(id)startOfDayForDate:(id)arg1 ;
-(NSLocale *)locale;
-(NSRange)maximumRangeOfUnit:(unsigned long long)arg1 ;
-(id)init;
-(void)setFirstWeekday:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)components:(unsigned long long)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(unsigned long long)minimumDaysInFirstWeek;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(long long)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3 ;
-(unsigned long long)hash;
-(NSString *)calendarIdentifier;
-(id)gregorianStartDate;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
@end

