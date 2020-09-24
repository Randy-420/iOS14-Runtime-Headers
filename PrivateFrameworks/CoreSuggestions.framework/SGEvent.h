/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/SGObject.h>
#import <libobjc.A.dylib/SGEventForGeocode.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate, NSTimeZone, NSArray, NSURL;

@interface SGEvent : SGObject <SGEventForGeocode> {

	NSObject*<OS_dispatch_queue> _geocodeQueue;
	SGEvent* _geocoded;
	BOOL _isAllDay;
	NSString* _title;
	NSString* _notes;
	NSDate* _start;
	NSTimeZone* _startTimeZone;
	NSDate* _end;
	NSTimeZone* _endTimeZone;
	NSDate* _creationDate;
	NSDate* _lastModifiedDate;
	NSArray* _locations;
	NSString* _opaqueKey;
	NSString* _uniqueKey;
	NSArray* _tags;
	NSURL* _URL;
	NSString* _naturalLanguageEventTypeIdentifier;
	unsigned long long _naturalLanguageEventAttributes;
	NSArray* _schemaOrg;

}

@property (nonatomic,readonly) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * notes;                                                     //@synthesize notes=_notes - In the implementation block
@property (nonatomic,readonly) NSDate * start;                                                       //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) NSTimeZone * startTimeZone;                                           //@synthesize startTimeZone=_startTimeZone - In the implementation block
@property (nonatomic,readonly) NSDate * end;                                                         //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) NSTimeZone * endTimeZone;                                             //@synthesize endTimeZone=_endTimeZone - In the implementation block
@property (nonatomic,readonly) BOOL isAllDay;                                                        //@synthesize isAllDay=_isAllDay - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastModifiedDate;                                            //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,readonly) NSArray * locations;                                                  //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) NSString * opaqueKey;                                                 //@synthesize opaqueKey=_opaqueKey - In the implementation block
@property (nonatomic,readonly) NSString * uniqueKey;                                                 //@synthesize uniqueKey=_uniqueKey - In the implementation block
@property (nonatomic,readonly) NSArray * tags;                                                       //@synthesize tags=_tags - In the implementation block
@property (getter=isGeocodeCandidate,nonatomic,readonly) BOOL geocodeCandidate; 
@property (nonatomic,readonly) NSURL * URL;                                                          //@synthesize URL=_URL - In the implementation block
@property (getter=isNaturalLanguageEvent,nonatomic,readonly) BOOL naturalLanguageEvent; 
@property (nonatomic,readonly) NSString * naturalLanguageEventTypeIdentifier;                        //@synthesize naturalLanguageEventTypeIdentifier=_naturalLanguageEventTypeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long naturalLanguageEventAttributes;                    //@synthesize naturalLanguageEventAttributes=_naturalLanguageEventAttributes - In the implementation block
@property (nonatomic,readonly) NSArray * schemaOrg;                                                  //@synthesize schemaOrg=_schemaOrg - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)sameDayEvents:(id)arg1 ;
+(id)formatEvents:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)eventWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(BOOL)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15 URL:(id)arg16 ;
-(id)formattedStartDate;
-(id)formattedStartTime;
-(id)timeZoneOrGMT;
-(NSDate *)end;
-(NSString *)uniqueKey;
-(BOOL)isGeocodeCandidate;
-(NSArray *)schemaOrg;
-(BOOL)isAllDay;
-(BOOL)isNaturalLanguageEvent;
-(id)_componentsForDate:(id)arg1 timeZone:(id)arg2 isEnd:(BOOL)arg3 calendar:(id)arg4 ;
-(NSArray *)tags;
-(id)loggingIdentifier;
-(id)initWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(BOOL)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tagStrings:(id)arg15 URL:(id)arg16 naturalLanguageEventIdentifier:(id)arg17 naturalLanguageEventAttributes:(unsigned long long)arg18 schemaOrg:(id)arg19 ;
-(void)geocodeWithCallback:(/*^block*/id)arg1 ;
-(double)duration;
-(NSArray *)locations;
-(BOOL)shouldAllowNotificationsInCalendarForBundleId:(id)arg1 appIsInForeground:(BOOL)arg2 ;
-(id)endDateComponents;
-(NSString *)title;
-(NSURL *)URL;
-(BOOL)shouldAllowNotificationsInCalendarForBundleId:(id)arg1 appIsInForeground:(BOOL)arg2 allowListOverride:(id)arg3 ;
-(id)geocodeStartTimeZone;
-(unsigned long long)geocodingMode;
-(id)_naturalLanguageEventTagsInTags:(id)arg1 ;
-(id)poiFilters;
-(id)firstLocationForType:(unsigned long long)arg1 ;
-(id)toEKEventWithStore:(id)arg1 ;
-(void)_applyTimeRangeToEKEvent:(id)arg1 withTZID:(id)arg2 ;
-(NSDate *)start;
-(void)mergeIntoEKEvent:(id)arg1 ;
-(BOOL)shouldAllowNotificationsInCalendarWithAllowListOverride:(id)arg1 ;
-(NSString *)opaqueKey;
-(id)geocodeEndDate;
-(NSTimeZone *)startTimeZone;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)ekEventAvailabilityState;
-(id)startDateComponents;
-(NSDate *)creationDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(BOOL)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15 URL:(id)arg16 ;
-(id)geocodedEventWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4 locations:(id)arg5 ;
-(id)geocodeLocations;
-(void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2 ;
-(NSTimeZone *)endTimeZone;
-(unsigned long long)hash;
-(id)geocodeStartDate;
-(void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2 preservingValuesDifferentFrom:(id)arg3 ;
-(id)geocodeEndTimeZone;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(unsigned long long)naturalLanguageEventAttributes;
-(NSDate *)lastModifiedDate;
-(void)_mergeTagsIntoEKEvent:(id)arg1 withStore:(id)arg2 ;
-(NSString *)notes;
-(id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2 ;
-(NSString *)naturalLanguageEventTypeIdentifier;
@end
