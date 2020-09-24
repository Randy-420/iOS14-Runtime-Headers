/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPSSessionProxyDelegate.h>

@class CPSSessionProxy, NSString;

@interface CPSClipRequest : NSObject <CPSSessionProxyDelegate> {

	CPSSessionProxy* _sessionProxy;
	/*^block*/id _completionHandler;
	BOOL _shouldOpenClipWhenMetadataIsUpdated;
	BOOL _shouldReturnErrorOnUserCancellation;

}

@property (assign,nonatomic) BOOL shouldReturnErrorOnUserCancellation;              //@synthesize shouldReturnErrorOnUserCancellation=_shouldReturnErrorOnUserCancellation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)getUserNotificationConsentForBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)confirmLocationWithURL:(id)arg1 inRegion:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)deleteClipsWithBundleIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)getLocationConfirmationConsentForBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancel;
-(id)initWithURL:(id)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 fallbackClipBundleID:(id)arg2 ;
-(id)sessionProxy;
-(void)requestClipWithCompletion:(/*^block*/id)arg1 ;
-(void)setShouldReturnErrorOnUserCancellation:(BOOL)arg1 ;
-(void)proxy:(id)arg1 didDetermineAvailability:(BOOL)arg2 ;
-(void)proxyDidUpdateMetadata:(id)arg1 ;
-(void)proxy:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)proxyAppDidLaunchForTesting:(id)arg1 ;
-(void)proxyRemoteServiceDidCrash:(id)arg1 ;
-(BOOL)shouldReturnErrorOnUserCancellation;
-(id)_errorIgnoringUserCancelledErrorIfNeeded:(id)arg1 ;
-(void)_openClipWithInvocationUI;
-(void)installClipWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
