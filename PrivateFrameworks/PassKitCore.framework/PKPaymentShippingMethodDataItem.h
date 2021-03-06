/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKShippingMethod;

@interface PKPaymentShippingMethodDataItem : PKPaymentDataItem

@property (nonatomic,readonly) PKShippingMethod * shippingMethod; 
+(long long)dataType;
-(PKShippingMethod *)shippingMethod;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

