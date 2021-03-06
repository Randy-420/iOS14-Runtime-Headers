/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface MSPBTimerContext : NSObject {

	BOOL _isValid;
	NSDate* _date;

}

@property (assign,nonatomic) BOOL isValid;               //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)contextWithDate:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(id)init;
-(void)setIsValid:(BOOL)arg1 ;
-(BOOL)isValid;
@end

