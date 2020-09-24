/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORoutingSettingsVirtualGarageSetttings : PBCodable <NSCopying> {

	int _electronicVehicleCount;
	int _licensePlateCount;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasElectronicVehicleCount; 
@property (assign,nonatomic) int electronicVehicleCount; 
@property (assign,nonatomic) BOOL hasLicensePlateCount; 
@property (assign,nonatomic) int licensePlateCount; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setElectronicVehicleCount:(int)arg1 ;
-(void)setLicensePlateCount:(int)arg1 ;
-(int)electronicVehicleCount;
-(void)setHasElectronicVehicleCount:(BOOL)arg1 ;
-(BOOL)hasElectronicVehicleCount;
-(int)licensePlateCount;
-(void)setHasLicensePlateCount:(BOOL)arg1 ;
-(BOOL)hasLicensePlateCount;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
