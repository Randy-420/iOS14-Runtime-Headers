/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEOFailedTicket.h>
#import <libobjc.A.dylib/GEOMapServiceCompletionTicket.h>

@class NSString, GEOMapServiceTraits, NSDictionary;

@interface _GEOFailedCompletionTicket : _GEOFailedTicket <GEOMapServiceCompletionTicket> {

	NSString* searchQuery;
	NSString* _searchQuery;

}

@property (getter=_searchQuery,nonatomic,readonly) NSString * searchQuery;              //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE91 dataRequestKind; 
-(id)_searchQuery;
-(BOOL)shouldDisplayNoResults;
-(BOOL)hasShouldDisplayNoResults;
-(double)retainSearchTime;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(BOOL)isRapEnabled;
-(BOOL)matchesFragment:(id)arg1 ;
-(id)initWithError:(id)arg1 searchQuery:(id)arg2 traits:(id)arg3 ;
-(void)applyToSuggestionList:(id)arg1 ;
-(void)submitWithAutoCompletionHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(id)sortPriorityMapping;
-(void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2 ;
-(id)clientRankingModel;
-(BOOL)autocompleteTopSectionIsQuerySuggestions;
-(BOOL)showAutocompleteClientSource;
-(void)applyToPlaceInfo:(id)arg1 ;
@end
