/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDScorecardLayout, NSString, NSArray;

@interface GEOPlaceQuestionnaire : NSObject {

	GEOPDScorecardLayout* _scorecardLayout;
	NSString* _version;
	NSArray* _ratingCategories;

}

@property (nonatomic,copy,readonly) NSString * version;                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * ratingCategories;              //@synthesize ratingCategories=_ratingCategories - In the implementation block
-(NSString *)version;
-(NSArray *)ratingCategories;
-(id)initWithScorecardLayout:(id)arg1 ;
@end
