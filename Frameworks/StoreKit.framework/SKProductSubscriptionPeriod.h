/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SKProductSubscriptionPeriod : NSObject {

	id _internal;

}

@property (nonatomic,readonly) unsigned long long numberOfUnits; 
@property (nonatomic,readonly) unsigned long long unit; 
-(unsigned long long)unit;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithISO8601String:(id)arg1 ;
-(id)init;
-(void)_setNumberOfUnits:(unsigned long long)arg1 ;
-(unsigned long long)numberOfUnits;
-(void)_setUnit:(unsigned long long)arg1 ;
@end
