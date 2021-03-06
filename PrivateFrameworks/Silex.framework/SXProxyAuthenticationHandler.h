/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXProxyAuthenticationHandler.h>

@protocol SXProxyAuthenticationHandler <NSObject>
@required
-(void)handleAuthenticationChallenge:(id)arg1 completion:(/*^block*/id)arg2;

@end


@protocol SXProxyAuthenticationCredentialFactory;
@class NSString;

@interface SXProxyAuthenticationHandler : NSObject <SXProxyAuthenticationHandler> {

	id<SXProxyAuthenticationCredentialFactory> _credentialFactory;
	unsigned long long _retryCount;

}

@property (nonatomic,readonly) id<SXProxyAuthenticationCredentialFactory> credentialFactory;              //@synthesize credentialFactory=_credentialFactory - In the implementation block
@property (nonatomic,readonly) unsigned long long retryCount;                                             //@synthesize retryCount=_retryCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)retryCount;
-(void)handleAuthenticationChallenge:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<SXProxyAuthenticationCredentialFactory>)credentialFactory;
-(id)initWithCredentialFactory:(id)arg1 retryCount:(unsigned long long)arg2 ;
@end

