/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface AMSLookupItemOffer : NSObject {

	NSDictionary* _lookupDictionary;

}

@property (nonatomic,readonly) NSString * buyParameters; 
@property (nonatomic,readonly) NSString * formattedPrice; 
@property (nonatomic,readonly) NSDictionary * lookupDictionary;              //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
@property (nonatomic,readonly) NSString * offerType; 
@property (nonatomic,readonly) NSNumber * price; 
@property (nonatomic,readonly) NSString * subscriptionType; 
-(NSString *)offerType;
-(NSNumber *)price;
-(id)initWithLookupDictionary:(id)arg1 ;
-(id)actionTextForType:(id)arg1 ;
-(NSString *)formattedPrice;
-(NSString *)subscriptionType;
-(NSDictionary *)lookupDictionary;
-(NSString *)buyParameters;
@end

