/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableFHIRIdentifier : PBCodable <NSCopying> {

	NSString* _identifier;
	NSString* _resourceType;

}

@property (nonatomic,readonly) BOOL hasResourceType; 
@property (nonatomic,retain) NSString * resourceType;              //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
-(NSString *)resourceType;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setResourceType:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasResourceType;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

