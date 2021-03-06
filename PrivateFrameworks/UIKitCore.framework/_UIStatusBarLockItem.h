/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarItem.h>
#import <UIKitCore/_UIBasicAnimationFactory.h>

@class _UIStatusBarLockView, _UIExpandingGlyphsView, NSTimer, NSString;

@interface _UIStatusBarLockItem : _UIStatusBarItem <_UIBasicAnimationFactory> {

	BOOL _showsLock;
	_UIStatusBarLockView* _lockView;
	_UIExpandingGlyphsView* _stringView;
	NSTimer* _lockDisappearanceTimer;
	long long _unlockFailureCount;

}

@property (nonatomic,retain) _UIStatusBarLockView * lockView;                  //@synthesize lockView=_lockView - In the implementation block
@property (nonatomic,retain) _UIExpandingGlyphsView * stringView;              //@synthesize stringView=_stringView - In the implementation block
@property (nonatomic,retain) NSTimer * lockDisappearanceTimer;                 //@synthesize lockDisappearanceTimer=_lockDisappearanceTimer - In the implementation block
@property (assign,nonatomic) BOOL showsLock;                                   //@synthesize showsLock=_showsLock - In the implementation block
@property (assign,nonatomic) long long unlockFailureCount;                     //@synthesize unlockFailureCount=_unlockFailureCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textDisplayIdentifier;
-(void)setLockView:(_UIStatusBarLockView *)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)_create_lockView;
-(_UIStatusBarLockView *)lockView;
-(void)setShowsLock:(BOOL)arg1 ;
-(BOOL)showsLock;
-(id)viewForIdentifier:(id)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(void)setUnlockFailureCount:(long long)arg1 ;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(void)setStringView:(_UIExpandingGlyphsView *)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(NSTimer *)lockDisappearanceTimer;
-(id)dependentEntryKeys;
-(void)_create_stringView;
-(void)setLockDisappearanceTimer:(NSTimer *)arg1 ;
-(_UIExpandingGlyphsView *)stringView;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(long long)unlockFailureCount;
@end

