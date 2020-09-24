/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TBAnalyticsEvent.h>

@class NSString, NSDictionary, NSNumber;

@interface TBJoinAnalyticsEvent : NSObject <TBAnalyticsEvent> {

	unsigned long long _type;
	unsigned long long _source;
	unsigned long long _action;
	NSString* _bssid;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _score;
	NSNumber* _visibleDuration;

}

@property (assign,nonatomic) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long source;                     //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * bssid;                                //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,retain) NSNumber * latitude;                           //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSNumber * longitude;                          //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) NSNumber * score;                              //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) NSNumber * visibleDuration;                    //@synthesize visibleDuration=_visibleDuration - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) NSDictionary * eventDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)joinRecommendationEventWithSource:(unsigned long long)arg1 action:(unsigned long long)arg2 BSSID:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 score:(id)arg6 visibleDuration:(id)arg7 ;
+(id)joinAlertEventWithSource:(unsigned long long)arg1 action:(unsigned long long)arg2 visibleDuration:(id)arg3 ;
-(NSNumber *)score;
-(unsigned long long)action;
-(void)setScore:(NSNumber *)arg1 ;
-(void)setBssid:(NSString *)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSString *)eventName;
-(void)setAction:(unsigned long long)arg1 ;
-(NSNumber *)longitude;
-(void)setType:(unsigned long long)arg1 ;
-(NSNumber *)latitude;
-(unsigned long long)source;
-(NSDictionary *)eventDictionary;
-(void)setLatitude:(NSNumber *)arg1 ;
-(NSString *)bssid;
-(void)setLongitude:(NSNumber *)arg1 ;
-(NSNumber *)visibleDuration;
-(void)setVisibleDuration:(NSNumber *)arg1 ;
@end
