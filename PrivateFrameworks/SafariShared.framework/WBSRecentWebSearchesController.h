/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface WBSRecentWebSearchesController : NSObject {

	NSMutableArray* _recentSearchEntries;

}
+(id)_defaultsKey;
+(BOOL)_shouldTrackSearches;
+(unsigned long long)_maximumNumberOfSearchesToTrack;
-(void)clearRecentSearches;
-(id)recentSearches;
-(void)addRecentSearch:(id)arg1 ;
-(void)_addRecentSearchEntry:(id)arg1 ;
-(void)_saveRecentSearches;
-(void)_loadRecentSearchesIfNeeded;
-(id)recentSearchesMatchingPrefix:(id)arg1 ;
-(void)_removeLegacyRecentSearchesData;
-(id)_recentSearchesDictionaries;
-(void)_migrateLegacyData;
-(void)_addLegacySearch:(id)arg1 ;
-(void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2 ;
-(id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1 ;
-(void)clearRecentSearchesAddedAfterDate:(id)arg1 ;
@end

