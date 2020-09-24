/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TVAppTemplateImpressionable.h>

@class NSArray;

@interface VideosUI.EpicInlineViewController : UIViewController <TVAppTemplateImpressionable> {

	 collectionImpressioner;
	 viewElement;
	 shelfViewModel;
	 horizontalCollectionViewModel;
	 lastViewWidth;
	 shelfViewController;
	 horizontalStackViewController;
	 scrollViewMonitor;

}

@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(NSArray *)preferredFocusEnvironments;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
@end
