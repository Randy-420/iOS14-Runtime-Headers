/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, MTSyncInfo;

@interface MTPodcast : NSManagedObject

@property (assign,nonatomic) BOOL needsArtworkUpdate; 
@property (assign,nonatomic) BOOL importing; 
@property (assign,nonatomic) BOOL hasBeenSynced; 
@property (assign,nonatomic) BOOL isExplicit; 
@property (assign,nonatomic) BOOL sortAscending; 
@property (assign,nonatomic) BOOL playbackNewestToOldest; 
@property (getter=isDark,nonatomic,readonly) BOOL dark; 
@property (getter=isPastFeedDark,nonatomic,readonly) BOOL feedDark; 
@property (getter=isPastAutodownloadDark,nonatomic,readonly) BOOL autodownloadDark; 
@property (assign,getter=isAuthenticatedDark,nonatomic) BOOL authenticatedDark; 
@property (nonatomic,readonly) BOOL sortAscending; 
@property (nonatomic,readonly) BOOL isExplicit; 
@property (nonatomic,readonly) BOOL playbackNewestToOldest; 
@property (assign,nonatomic) double addedDate; 
@property (nonatomic,retain) NSString * author; 
@property (assign,nonatomic) int autoDownloadType; 
@property (nonatomic,retain) NSString * category; 
@property (assign,nonatomic) long long darkCount; 
@property (assign,nonatomic) long long darkCountLocal; 
@property (assign,nonatomic) long long deletePlayedEpisodes; 
@property (assign,nonatomic) double downloadedDate; 
@property (assign,nonatomic) long long episodeLimit; 
@property (nonatomic,retain) NSString * feedURL; 
@property (assign,nonatomic) long long flags; 
@property (assign,nonatomic) BOOL hidden; 
@property (nonatomic,retain) NSString * imageURL; 
@property (nonatomic,retain) NSString * itemDescription; 
@property (assign,nonatomic) double lastDatePlayed; 
@property (assign,nonatomic) double lastTouchDate; 
@property (assign,nonatomic) BOOL notifications; 
@property (assign,nonatomic) BOOL orphanedFromCloud; 
@property (assign,nonatomic) long long podcastPID; 
@property (nonatomic,retain) NSString * provider; 
@property (assign,nonatomic) BOOL showPlacardForOrphanedFromCloud; 
@property (assign,nonatomic) BOOL showPlacardForRemovePlayedEpisodes; 
@property (assign,nonatomic) BOOL showPlacardForSavedEpisodes; 
@property (assign,nonatomic) long long sortOrder; 
@property (assign,nonatomic) long long storeCollectionId; 
@property (nonatomic,retain) NSString * storeCleanURL; 
@property (nonatomic,retain) NSString * storeShortURL; 
@property (assign,nonatomic) double lastStoreEpisodesInfoCheckDate; 
@property (assign,nonatomic) double lastStorePodcastInfoCheckDate; 
@property (assign,nonatomic) BOOL subscribed; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) double updateAvg; 
@property (assign,nonatomic) double updatedDate; 
@property (nonatomic,retain) NSString * updatedFeedURL; 
@property (assign,nonatomic) long long updateInterval; 
@property (assign,nonatomic) double updateStdDev; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSSet * episodes; 
@property (nonatomic,retain) NSSet * playlists; 
@property (nonatomic,retain) NSSet * playlistSettings; 
@property (nonatomic,retain) MTSyncInfo * syncInfo; 
@property (nonatomic,retain) NSString * showTypeInFeed; 
@property (assign,nonatomic) long long showTypeSetting; 
@property (nonatomic,retain) NSString * nextEpisodeUuid; 
@property (assign,nonatomic) double modifiedDate; 
@property (nonatomic,retain) NSString * webpageURL; 
@property (assign,nonatomic) double feedChangedDate; 
@property (nonatomic,readonly) BOOL autoDownload; 
@property (assign,nonatomic) long long keepEpisodes; 
+(id)predicateForAllPodcasts;
+(id)predicateForOrphanedFromCloud:(BOOL)arg1 ;
+(id)predicateForAutoDownloadType:(int)arg1 ;
+(id)predicateForUpdateInterval:(long long)arg1 ;
+(BOOL)isRedirectURL:(id)arg1 ;
+(long long)storeCollectionIdForRedirectURL:(id)arg1 ;
+(id)predicateForPodcastStoreId:(long long)arg1 ;
+(id)userDefaultPropertiesAffectingPredicates;
+(id)predicateForSubscribed:(BOOL)arg1 ;
+(id)predicateForSubscribedAndNotHidden:(BOOL)arg1 ;
+(id)predicateForSyncablePodcasts;
+(id)predicateForHasBeenSynced:(BOOL)arg1 ;
+(id)predicateForAutoDownloadEnabled;
+(id)predicateForUpdatablePodcasts;
+(id)predicateForPodcastWithFeedUrl:(id)arg1 ;
+(id)predicateForPodcastWithTitle:(id)arg1 ;
+(id)predicateForPodcastUuids:(id)arg1 ;
+(id)predicateForPodcastUUID:(id)arg1 ;
+(id)predicateForPodcastWithPodcastPID:(long long)arg1 ;
+(void)prepareForPlatform:(id)arg1 ;
+(id)sortDescriptorsForNewestToOldest:(BOOL)arg1 ;
+(id)podcastUuidForFeedUrlString:(id)arg1 ctx:(id)arg2 ;
+(id)latestEpisodeUuidForPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)allPossibleEpisodeListSortOrderProperties;
+(id)sortDescriptorsForOldestOnTop;
+(id)sortDescriptorsForNewestOnTop;
+(id)podcastUuidForFeedUrl:(id)arg1 ctx:(id)arg2 ;
+(id)podcastUuidForEpisodeUuid:(id)arg1 ctx:(id)arg2 ;
+(id)sortDescriptorsForDateAdded;
+(id)sortDescriptorsForRecentlyUpdated;
+(id)sortDescriptorsForManualOrder;
+(id)sortDescriptorsForTitle;
+(id)sortDescriptorsForAllPodcasts;
+(id)sortDescriptorsForLastDatePlayed;
+(id)insertNewPodcastInManagedObjectContext:(id)arg1 subscribed:(BOOL)arg2 feedUrl:(id)arg3 showType:(long long)arg4 title:(id)arg5 author:(id)arg6 provider:(id)arg7 imageUrl:(id)arg8 description:(id)arg9 ;
+(id)redirectURLForStoreCollectionId:(long long)arg1 ;
+(id)insertNewPodcastInManagedObjectContext:(id)arg1 subscribed:(BOOL)arg2 feedUrl:(id)arg3 showType:(long long)arg4 title:(id)arg5 author:(id)arg6 provider:(id)arg7 imageUrl:(id)arg8 description:(id)arg9 adamId:(long long)arg10 ;
+(unsigned long long)totalUnplayedCount;
+(void)setRemovePlayedEpisodesSetting:(long long)arg1 forPodcastUuid:(id)arg2 ;
+(int)autoDownloadDefaultValue;
+(long long)episodeLimitDefaultValue;
+(long long)deletePlayedEpisodesDefaultValue;
+(id)_defaultsForLoadingDefaultValues;
+(long long)updateIntervalDefaultValue;
+(double)timeIntervalForUpdate:(long long)arg1 ;
+(long long)updateIntervalSettingForTimeInterval:(double)arg1 ;
-(BOOL)isShareable;
-(void)setAuthor:(NSString *)arg1 ;
-(id)shareURL;
-(BOOL)isDark;
-(void)setFlags:(long long)arg1 ;
-(id)seasonNumbers;
-(id)redirectURL;
-(void)setIsExplicit:(BOOL)arg1 ;
-(void)setImageURL:(NSString *)arg1 ;
-(void)setWebpageURL:(NSString *)arg1 ;
-(void)setItemDescription:(NSString *)arg1 ;
-(void)setSubscribed:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setModifiedDate:(double)arg1 ;
-(BOOL)sortAscending;
-(void)setUpdatedFeedURL:(NSString *)arg1 ;
-(void)setSortAscending:(BOOL)arg1 ;
-(BOOL)isAuthenticatedDark;
-(BOOL)isPastAutodownloadDark;
-(BOOL)isPastFeedDark;
-(id)episodesAfterEpisode:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 ;
-(id)newestUserEpisodeExcludingExplicit:(long long)arg1 ;
-(id)oldestUserEpisodeExcludingExplicit:(long long)arg1 ;
-(id)newestEpisodeExcludingUuid:(id)arg1 excludeExplicit:(long long)arg2 ;
-(id)oldestEpisodeExcludingExplicit:(long long)arg1 ;
-(id)sortDescriptorsForSortOrder;
-(void)setLastDatePlayed:(double)arg1 ;
-(void)markPlaylistsForUpdate;
-(void)setPlaybackNewestToOldest:(BOOL)arg1 ;
-(void)setDeletePlayedEpisodes:(long long)arg1 ;
-(BOOL)needsArtworkUpdate;
-(BOOL)updateCursorPosition:(BOOL)arg1 ;
-(id)mostRecentlyPlayedEpisode;
-(id)userEpisodeAfterEpisode:(id)arg1 ;
-(id)mostRecentlyPlayedEpisodeExcludingExplicit:(long long)arg1 excludingStreaming:(long long)arg2 ;
-(id)mostRecentlyPlayedEpisodeExcludingEpisodeUuid:(id)arg1 restrictedToLibrary:(BOOL)arg2 excludeExplicit:(long long)arg3 excludeStreaming:(long long)arg4 ;
-(id)_episodeAfterEpisode:(id)arg1 usePlayOrder:(BOOL)arg2 restrictToUserEpisodes:(BOOL)arg3 excludePlayed:(BOOL)arg4 ;
-(id)_episodesNextToEpisode:(id)arg1 after:(BOOL)arg2 usePlayOrder:(BOOL)arg3 restrictToUserEpisodes:(BOOL)arg4 excludePlayed:(BOOL)arg5 excludeExplicit:(long long)arg6 episodeTypeFilter:(long long)arg7 limit:(long long)arg8 ;
-(id)_episodeAfterEpisode:(id)arg1 usePlayOrder:(BOOL)arg2 restrictToUserEpisodes:(BOOL)arg3 excludePlayed:(BOOL)arg4 excludeExplicit:(long long)arg5 excludeStreaming:(long long)arg6 episodeTypeFilter:(long long)arg7 ;
-(id)_episodeBeforeEpisode:(id)arg1 usePlayOrder:(BOOL)arg2 restrictToUserEpisodes:(BOOL)arg3 excludePlayed:(BOOL)arg4 ;
-(id)_episodesNextTo:(double)arg1 after:(BOOL)arg2 usePlayOrder:(BOOL)arg3 sortAsc:(BOOL)arg4 restrictToUserEpisodes:(BOOL)arg5 excludePlayed:(BOOL)arg6 excludeExplicit:(long long)arg7 excludeStreaming:(long long)arg8 episodeTypeFilter:(long long)arg9 limit:(long long)arg10 ;
-(id)_episodeNextToEpisode:(id)arg1 after:(BOOL)arg2 usePlayOrder:(BOOL)arg3 restrictToUserEpisodes:(BOOL)arg4 excludePlayed:(BOOL)arg5 excludeExplicit:(long long)arg6 excludeStreaming:(long long)arg7 episodeTypeFilter:(long long)arg8 ;
-(id)_episodeNextToEpisode:(id)arg1 after:(BOOL)arg2 usePlayOrder:(BOOL)arg3 restrictToUserEpisodes:(BOOL)arg4 excludePlayed:(BOOL)arg5 excludeExplicit:(long long)arg6 episodeTypeFilter:(long long)arg7 ;
-(id)_episodesNextToEpisode:(id)arg1 after:(BOOL)arg2 usePlayOrder:(BOOL)arg3 restrictToUserEpisodes:(BOOL)arg4 excludePlayed:(BOOL)arg5 excludeExplicit:(long long)arg6 excludeStreaming:(long long)arg7 episodeTypeFilter:(long long)arg8 limit:(long long)arg9 ;
-(id)sortDescriptorsForPlayOrder;
-(id)newestEpisodeExcludingUuid:(id)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 ;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 excludingEpisodeUuid:(id)arg6 ;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 playStateFilter:(long long)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 excludingEpisodeUuid:(id)arg6 episodeTypeFilter:(long long)arg7 ;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 episodeTypeFilter:(long long)arg5 ;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 excludingEpisodeUuid:(id)arg6 episodeTypeFilter:(long long)arg7 ;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 ;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 ;
-(id)oldestEpisodeExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2 episodeTypeFilter:(long long)arg3 ;
-(id)oldestEpisodeNotPlayedExcludingExplicit:(long long)arg1 ;
-(id)oldestEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludingStreaming:(long long)arg2 episodeTypeFilter:(long long)arg3 ;
-(id)oldestUserEpisodeExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2 ;
-(id)oldestUserEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2 ;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludingEpisodeUuid:(id)arg5 episodeTypeFilter:(long long)arg6 ;
-(long long)latestSeasonNumber;
-(id)episodesInSeasonNumber:(long long)arg1 oldestEpisodesFirst:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 episodeTypeFilter:(long long)arg6 limit:(unsigned long long)arg7 ;
-(id)newestEpisodeRestrictToUserEpisodes:(BOOL)arg1 playStateFilter:(long long)arg2 excludingExplicit:(long long)arg3 excludeStreaming:(long long)arg4 episodeTypeFilter:(long long)arg5 ;
-(id)newestEpisode;
-(id)_fetchRequestForDistinctSeasons;
-(id)episodesInSeasonNumber:(long long)arg1 ;
-(id)episodesInSeasonNumber:(long long)arg1 oldestEpisodesFirst:(BOOL)arg2 ;
-(id)episodesInSeasonNumber:(long long)arg1 oldestEpisodesFirst:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 limit:(unsigned long long)arg5 ;
-(id)currentFeedURL;
-(void)setHasBeenSynced:(BOOL)arg1 ;
-(BOOL)hasBeenSynced;
-(void)setImporting:(BOOL)arg1 ;
-(BOOL)importing;
-(void)setNeedsArtworkUpdate:(BOOL)arg1 ;
-(void)setFeedChangedDate:(double)arg1 ;
-(void)setUpdateStdDev:(double)arg1 ;
-(void)setUpdateAvg:(double)arg1 ;
-(void)setShowTypeInFeed:(NSString *)arg1 ;
-(long long)showTypeResolvedValue;
-(long long)showTypeInFeedResolvedValue;
-(BOOL)isSerialShowTypeInFeed;
-(void)setShowTypeSetting:(long long)arg1 ;
-(id)episodeToResume;
-(id)mostRecentlyManuallyAddedEpisode;
-(id)userEpisodesAfterEpisode:(id)arg1 ;
-(id)episodeNewerThanEpisode:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 episodeTypeFilter:(long long)arg6 ;
-(id)episodeOlderThanEpisode:(id)arg1 ;
-(id)episodePublishedBefore:(double)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 episodeTypeFilter:(long long)arg6 ;
-(id)episodePublishedAfter:(double)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 episodeTypeFilter:(long long)arg6 ;
-(id)episodesPublishedAfter:(double)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 episodeTypeFilter:(long long)arg6 limit:(long long)arg7 sortAsc:(BOOL)arg8 ;
-(id)episodeAfterEpisode:(id)arg1 ;
-(id)firstUserEpisodeNotPlayed;
-(id)newestFullEpisode;
-(id)nextEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2 episodeTypeFilter:(long long)arg3 ;
-(id)newestUserEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2 ;
-(id)oldestEpisode;
-(id)oldestEpisodeRestrictToUserEpisodes:(BOOL)arg1 excludePlayed:(BOOL)arg2 excludingExplicit:(long long)arg3 excludeStreaming:(long long)arg4 episodeTypeFilter:(long long)arg5 ;
-(id)oldestFullEpisode;
-(id)oldestEpisodeNotPlayed;
-(id)oldestUserEpisode;
-(id)oldestUserEpisodeNotPlayedExcludingExplicit:(long long)arg1 ;
-(id)newestEpisodeUuid;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 ;
-(id)_latestOrOldestEpisode:(BOOL)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(long long)arg4 excludingEpisodeUuid:(id)arg5 ;
-(id)oldestEpisodeInLatestSeasonOrShowExcludingPlayed:(BOOL)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 episodeTypeFilter:(long long)arg4 ;
-(id)smartPlayEpisode;
-(BOOL)hasAtLeastOneSeason;
-(BOOL)hasMultipleSeasons;
-(id)episodesInLatestSeason;
-(id)bestDescription;
-(void)updateLastTouchDate;
-(void)updateEpisodesMetadataIdentifiers;
-(id)bestAvailableStoreCleanURL;
-(id)twitterShareURL;
-(void)setOrphanedFromCloud:(BOOL)arg1 ;
-(void)setAuthenticatedDark:(BOOL)arg1 ;
-(void)resetGoDark;
-(id)countOfNewEpisodes;
-(id)countOfUnplayedEpisodes;
-(id)bestFeedURLExcludingRedirectURL:(BOOL)arg1 ;
-(unsigned long long)countOfMyEpisodes;
-(BOOL)isExplicit;
-(void)setPodcastPID:(long long)arg1 ;
-(BOOL)sortAscending;
-(BOOL)playbackNewestToOldest;
-(id)displayURL;
-(int)autoDownloadResolvedValue;
-(long long)episodeLimitResolvedValue;
-(BOOL)deletePlayedEpisodesResolvedValue;
-(long long)mt_syncID;
@end

