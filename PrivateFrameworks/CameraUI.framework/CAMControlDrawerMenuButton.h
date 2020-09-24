/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMControlDrawerButton.h>
#import <libobjc.A.dylib/CAMControlDrawerExpandableButton.h>

@protocol CAMControlDrawerMenuButtonDelegate;
@class UIImageView, NSMutableArray, NSArray, UIView;

@interface CAMControlDrawerMenuButton : CAMControlDrawerButton <CAMControlDrawerExpandableButton> {

	BOOL _expanded;
	BOOL __needsLoadMenuItems;
	BOOL __trackingExpansionToggle;
	BOOL __touchInTrackedView;
	id<CAMControlDrawerMenuButtonDelegate> _delegate;
	UIImageView* __accessoryBackgroundView;
	NSMutableArray* __itemLabels;
	NSArray* __cachedMenuItems;
	unsigned long long __trackedItemIndex;
	UIView* __highlightedView;
	UIEdgeInsets _expansionInsets;

}

@property (nonatomic,readonly) UIImageView * _accessoryBackgroundView;                                                                         //@synthesize _accessoryBackgroundView=__accessoryBackgroundView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _itemLabels;                                                                                   //@synthesize _itemLabels=__itemLabels - In the implementation block
@property (setter=_setCachedMenuItems:,nonatomic,retain) NSArray * _cachedMenuItems;                                                           //@synthesize _cachedMenuItems=__cachedMenuItems - In the implementation block
@property (assign,setter=_setNeedsLoadMenuItems:,nonatomic) BOOL _needsLoadMenuItems;                                                          //@synthesize _needsLoadMenuItems=__needsLoadMenuItems - In the implementation block
@property (assign,setter=_setTrackedItemIndex:,nonatomic) unsigned long long _trackedItemIndex;                                                //@synthesize _trackedItemIndex=__trackedItemIndex - In the implementation block
@property (assign,setter=_setTrackingExpansionToggle:,getter=_isTrackingExpansionToggle,nonatomic) BOOL _trackingExpansionToggle;              //@synthesize _trackingExpansionToggle=__trackingExpansionToggle - In the implementation block
@property (assign,setter=_setTouchInTrackedView:,getter=_isTouchInTrackedView,nonatomic) BOOL _touchInTrackedView;                             //@synthesize _touchInTrackedView=__touchInTrackedView - In the implementation block
@property (setter=_setHighlightedView:,nonatomic,retain) UIView * _highlightedView;                                                            //@synthesize _highlightedView=__highlightedView - In the implementation block
@property (assign,nonatomic,__weak) id<CAMControlDrawerMenuButtonDelegate> delegate;                                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets expansionInsets;                                                                                     //@synthesize expansionInsets=_expansionInsets - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                                                  //@synthesize expanded=_expanded - In the implementation block
+(id)_backgroundImage;
-(BOOL)isExpandable;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(id)hudItemForAccessibilityHUDManager:(id)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(void)_updateLabels;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isExpanded;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<CAMControlDrawerMenuButtonDelegate>)arg1 ;
-(void)selectedByAccessibilityHUDManager:(id)arg1 ;
-(id<CAMControlDrawerMenuButtonDelegate>)delegate;
-(UIView *)_highlightedView;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setExpansionInsets:(UIEdgeInsets)arg1 ;
-(UIImageView *)_accessoryBackgroundView;
-(BOOL)shouldScaleImageWhileHighlighted;
-(void)didChangeContentSize;
-(UIEdgeInsets)expansionInsets;
-(BOOL)_shouldTrackView:(id)arg1 forTouchAtLocation:(CGPoint)arg2 ;
-(void)_setTouchInTrackedView:(BOOL)arg1 ;
-(void)_updateHighlightedView;
-(BOOL)_isTouchInTrackedView;
-(void)_setExpanded:(BOOL)arg1 animated:(BOOL)arg2 shouldNotify:(BOOL)arg3 ;
-(void)_updateSubviewAlphas;
-(void)updateLabelsIfNeeded;
-(NSMutableArray *)_itemLabels;
-(unsigned long long)_indexOfItemToTrackForTouchAtLocation:(CGPoint)arg1 ;
-(void)_setTrackedItemIndex:(unsigned long long)arg1 ;
-(void)_setTrackingExpansionToggle:(BOOL)arg1 ;
-(BOOL)_isTrackingExpansionToggle;
-(unsigned long long)_trackedItemIndex;
-(NSArray *)_cachedMenuItems;
-(void)didSelectMenuItem:(id)arg1 ;
-(id)hudItemForMenuHeader;
-(id)hudItemForMenuItem:(id)arg1 ;
-(void)_setHighlightedView:(id)arg1 ;
-(void)_loadMenuItemsIfNeeded;
-(BOOL)isMenuItemSelected:(id)arg1 ;
-(BOOL)_needsLoadMenuItems;
-(id)loadMenuItems;
-(void)_setCachedMenuItems:(id)arg1 ;
-(void)_setNeedsLoadMenuItems:(BOOL)arg1 ;
-(void)setNeedsLoadMenuItems;
@end
