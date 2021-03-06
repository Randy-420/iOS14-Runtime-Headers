/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol HUWallpaperPhotoCollectionViewControllerDelegate;
@class HUWallpaperPhotoCollectionFlowLayout, PHCachingImageManager, PHFetchResult, NAFuture, NSString;

@interface HUWallpaperPhotoCollectionViewController : UICollectionViewController <PHPhotoLibraryChangeObserver> {

	BOOL _initialScrollToBottom;
	id<HUWallpaperPhotoCollectionViewControllerDelegate> _delegate;
	long long _assetCollectionSubtype;
	HUWallpaperPhotoCollectionFlowLayout* _flowLayout;
	PHCachingImageManager* _imageManager;
	PHFetchResult* _assetsFetchResult;
	NAFuture* _imageDownloadFuture;

}

@property (assign,nonatomic,__weak) HUWallpaperPhotoCollectionFlowLayout * flowLayout;                            //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) PHCachingImageManager * imageManager;                                                //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,retain) PHFetchResult * assetsFetchResult;                                                   //@synthesize assetsFetchResult=_assetsFetchResult - In the implementation block
@property (nonatomic,retain) NAFuture * imageDownloadFuture;                                                      //@synthesize imageDownloadFuture=_imageDownloadFuture - In the implementation block
@property (assign,nonatomic) BOOL initialScrollToBottom;                                                          //@synthesize initialScrollToBottom=_initialScrollToBottom - In the implementation block
@property (nonatomic,__weak,readonly) id<HUWallpaperPhotoCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long assetCollectionSubtype;                                                  //@synthesize assetCollectionSubtype=_assetCollectionSubtype - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)viewDidLayoutSubviews;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)setFlowLayout:(HUWallpaperPhotoCollectionFlowLayout *)arg1 ;
-(void)setAssetsFetchResult:(PHFetchResult *)arg1 ;
-(void)setImageManager:(PHCachingImageManager *)arg1 ;
-(PHFetchResult *)assetsFetchResult;
-(id)initWithTitle:(id)arg1 fetchResult:(id)arg2 assetCollectionSubtype:(long long)arg3 delegate:(id)arg4 ;
-(HUWallpaperPhotoCollectionFlowLayout *)flowLayout;
-(long long)assetCollectionSubtype;
-(void)photoLibraryDidChange:(id)arg1 ;
-(id<HUWallpaperPhotoCollectionViewControllerDelegate>)delegate;
-(PHCachingImageManager *)imageManager;
-(NAFuture *)imageDownloadFuture;
-(BOOL)initialScrollToBottom;
-(void)setInitialScrollToBottom:(BOOL)arg1 ;
-(id)imageFutureForAsset:(id)arg1 cloudAllowed:(BOOL)arg2 ;
-(void)setImageDownloadFuture:(NAFuture *)arg1 ;
@end

