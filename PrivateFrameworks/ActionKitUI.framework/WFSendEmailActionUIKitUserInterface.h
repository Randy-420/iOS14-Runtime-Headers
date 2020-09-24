/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/WFSendEmailActionUserInterface.h>

@class NSString;

@interface WFSendEmailActionUIKitUserInterface : WFActionUserInterface <MFMailComposeViewControllerDelegate, WFSendEmailActionUserInterface> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithError:(id)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithEmailContent:(id)arg1 preferredSendingEmailAddress:(id)arg2 isManaged:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
@end
