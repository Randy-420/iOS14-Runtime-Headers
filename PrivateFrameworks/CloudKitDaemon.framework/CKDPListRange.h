/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPListPosition;

@interface CKDPListRange : PBCodable <NSCopying> {

	CKDPListPosition* _left;
	CKDPListPosition* _right;

}

@property (nonatomic,readonly) BOOL hasLeft; 
@property (nonatomic,retain) CKDPListPosition * left;               //@synthesize left=_left - In the implementation block
@property (nonatomic,readonly) BOOL hasRight; 
@property (nonatomic,retain) CKDPListPosition * right;              //@synthesize right=_right - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLeft:(CKDPListPosition *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasLeft;
-(CKDPListPosition *)left;
-(CKDPListPosition *)right;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRight:(CKDPListPosition *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(BOOL)hasRight;
@end

