/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOComposedWaypoint;

@interface MSPRidesharingTrip : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOComposedWaypoint* _endWaypoint;
	GEOComposedWaypoint* _startWaypoint;

}

@property (nonatomic,readonly) BOOL hasStartWaypoint; 
@property (nonatomic,retain) GEOComposedWaypoint * startWaypoint;              //@synthesize startWaypoint=_startWaypoint - In the implementation block
@property (nonatomic,readonly) BOOL hasEndWaypoint; 
@property (nonatomic,retain) GEOComposedWaypoint * endWaypoint;                //@synthesize endWaypoint=_endWaypoint - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(GEOComposedWaypoint *)endWaypoint;
-(BOOL)hasEndWaypoint;
-(GEOComposedWaypoint *)startWaypoint;
-(void)setStartWaypoint:(GEOComposedWaypoint *)arg1 ;
-(void)setEndWaypoint:(GEOComposedWaypoint *)arg1 ;
-(BOOL)hasStartWaypoint;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

