/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKPeerPaymentServiceRegistrationResponse : PKPeerPaymentWebServiceResponse {

	NSString* _deviceIdentifier;
	NSString* _peerPaymentServicesPushTopic;
	NSURL* _peerPaymentServiceURL;

}

@property (nonatomic,copy,readonly) NSString * deviceIdentifier;                          //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * peerPaymentServicesPushTopic;              //@synthesize peerPaymentServicesPushTopic=_peerPaymentServicesPushTopic - In the implementation block
@property (nonatomic,copy,readonly) NSURL * peerPaymentServiceURL;                        //@synthesize peerPaymentServiceURL=_peerPaymentServiceURL - In the implementation block
-(NSString *)deviceIdentifier;
-(NSURL *)peerPaymentServiceURL;
-(id)initWithData:(id)arg1 ;
-(NSString *)peerPaymentServicesPushTopic;
@end

