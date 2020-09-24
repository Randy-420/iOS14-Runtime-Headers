/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol SBLockOverlayViewControllerDelegate;
@interface SBLockOverlayViewController : UIViewController {

	id<SBLockOverlayViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldBeHidden; 
-(id)overlayView;
-(void)setDelegate:(id<SBLockOverlayViewControllerDelegate>)arg1 ;
-(id<SBLockOverlayViewControllerDelegate>)delegate;
-(BOOL)shouldBeHidden;
@end
