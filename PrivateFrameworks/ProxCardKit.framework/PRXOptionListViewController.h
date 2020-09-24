/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <ProxCardKit/PRXCardContentViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class NSArray, UICollectionView, NSString;

@interface PRXOptionListViewController : PRXCardContentViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	NSArray* _options;
	/*^block*/id _formatterBlock;
	/*^block*/id _selectionHandler;
	UICollectionView* _collectionView;

}

@property (nonatomic,copy) NSArray * options;                                  //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id formatterBlock;                                  //@synthesize formatterBlock=_formatterBlock - In the implementation block
@property (nonatomic,copy) NSArray * selectedOptions; 
@property (nonatomic,copy) id selectionHandler;                                //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewLayoutMarginsDidChange;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)initWithContentView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(UICollectionView *)collectionView;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setOptions:(NSArray *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSArray *)options;
-(void)viewDidLoad;
-(id)selectionHandler;
-(void)setSelectionHandler:(id)arg1 ;
-(id)formatterBlock;
-(void)setSelectedOptions:(NSArray *)arg1 ;
-(NSArray *)selectedOptions;
-(void)_createCollectionViewLayout;
-(void)setFormatterBlock:(id)arg1 ;
@end
