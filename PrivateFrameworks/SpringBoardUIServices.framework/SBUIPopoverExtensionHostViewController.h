/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/_SBUIPopoverExtensionHostInterface.h>

@protocol _SBUIPopoverExtensionHostDelegate;
@interface SBUIPopoverExtensionHostViewController : _UIRemoteViewController <_SBUIPopoverExtensionHostInterface> {

	id<_SBUIPopoverExtensionHostDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SBUIPopoverExtensionHostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(void)setDelegate:(id<_SBUIPopoverExtensionHostDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_extensionRequestsDismiss;
-(id<_SBUIPopoverExtensionHostDelegate>)delegate;
-(BOOL)_canShowWhileLocked;
@end
