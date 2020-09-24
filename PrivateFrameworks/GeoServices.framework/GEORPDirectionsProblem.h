/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSData, GEORPUserSearchInput;

@interface GEORPDirectionsProblem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _clientSuggestedRoutes;
	NSData* _directionsResponseId;
	GEORPUserSearchInput* _endWaypoint;
	NSMutableArray* _instructionCorrections;
	NSData* _overviewScreenshotImageData;
	NSMutableArray* _problematicRouteIndexs;
	GEORPUserSearchInput* _startWaypoint;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _problematicLineIndex;
	unsigned _problematicStepIndex;
	struct {
		unsigned has_problematicLineIndex : 1;
		unsigned has_problematicStepIndex : 1;
		unsigned read_clientSuggestedRoutes : 1;
		unsigned read_directionsResponseId : 1;
		unsigned read_endWaypoint : 1;
		unsigned read_instructionCorrections : 1;
		unsigned read_overviewScreenshotImageData : 1;
		unsigned read_problematicRouteIndexs : 1;
		unsigned read_startWaypoint : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDirectionsResponseId; 
@property (nonatomic,retain) NSData * directionsResponseId; 
@property (nonatomic,readonly) BOOL hasOverviewScreenshotImageData; 
@property (nonatomic,retain) NSData * overviewScreenshotImageData; 
@property (assign,nonatomic) BOOL hasProblematicStepIndex; 
@property (assign,nonatomic) unsigned problematicStepIndex; 
@property (nonatomic,retain) NSMutableArray * clientSuggestedRoutes; 
@property (nonatomic,retain) NSMutableArray * problematicRouteIndexs; 
@property (assign,nonatomic) BOOL hasProblematicLineIndex; 
@property (assign,nonatomic) unsigned problematicLineIndex; 
@property (nonatomic,readonly) BOOL hasStartWaypoint; 
@property (nonatomic,retain) GEORPUserSearchInput * startWaypoint; 
@property (nonatomic,readonly) BOOL hasEndWaypoint; 
@property (nonatomic,retain) GEORPUserSearchInput * endWaypoint; 
@property (nonatomic,retain) NSMutableArray * instructionCorrections; 
+(Class)clientSuggestedRouteType;
+(Class)problematicRouteIndexType;
+(Class)instructionCorrectionType;
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)overviewScreenshotImageData;
-(void)setOverviewScreenshotImageData:(NSData *)arg1 ;
-(void)setProblematicStepIndex:(unsigned)arg1 ;
-(void)addClientSuggestedRoute:(id)arg1 ;
-(void)setProblematicLineIndex:(unsigned)arg1 ;
-(unsigned long long)clientSuggestedRoutesCount;
-(void)clearClientSuggestedRoutes;
-(id)clientSuggestedRouteAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOverviewScreenshotImageData;
-(unsigned)problematicStepIndex;
-(void)setHasProblematicStepIndex:(BOOL)arg1 ;
-(BOOL)hasProblematicStepIndex;
-(NSMutableArray *)clientSuggestedRoutes;
-(void)setClientSuggestedRoutes:(NSMutableArray *)arg1 ;
-(unsigned)problematicLineIndex;
-(void)setHasProblematicLineIndex:(BOOL)arg1 ;
-(BOOL)hasProblematicLineIndex;
-(BOOL)readFrom:(id)arg1 ;
-(GEORPUserSearchInput *)endWaypoint;
-(void)addProblematicRouteIndex:(id)arg1 ;
-(void)addInstructionCorrection:(id)arg1 ;
-(BOOL)hasEndWaypoint;
-(unsigned long long)problematicRouteIndexsCount;
-(void)clearProblematicRouteIndexs;
-(id)problematicRouteIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)instructionCorrectionsCount;
-(void)clearInstructionCorrections;
-(id)instructionCorrectionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)problematicRouteIndexs;
-(GEORPUserSearchInput *)startWaypoint;
-(void)setProblematicRouteIndexs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)instructionCorrections;
-(void)setInstructionCorrections:(NSMutableArray *)arg1 ;
-(id)jsonRepresentation;
-(void)setStartWaypoint:(GEORPUserSearchInput *)arg1 ;
-(void)setEndWaypoint:(GEORPUserSearchInput *)arg1 ;
-(BOOL)hasStartWaypoint;
-(id)init;
-(NSData *)directionsResponseId;
-(void)setDirectionsResponseId:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDirectionsResponseId;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
