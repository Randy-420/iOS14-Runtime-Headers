/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLAuthenticationChallengeSender <NSObject>
@optional
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;

@required
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
-(void)cancelAuthenticationChallenge:(id)arg1;

@end
