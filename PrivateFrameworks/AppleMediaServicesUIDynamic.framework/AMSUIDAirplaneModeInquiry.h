/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol AMSUIDAirplaneModeInquiryDelegate;
@class RadiosPreferences;

@interface AMSUIDAirplaneModeInquiry : NSObject <RadiosPreferencesDelegate> {

	id<AMSUIDAirplaneModeInquiryDelegate> _delegate;
	RadiosPreferences* _radiosPreferences;

}

@property (nonatomic,readonly) RadiosPreferences * radiosPreferences;                            //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUIDAirplaneModeInquiryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled; 
+(id)settingsURL;
-(void)airplaneModeChanged;
-(BOOL)isEnabled;
-(id)init;
-(void)setDelegate:(id<AMSUIDAirplaneModeInquiryDelegate>)arg1 ;
-(RadiosPreferences *)radiosPreferences;
-(id<AMSUIDAirplaneModeInquiryDelegate>)delegate;
@end
