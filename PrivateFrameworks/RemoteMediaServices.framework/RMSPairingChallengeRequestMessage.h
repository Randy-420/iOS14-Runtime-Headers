/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RMSPairingCredentialsMessage;

@interface RMSPairingChallengeRequestMessage : PBCodable <NSCopying> {

	RMSPairingCredentialsMessage* _pairingCredentials;
	int _sessionIdentifier;
	SCD_Struct_RM1 _has;

}

@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                                          //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPairingCredentials; 
@property (nonatomic,retain) RMSPairingCredentialsMessage * pairingCredentials;              //@synthesize pairingCredentials=_pairingCredentials - In the implementation block
-(int)sessionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSessionIdentifier;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(RMSPairingCredentialsMessage *)pairingCredentials;
-(void)setPairingCredentials:(RMSPairingCredentialsMessage *)arg1 ;
-(BOOL)hasPairingCredentials;
@end

