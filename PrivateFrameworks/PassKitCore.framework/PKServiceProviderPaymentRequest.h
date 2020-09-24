/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKServiceProviderOrder;

@interface PKServiceProviderPaymentRequest : PKPaymentRequest <NSSecureCoding> {

	PKServiceProviderOrder* _serviceProviderOrder;

}

@property (nonatomic,readonly) PKServiceProviderOrder * serviceProviderOrder;              //@synthesize serviceProviderOrder=_serviceProviderOrder - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)availableNetworks;
-(id)initWithServiceProviderOrder:(id)arg1 ;
-(PKServiceProviderOrder *)serviceProviderOrder;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)merchantIdentifier;
@end
