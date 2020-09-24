/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsDaemon/TPSCondition.h>
#import <libobjc.A.dylib/TPSCloudDeviceDataSource.h>

@class NSArray, NSString;

@interface TPSCloudDevicesCondition : TPSCondition <TPSCloudDeviceDataSource> {

	NSArray* _registeredDevices;

}

@property (nonatomic,copy) NSArray * registeredDevices;              //@synthesize registeredDevices=_registeredDevices - In the implementation block
@property (nonatomic,copy) NSArray * values; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(id)_valuesFromValuesArray:(id)arg1 ;
-(id)targetingValidations;
-(void)setRegisteredDevices:(NSArray *)arg1 ;
-(NSArray *)registeredDevices;
@end
