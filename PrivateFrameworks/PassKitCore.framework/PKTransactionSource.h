/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPeerPaymentAccount, PKPaymentPass, NSSet;

@interface PKTransactionSource : NSObject <NSSecureCoding> {

	unsigned long long _type;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PKPaymentPass* _paymentPass;

}

@property (nonatomic,readonly) unsigned long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSSet * transactionSourceIdentifiers; 
@property (nonatomic,readonly) PKPeerPaymentAccount * peerPaymentAccount;              //@synthesize peerPaymentAccount=_peerPaymentAccount - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass;                            //@synthesize paymentPass=_paymentPass - In the implementation block
+(BOOL)supportsSecureCoding;
-(PKPeerPaymentAccount *)peerPaymentAccount;
-(PKPaymentPass *)paymentPass;
-(unsigned long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithPaymentPass:(id)arg1 ;
-(id)initWithPeerPaymentAccount:(id)arg1 ;
-(NSSet *)transactionSourceIdentifiers;
-(id)description;
@end

