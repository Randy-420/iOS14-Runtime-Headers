/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/HFHomeObserver.h>

@protocol HFNamedWallpaperSource;
@class HFWallpaperFileManager, HFWallpaperLegacyFileManager, HFWallpaperImageCache, NSUserDefaults, HFReaderWriterCache, NSString;

@interface HFWallpaperManager : NSObject <HFHomeManagerObserver, HFHomeObserver> {

	BOOL _wallpaperSourceRegistered;
	BOOL _hasPreheatedCache;
	id<HFNamedWallpaperSource> _namedWallpaperSource;
	HFWallpaperFileManager* _fileManager;
	HFWallpaperLegacyFileManager* _legacyFileManager;
	HFWallpaperImageCache* _imageCache;
	NSUserDefaults* _userDefaults;
	HFReaderWriterCache* _wallpapersCache;
	HFReaderWriterCache* _wallpaperSlicesCache;

}

@property (nonatomic,retain) id<HFNamedWallpaperSource> namedWallpaperSource;               //@synthesize namedWallpaperSource=_namedWallpaperSource - In the implementation block
@property (nonatomic,retain) HFWallpaperFileManager * fileManager;                          //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,retain) HFWallpaperLegacyFileManager * legacyFileManager;              //@synthesize legacyFileManager=_legacyFileManager - In the implementation block
@property (nonatomic,retain) HFWallpaperImageCache * imageCache;                            //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                                 //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) HFReaderWriterCache * wallpapersCache;                         //@synthesize wallpapersCache=_wallpapersCache - In the implementation block
@property (nonatomic,retain) HFReaderWriterCache * wallpaperSlicesCache;                    //@synthesize wallpaperSlicesCache=_wallpaperSlicesCache - In the implementation block
@property (assign,nonatomic) BOOL hasPreheatedCache;                                        //@synthesize hasPreheatedCache=_hasPreheatedCache - In the implementation block
@property (nonatomic,readonly) BOOL wallpaperSourceRegistered;                              //@synthesize wallpaperSourceRegistered=_wallpaperSourceRegistered - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(HFWallpaperFileManager *)fileManager;
-(void)setFileManager:(HFWallpaperFileManager *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)setNamedWallpaperSource:(id<HFNamedWallpaperSource>)arg1 ;
-(void)_migrateIfNeeded;
-(id<HFNamedWallpaperSource>)namedWallpaperSource;
-(void)preheatCache;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(HFWallpaperLegacyFileManager *)legacyFileManager;
-(long long)_namedCollectionTypeForKey:(id)arg1 ;
-(void)_setImageCacheForWallpaper:(id)arg1 image:(id)arg2 forHomeKitIdentifier:(id)arg3 ;
-(void)_logUserMetricsAfterSettingWallpaper;
-(void)_pruneUnusedWallpapersWithExistingHomeKitIdentifiers:(id)arg1 ;
-(id)_resolveHomeKitObjectForKey:(id)arg1 ;
-(void)registerWallpaperSource:(id)arg1 processedSource:(id)arg2 ;
-(id)allNamedWallpapersForCollection:(long long)arg1 ;
-(void)setLegacyFileManager:(HFWallpaperLegacyFileManager *)arg1 ;
-(void)setWallpapersCache:(HFReaderWriterCache *)arg1 ;
-(void)setWallpaperSlicesCache:(HFReaderWriterCache *)arg1 ;
-(void)home:(id)arg1 didRemoveRoom:(id)arg2 ;
-(id)init;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(HFWallpaperImageCache *)imageCache;
-(void)setWallpaper:(id)arg1 image:(id)arg2 forHomeKitObject:(id)arg3 ;
-(id)wallpaperForHomeKitObject:(id)arg1 ;
-(id)sliceFromWallpaper:(id)arg1 variant:(long long)arg2 ;
-(id)defaultNamedWallpaperForCollection:(long long)arg1 ;
-(id)imageForNamedWallpaper:(id)arg1 ;
-(id)generateProcessedImageFromWallpaper:(id)arg1 originalImage:(id)arg2 ;
-(HFReaderWriterCache *)wallpapersCache;
-(id)_cachedWallpaperForKey:(id)arg1 ;
-(id)_wallpaperForKey:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(HFReaderWriterCache *)wallpaperSlicesCache;
-(id)_cachedWallpaperSliceForIdentifier:(id)arg1 ;
-(id)_sliceFromWallpaper:(id)arg1 variant:(long long)arg2 preloading:(BOOL)arg3 ;
-(id)_originalImageForWallpaper:(id)arg1 ;
-(void)_setWallpaper:(id)arg1 image:(id)arg2 forKey:(id)arg3 ;
-(void)_setWallpaper:(id)arg1 image:(id)arg2 forHomeKitIdentifier:(id)arg3 ;
-(void)_dispatchWallpaperChangedForKey:(id)arg1 ;
-(void)_pruneUnusedWallpapers;
-(void)_preloadWallpapersForHome:(id)arg1 ;
-(BOOL)hasPreheatedCache;
-(void)setHasPreheatedCache:(BOOL)arg1 ;
-(void)_preloadWallpaperSlicesForKey:(id)arg1 ;
-(BOOL)wallpaperSourceRegistered;
-(void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3 ;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1 ;
-(void)setImageCache:(HFWallpaperImageCache *)arg1 ;
@end

