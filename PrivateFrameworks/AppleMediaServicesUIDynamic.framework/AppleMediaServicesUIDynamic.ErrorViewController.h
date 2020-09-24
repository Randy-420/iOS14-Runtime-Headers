/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <libobjc.A.dylib/AMSUIDAirplaneModeInquiryDelegate.h>

@interface AppleMediaServicesUIDynamic.ErrorViewController : AMSUICommonViewController <AMSUIDAirplaneModeInquiryDelegate> {

	 automaticRetry;
	 action;
	 button;
	 errorMessage;
	 errorTitle;
	 airplaneModeInquiry;
	 cellularDataInquiry;
	 networkInquiry;
	 networkObservation;
	 $__lazy_storage_$_contentUnavailableView;

}
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)airplaneModeInquiryDidObserveChange:(id)arg1 ;
@end
