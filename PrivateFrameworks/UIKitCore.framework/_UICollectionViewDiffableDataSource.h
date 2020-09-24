/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIDiffableDataSourceSnapshotter.h>

@class UICollectionView;

@interface _UICollectionViewDiffableDataSource : _UIDiffableDataSourceSnapshotter

@property (nonatomic,copy) id supplementaryViewProvider; 
@property (nonatomic,__weak,readonly) UICollectionView * collectionView; 
@property (nonatomic,copy) id supplementaryReuseIdentifierProvider; 
@property (nonatomic,copy) id supplementaryConfigurationHandler; 
-(void)setSupplementaryReuseIdentifierProvider:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(/*^block*/id)arg2 cellConfigurationHandler:(/*^block*/id)arg3 ;
-(id)supplementaryReuseIdentifierProvider;
-(void)setSupplementaryViewProvider:(id)arg1 ;
-(id)supplementaryViewProvider;
-(UICollectionView *)collectionView;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(void)setSupplementaryConfigurationHandler:(id)arg1 ;
-(id)supplementaryConfigurationHandler;
@end
