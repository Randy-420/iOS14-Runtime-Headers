/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRGameControllerDigitizerProtobuf : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	double _x;
	double _y;
	BOOL _touchDown;
	SCD_Struct_MR15 _has;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,x,nonatomic) double x;                                //@synthesize x=_x - In the implementation block
@property (assign,nonatomic) BOOL hasY; 
@property (assign,y,nonatomic) double y;                                //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) BOOL hasTouchDown; 
@property (assign,nonatomic) BOOL touchDown;                            //@synthesize touchDown=_touchDown - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(double)y;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasX:(BOOL)arg1 ;
-(void)setX:(double)arg1 ;
-(BOOL)hasX;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setY:(double)arg1 ;
-(BOOL)hasY;
-(double)x;
-(BOOL)touchDown;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasTouchDown:(BOOL)arg1 ;
-(BOOL)hasTouchDown;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(void)setTouchDown:(BOOL)arg1 ;
-(id)description;
-(void)setHasY:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
@end
