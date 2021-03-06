/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/AVAssetDownloadDelegate.h>

@protocol FCAVAssetCacheType, FCAVAssetKeyCacheType;
@class FCAsyncOnceOperation, NFLazy, FCThreadSafeMutableDictionary, NSString;

@interface FCAVAssetDownloadManager : NSObject <AVAssetDownloadDelegate> {

	id<FCAVAssetCacheType> _assetCache;
	id<FCAVAssetKeyCacheType> _keyCache;
	FCAsyncOnceOperation* _restoreBackgroundDownloadsOnce;
	NFLazy* _URLSession;
	FCThreadSafeMutableDictionary* _activeDownloadsByAssetID;

}

@property (nonatomic,readonly) id<FCAVAssetCacheType> assetCache;                                     //@synthesize assetCache=_assetCache - In the implementation block
@property (nonatomic,readonly) id<FCAVAssetKeyCacheType> keyCache;                                    //@synthesize keyCache=_keyCache - In the implementation block
@property (nonatomic,readonly) FCAsyncOnceOperation * restoreBackgroundDownloadsOnce;                 //@synthesize restoreBackgroundDownloadsOnce=_restoreBackgroundDownloadsOnce - In the implementation block
@property (nonatomic,readonly) NFLazy * URLSession;                                                   //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,readonly) FCThreadSafeMutableDictionary * activeDownloadsByAssetID;              //@synthesize activeDownloadsByAssetID=_activeDownloadsByAssetID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NFLazy *)URLSession;
-(void)_callCompletionHandlersForAssetID:(id)arg1 interestToken:(id)arg2 error:(id)arg3 ;
-(void)_completeRequestForAssetID:(id)arg1 withDownloadedURL:(id)arg2 remoteURL:(id)arg3 error:(id)arg4 ;
-(id)initWithAssetCache:(id)arg1 keyCache:(id)arg2 ;
-(void)_ensureAssetIsPurgeable:(id)arg1 ;
-(FCAsyncOnceOperation *)restoreBackgroundDownloadsOnce;
-(id)_handleAssetDownloadFromNetwork:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)_isAssetInCache:(id)arg1 ;
-(id<FCAVAssetKeyCacheType>)keyCache;
-(void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(id)_restoreBackgroundDownloadsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id<FCAVAssetCacheType>)assetCache;
-(FCThreadSafeMutableDictionary *)activeDownloadsByAssetID;
-(id)downloadAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_shouldUseAVAssetDownloadForAsset:(id)arg1 ;
-(void)restoreBackgroundDownloadsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)interestTokenForCachedAsset:(id)arg1 ;
@end

