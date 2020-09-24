/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WGWidgetDebugging.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/WGWidgetDiscoveryObserving.h>
#import <libobjc.A.dylib/WGWidgetHostingViewControllerDelegate.h>
#import <libobjc.A.dylib/WGWidgetListItemViewControllerDelegate.h>
#import <libobjc.A.dylib/WGWidgetExtensionVisibilityProviding.h>

@protocol WGWidgetListViewControllerDelegate;
@class WGWidgetDiscoveryController, MTMaterialView, NSMutableDictionary, UIScrollView, UIStackView, UIControl, NSArray, NSLayoutConstraint, NSString;

@interface WGWidgetListViewController : UIViewController <WGWidgetDebugging, UIScrollViewDelegate, WGWidgetDiscoveryObserving, WGWidgetHostingViewControllerDelegate, WGWidgetListItemViewControllerDelegate, WGWidgetExtensionVisibilityProviding> {

	WGWidgetDiscoveryController* _discoveryController;
	MTMaterialView* _captureOnlyMaterialView;
	NSMutableDictionary* _userInterfaceStylesToCaptureOnlyMaterialViews;
	UIScrollView* _scrollView;
	UIStackView* _stackView;
	NSMutableDictionary* _cancelTouchesAssertionsByWidgetID;
	NSMutableDictionary* _widgetIDsToItemVCs;
	CGSize _maxVisibleContentSize;
	BOOL _shouldBlurContent;
	BOOL _editingIcons;
	BOOL _shouldIncludeScrollView;
	id<WGWidgetListViewControllerDelegate> _delegate;
	UIControl* _editButton;
	NSArray* _previouslyVisibleWidgetIDs;
	NSLayoutConstraint* _stackViewBottomConstraint;
	NSMutableDictionary* _resizeContexts;

}

