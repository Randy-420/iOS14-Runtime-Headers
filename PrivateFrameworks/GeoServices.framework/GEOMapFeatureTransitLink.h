/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureLine.h>

@class NSString;

@interface GEOMapFeatureTransitLink : GEOMapFeatureLine {

	SCD_Struct_GE166* _transitLink;
	unsigned long long _lineIndex;

}

@property (nonatomic,readonly) GEOTileKey tileKey; 
@property (nonatomic,readonly) SCD_Struct_GE166* transitLink; 
@property (nonatomic,readonly) NSString * internalLineName; 
-(void)dealloc;
-(SCD_Struct_GE166*)transitLink;
-(id)initWithTransitLink:(SCD_Struct_GE166*)arg1 lineIndex:(unsigned long long)arg2 ;
-(id)_containingTile;
-(SCD_Struct_GE204*)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long*)arg2 ;
-(NSString *)internalLineName;
-(GEOTileKey)tileKey;
@end

