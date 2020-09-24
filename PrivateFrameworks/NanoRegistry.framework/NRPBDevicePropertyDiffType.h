/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NRPBDevicePropertyDiff;

@interface NRPBDevicePropertyDiffType : PBCodable <NSCopying> {

	int _changeType;
	NRPBDevicePropertyDiff* _diff;
	SCD_Struct_NR2 _has;

}

@property (assign,nonatomic) BOOL hasChangeType; 
@property (assign,nonatomic) int changeType;                             //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) BOOL hasDiff; 
@property (nonatomic,retain) NRPBDevicePropertyDiff * diff;              //@synthesize diff=_diff - In the implementation block
-(NRPBDevicePropertyDiff *)diff;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)hasChangeType;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(int)changeType;
-(BOOL)hasDiff;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDiff:(NRPBDevicePropertyDiff *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
