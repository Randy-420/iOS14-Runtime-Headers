/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoPhotosForFamilyMembersWithDSIDsResponse : PBCodable <NSCopying> {

	NSMutableArray* _familyPhotos;
	NSMutableArray* _familyPhotosIDs;
	BOOL _success;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                                  //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSMutableArray * familyPhotosIDs;              //@synthesize familyPhotosIDs=_familyPhotosIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * familyPhotos;                 //@synthesize familyPhotos=_familyPhotos - In the implementation block
+(Class)familyPhotosIDsType;
+(Class)familyPhotosType;
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)success;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addFamilyPhotosIDs:(id)arg1 ;
-(void)addFamilyPhotos:(id)arg1 ;
-(unsigned long long)familyPhotosIDsCount;
-(void)clearFamilyPhotosIDs;
-(id)familyPhotosIDsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)familyPhotosCount;
-(void)clearFamilyPhotos;
-(id)familyPhotosAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)familyPhotosIDs;
-(void)setFamilyPhotosIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)familyPhotos;
-(void)setFamilyPhotos:(NSMutableArray *)arg1 ;
@end

