/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXAutoPlacement.h>

@protocol SXAdvertisementPlacementType, SXSuggestedArticlesPlacementType;
@class NSString;

@interface SXResolvedAutoPlacement : NSObject <SXAutoPlacement> {

	id<SXAdvertisementPlacementType> _advertisement;
	id<SXSuggestedArticlesPlacementType> _suggestedArticles;

}

@property (nonatomic,readonly) id<SXAdvertisementPlacementType> advertisement;                      //@synthesize advertisement=_advertisement - In the implementation block
@property (nonatomic,readonly) id<SXSuggestedArticlesPlacementType> suggestedArticles;              //@synthesize suggestedArticles=_suggestedArticles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXAdvertisementPlacementType>)advertisement;
-(id<SXSuggestedArticlesPlacementType>)suggestedArticles;
-(id)initWithAdvertisement:(id)arg1 suggestedArticles:(id)arg2 ;
@end

