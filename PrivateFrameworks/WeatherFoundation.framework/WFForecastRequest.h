/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFTask.h>

@class WFLocation, NSDate, NSDateComponents, NSData, NSLocale, NSString;

@interface WFForecastRequest : WFTask {

	BOOL _attachRawAPIData;
	WFLocation* _location;
	NSDate* _onDate;
	/*^block*/id _completionHandler;
	NSDateComponents* _date;
	unsigned long long _forecastType;
	NSData* _rawAPIData;
	NSLocale* _locale;
	NSString* _trackingParameter;

}

@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSDateComponents * date;                        //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) WFLocation * location;                          //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) unsigned long long forecastType;              //@synthesize forecastType=_forecastType - In the implementation block
@property (assign,nonatomic) BOOL attachRawAPIData;                        //@synthesize attachRawAPIData=_attachRawAPIData - In the implementation block
@property (nonatomic,retain) NSData * rawAPIData;                          //@synthesize rawAPIData=_rawAPIData - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                            //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * trackingParameter;                 //@synthesize trackingParameter=_trackingParameter - In the implementation block
@property (nonatomic,readonly) NSDate * onDate;                            //@synthesize onDate=_onDate - In the implementation block
+(id)forecastRequestForLocation:(id)arg1 onDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)forecastRequestForLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)forecastRequestForLocation:(id)arg1 date:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cleanup;
-(NSDate *)onDate;
-(NSData *)rawAPIData;
-(void)setTrackingParameter:(NSString *)arg1 ;
-(void)setDate:(NSDateComponents *)arg1 ;
-(id)initWithLocation:(id)arg1 date:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setRawAPIData:(NSData *)arg1 ;
-(NSDateComponents *)date;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)handleResponse:(id)arg1 ;
-(void)handleCancellation;
-(WFLocation *)location;
-(void)setAttachRawAPIData:(BOOL)arg1 ;
-(NSLocale *)locale;
-(void)setForecastType:(unsigned long long)arg1 ;
-(void)setLocation:(WFLocation *)arg1 ;
-(void)startWithService:(id)arg1 ;
-(NSString *)trackingParameter;
-(unsigned long long)forecastType;
-(BOOL)attachRawAPIData;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithLocation:(id)arg1 onDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)description;
-(id)completionHandler;
@end