@property (assign,nonatomic,__weak) id<WGWidgetListViewControllerDelegatePrivate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_group,nonatomic,readonly) NSString * group; 
@property (setter=_setPreviouslyVisibleWidgetIDs:,getter=_previouslyVisibleWidgetIDs,nonatomic,retain) NSArray * previouslyVisibleWidgetIDs;              //@synthesize previouslyVisibleWidgetIDs=_previouslyVisibleWidgetIDs - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * stackViewBottomConstraint;                                                                            //@synthesize stackViewBottomConstraint=_stackViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resizeContexts;                                                                                        //@synthesize resizeContexts=_resizeContexts - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetListViewControllerDelegate> delegate;                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * widgetListView; 
@property (nonatomic,readonly) unsigned long long widgetCount; 
@property (assign,nonatomic) BOOL shouldBlurContent;                                                                                                      //@synthesize shouldBlurContent=_shouldBlurContent - In the implementation block
@property (nonatomic,retain) UIControl * editButton;                                                                                                      //@synthesize editButton=_editButton - In the implementation block
@property (assign,getter=isEditingIcons,nonatomic) BOOL editingIcons;                                                                                     //@synthesize editingIcons=_editingIcons - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeScrollView;                                                                                                //@synthesize shouldIncludeScrollView=_shouldIncludeScrollView - In the implementation block
-(void)setShouldBlurContent:(BOOL)arg1 ;
-(void)setEditingIcons:(BOOL)arg1 ;
-(void)updateWidgetViewState;
-(BOOL)shouldBlurContent;
-(CGRect)visibleFrameForWidget:(id)arg1 ;
-(void)registerWidgetForRefreshEvents:(id)arg1 ;
-(UIControl *)editButton;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_wrapperViewForWidgetPlatterView:(id)arg1 ;
-(unsigned long long)widgetCount;
-(id)_widgetIdentifiersForPlatterViewsVisibleInBounds;
-(void)_updateBackgroundViewForPlatter:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)setEditButton:(UIControl *)arg1 ;
-(BOOL)isWidgetExtensionVisible:(id)arg1 ;
-(BOOL)isEditingIcons;
-(void)_adjustContentOffsetToInsideContent:(BOOL)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)_updateWidgetViewStateWithPreviouslyVisibleWidgetIdentifiers:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(unsigned long long)_insertionIndexofListItem:(id)arg1 intoWidgetViews:(id)arg2 withOrderedIdentifiers:(id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)brokenViewDidAppearForWidget:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)unregisterWidgetForRefreshEvents:(id)arg1 ;
-(void)_enableTouchesOnAllWidgets;
-(UIEdgeInsets)layoutMarginForWidget:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)_pruneAlternateCaptureOnlyMaterialViews;
-(void)_invalidateAlternateCaptureOnlyMaterialViewWithUserInterfaceStyle:(long long)arg1 ;
-(CGSize)_maxVisibleContentSize;
-(/*^block*/id)_insert:(BOOL)arg1 listItem:(id)arg2 withOrderedIdentifiers:(id)arg3 animated:(BOOL)arg4 ;
-(id)initWithWidgetDiscoveryController:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dealloc;
-(void)remoteViewControllerDidDisconnectForWidget:(id)arg1 ;
-(void)_resizeCell:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setResizeContexts:(NSMutableDictionary *)arg1 ;
-(BOOL)shouldIncludeScrollView;
-(void)_didUpdateStackViewArrangedSubviews;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_scrollViewLoadingIfNecessary:(BOOL)arg1 ;
-(NSLayoutConstraint *)stackViewBottomConstraint;
-(CGRect)_visibleContentFrameForBounds:(CGRect)arg1 withContentOccludingInsets:(UIEdgeInsets)arg2 ;
-(void)resizeWidgetWrapperView:(id)arg1 toSize:(CGSize)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_invalidateAllCancelTouchesAssertions;
-(void)_invalidateAllAlternateCaptureOnlyMaterialViews;
-(UIEdgeInsets)marginInsetsForWidget:(id)arg1 ;
-(id)_animatablePropertiesForStackViewUpdate;
-(void)_configureScrollView;
-(id)visibleWidgetIdentifiers;
-(void)remoteViewControllerViewDidHideForWidget:(id)arg1 ;
-(UIScrollView *)widgetListView;
-(/*^block*/id)_beginInsertion:(BOOL)arg1 ofListItem:(id)arg2 withOrderedIdentifiers:(id)arg3 removingViewIfPossible:(BOOL)arg4 ;
-(void)widgetDiscoveryController:(id)arg1 orderDidChangeForWidgetIdentifiers:(id)arg2 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setDelegate:(id<WGWidgetListViewControllerDelegatePrivate>)arg1 ;
-(id)_platterViewForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(void)_cancelTouchesForWidget:(id)arg1 ;
-(void)_configureAlternateCaptureOnlyMaterialViewWithUserInterfaceStyle:(long long)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)widget:(id)arg1 didChangeLargestSupportedDisplayMode:(long long)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_repopulateStackViewWithWidgetIdentifiers:(id)arg1 ;
-(void)setShouldIncludeScrollView:(BOOL)arg1 ;
-(void)_invokeBlockWithPlatterViewsVisibleInRect:(CGRect)arg1 block:(/*^block*/id)arg2 ;
-(id)_identifierForCell:(id)arg1 ;
-(id)_newCaptureOnlyMaterialView;
-(void)_stackViewArrangedSubviewsTransformPresentationValueChanged;
-(void)_invokeBlock:(/*^block*/id)arg1 withPlatterViewsPassingTest:(/*^block*/id)arg2 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(NSMutableDictionary *)resizeContexts;
-(id)_scrollViewIfLoaded;
-(void)_setPreviouslyVisibleWidgetIDs:(id)arg1 ;
-(void)_presentEditViewController;
-(void)_invokeBlockWithAllPlatterViews:(/*^block*/id)arg1 ;
-(id)_platterViewAtLocation:(CGPoint)arg1 ;
-(void)_disableTouchesOnAllWidgets;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)_configureStackView;
-(id<WGWidgetListViewControllerDelegatePrivate>)delegate;
-(id)_listItemViewControllerForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(void)_cancelTouchesForHitWidgetIfNecessaryAndDisableTouchesOnAllWidgets;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)widgetListItemViewController:(id)arg1 widgetHostWithIdentifier:(id)arg2 ;
-(id)_group;
-(void)widgetDiscoveryControllerSignificantWidgetsChange:(id)arg1 ;
-(void)remoteViewControllerViewDidAppearForWidget:(id)arg1 ;
-(void)_createPropertiesForStackViewUpdate;
-(void)updatePreviouslyVisibleWidgetIDs;
-(CGSize)maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2 ;
-(id)_previouslyVisibleWidgetIDs;
-(BOOL)managingContainerIsVisibleForWidget:(id)arg1 ;
-(void)_invokeBlockWithPlatterViewsVisibleInBounds:(/*^block*/id)arg1 ;
-(void)_scrollViewDidStop;
-(void)_configureCaptureOnlyMaterialView;
-(void)_repopulateStackView;
@end
