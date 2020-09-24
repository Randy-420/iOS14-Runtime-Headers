/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSNumber;

@interface IMMessageNotificationTimer : NSObject {

	NSDate* _date;
	NSNumber* _numberDingsLeft;

}

@property (nonatomic,retain) NSDate * date;                             //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSNumber * numberDingsLeft;              //@synthesize numberDingsLeft=_numberDingsLeft - In the implementation block
@property (nonatomic,readonly) BOOL areDingsRemaining; 
-(id)initWithDate:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(void)dealloc;
-(NSNumber *)numberDingsLeft;
-(BOOL)areDingsRemaining;
-(void)reduceNumberDingsLeft;
@end
