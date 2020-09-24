/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUIInternal/SpotlightUIInternal-Structs.h>
#import <UIKitCore/UINavigationBar.h>

@class SearchUISeparatorView;

@interface SPUINavigationBar : UINavigationBar {

	SearchUISeparatorView* _topDividerView;

}

@property (retain) SearchUISeparatorView * topDividerView;              //@synthesize topDividerView=_topDividerView - In the implementation block
+(BOOL)_supportsCanvasView;
-(BOOL)isLocked;
-(void)setTopDividerView:(SearchUISeparatorView *)arg1 ;
-(void)performShowSeparator:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_popNavigationItemWithTransition:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)pushNavigationItem:(id)arg1 ;
-(void)showSeparator:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(SearchUISeparatorView *)topDividerView;
-(void)didAddSubview:(id)arg1 ;
-(void)didMoveToWindow;
-(void)updateBackgroundViewVisibility;
@end
