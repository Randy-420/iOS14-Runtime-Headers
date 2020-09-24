/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/APWebProcessDelegate.h>

@interface PromotedContentUI.ExpandViewController : UIViewController <APWebProcessDelegate> {

	 webView;
	 closeButton;
	 maximumExpandedSize;
	??? expandedDestinationURL;
	 tapGestureRecognizer;
	 webProcessDelegate;
	 actionDelegate;
	 $__lazy_storage_$_closeButtonPadding;

}
-(void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
-(void)webProcessMRAIDJSODidCallClose;
-(void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumWidth:(double)arg2 andHeight:(double)arg3 ;
-(void)webProcessMRAIDJSODidCallOpen:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)dealloc;
-(void)tapRecognized:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)closeButtonTappedWithSender:(id)arg1 ;
@end
