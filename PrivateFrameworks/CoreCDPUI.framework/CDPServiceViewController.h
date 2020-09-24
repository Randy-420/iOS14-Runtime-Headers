/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CDPServiceInterface.h>

@class UIViewController;

@interface CDPServiceViewController : UIViewController <CDPServiceInterface> {

	BOOL _inlineMode;
	UIViewController* _contentViewController;

}
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(void)offsetForCurrentKeyboard:(/*^block*/id)arg1 ;
@end
