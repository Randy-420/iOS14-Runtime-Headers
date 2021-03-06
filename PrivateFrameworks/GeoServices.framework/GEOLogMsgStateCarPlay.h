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

@class GEOCarInfo;

@interface GEOLogMsgStateCarPlay : PBCodable <NSCopying> {

	GEOCarInfo* _carInfo;
	BOOL _isConnected;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasIsConnected; 
@property (assign,nonatomic) BOOL isConnected; 
@property (nonatomic,readonly) BOOL hasCarInfo; 
@property (nonatomic,retain) GEOCarInfo * carInfo; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isConnected;
-(void)setCarInfo:(GEOCarInfo *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(GEOCarInfo *)carInfo;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIsConnected;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIsConnected:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasIsConnected:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasCarInfo;
-(id)description;
-(id)dictionaryRepresentation;
@end

