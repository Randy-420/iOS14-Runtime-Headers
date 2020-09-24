/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLPlacemark, INSpeakableString, NSNumber, INPaymentMethod, INDateComponentsRange;


@protocol INRequestRideIntentExport <NSObject,JSExport>
@property (nonatomic,copy) CLPlacemark * pickupLocation; 
@property (nonatomic,copy) CLPlacemark * dropOffLocation; 
@property (nonatomic,copy) INSpeakableString * rideOptionName; 
@property (nonatomic,copy) NSNumber * partySize; 
@property (nonatomic,copy) INPaymentMethod * paymentMethod; 
@property (nonatomic,copy) INDateComponentsRange * scheduledPickupTime; 
@required
-(void)setPickupLocation:(id)arg1;
-(CLPlacemark *)dropOffLocation;
-(void)setRideOptionName:(id)arg1;
-(void)setDropOffLocation:(id)arg1;
-(INSpeakableString *)rideOptionName;
-(CLPlacemark *)pickupLocation;
-(void)setPartySize:(id)arg1;
-(INPaymentMethod *)paymentMethod;
-(void)setPaymentMethod:(id)arg1;
-(INDateComponentsRange *)scheduledPickupTime;
-(void)setScheduledPickupTime:(id)arg1;
-(id)init;
-(NSNumber *)partySize;

@end
