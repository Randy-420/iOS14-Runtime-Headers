/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBAppSessionEndWatch : PBCodable <NSCopying> {

	long long _watchAppSessionDuration;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasWatchAppSessionDuration; 
@property (assign,nonatomic) long long watchAppSessionDuration;              //@synthesize watchAppSessionDuration=_watchAppSessionDuration - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setWatchAppSessionDuration:(long long)arg1 ;
-(void)setHasWatchAppSessionDuration:(BOOL)arg1 ;
-(BOOL)hasWatchAppSessionDuration;
-(long long)watchAppSessionDuration;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
