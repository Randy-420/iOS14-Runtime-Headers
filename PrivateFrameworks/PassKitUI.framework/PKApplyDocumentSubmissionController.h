/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentDocumentSubmissionController.h>

@class PKApplyController, UIViewController, PKBusinessChatController, PKApplyDocumentUploadPage;

@interface PKApplyDocumentSubmissionController : PKPaymentDocumentSubmissionController {

	PKApplyController* _applyController;
	UIViewController* _nextViewController;
	PKBusinessChatController* _businessChatController;
	PKApplyDocumentUploadPage* _documentPage;
	BOOL _isLoading;
	BOOL _isCancelling;

}
-(void)dealloc;
-(id)nextViewController;
-(void)uploadID;
-(void)removeApplicationUpdateObserver;
-(void)_cancelledConfirmed;
-(void)contactApplePressed;
-(void)userWantsToCancel;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 documentPage:(id)arg3 ;
-(void)_featureApplicationUpdated;
@end
