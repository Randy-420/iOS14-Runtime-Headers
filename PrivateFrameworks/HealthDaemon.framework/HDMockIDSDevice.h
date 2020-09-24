/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, NSArray;

@interface HDMockIDSDevice : NSObject <NSCopying> {

	BOOL _isActive;
	BOOL _supportsCinnamonHW;
	BOOL _supportsCinnamonAntimonyGloryF;
	NSUUID* _nanoRegistryPairingID;
	NSUUID* _nsuuid;
	NSString* _uniqueIDOverride;
	NSString* _service;
	NSString* _name;
	NSString* _productBuildVersion;
	NSString* _buildType;
	NSString* _productType;
	NSString* _modelNumber;
	NSString* _systemVersion;
	NSString* _regionCode;
	NSArray* _identities;
	NSString* _electrocardiogramVersion;
	NSString* _backgroundAtrialFibrillationVersion;

}

@property (nonatomic,retain) NSUUID * nanoRegistryPairingID;                            //@synthesize nanoRegistryPairingID=_nanoRegistryPairingID - In the implementation block
@property (nonatomic,retain) NSUUID * nsuuid;                                           //@synthesize nsuuid=_nsuuid - In the implementation block
@property (nonatomic,copy) NSString * uniqueIDOverride;                                 //@synthesize uniqueIDOverride=_uniqueIDOverride - In the implementation block
@property (nonatomic,copy) NSString * service;                                          //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * productBuildVersion;                              //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (nonatomic,copy) NSString * buildType;                                        //@synthesize buildType=_buildType - In the implementation block
@property (nonatomic,copy) NSString * productType;                                      //@synthesize productType=_productType - In the implementation block
@property (nonatomic,copy) NSString * modelNumber;                                      //@synthesize modelNumber=_modelNumber - In the implementation block
@property (nonatomic,copy) NSString * systemVersion;                                    //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,copy) NSString * regionCode;                                       //@synthesize regionCode=_regionCode - In the implementation block
@property (nonatomic,copy) NSArray * identities;                                        //@synthesize identities=_identities - In the implementation block
@property (nonatomic,readonly) long long relationship; 
@property (nonatomic,copy) NSString * electrocardiogramVersion;                         //@synthesize electrocardiogramVersion=_electrocardiogramVersion - In the implementation block
@property (nonatomic,copy) NSString * backgroundAtrialFibrillationVersion;              //@synthesize backgroundAtrialFibrillationVersion=_backgroundAtrialFibrillationVersion - In the implementation block
@property (nonatomic,readonly) BOOL isLocallyPaired; 
@property (nonatomic,readonly) BOOL isDefaultPairedDevice; 
@property (assign,nonatomic) BOOL isActive;                                             //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) BOOL supportsCinnamonHW;                                   //@synthesize supportsCinnamonHW=_supportsCinnamonHW - In the implementation block
@property (assign,nonatomic) BOOL supportsCinnamonAntimonyGloryF;                       //@synthesize supportsCinnamonAntimonyGloryF=_supportsCinnamonAntimonyGloryF - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setModelNumber:(NSString *)arg1 ;
-(NSString *)systemVersion;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(NSUUID *)nsuuid;
-(NSString *)modelNumber;
-(NSString *)productType;
-(long long)relationship;
-(NSString *)regionCode;
-(BOOL)isActive;
-(void)setRegionCode:(NSString *)arg1 ;
-(void)setProductType:(NSString *)arg1 ;
-(void)setIsActive:(BOOL)arg1 ;
-(void)setSystemVersion:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)service;
-(NSArray *)identities;
-(BOOL)isDefaultPairedDevice;
-(NSString *)buildType;
-(void)setIdentities:(NSArray *)arg1 ;
-(NSString *)name;
-(NSString *)uniqueIDOverride;
-(BOOL)isLocallyPaired;
-(void)setService:(NSString *)arg1 ;
-(void)setBuildType:(NSString *)arg1 ;
-(NSString *)productBuildVersion;
-(id)hd_deviceIdentifier;
-(id)hd_destinationIdentifier;
-(BOOL)hd_isEquivalentToDevice:(id)arg1 ;
-(id)hd_shortDescription;
-(void)setUniqueIDOverride:(NSString *)arg1 ;
-(void)setNsuuid:(NSUUID *)arg1 ;
-(void)setElectrocardiogramVersion:(NSString *)arg1 ;
-(void)setBackgroundAtrialFibrillationVersion:(NSString *)arg1 ;
-(void)setSupportsCinnamonHW:(BOOL)arg1 ;
-(void)setSupportsCinnamonAntimonyGloryF:(BOOL)arg1 ;
-(NSUUID *)nanoRegistryPairingID;
-(void)setNanoRegistryPairingID:(NSUUID *)arg1 ;
-(NSString *)electrocardiogramVersion;
-(NSString *)backgroundAtrialFibrillationVersion;
-(BOOL)supportsCinnamonHW;
-(BOOL)supportsCinnamonAntimonyGloryF;
@end
