/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentTransactionDetailAmountLineItem.h>

@class NSString;

@interface PKInstallmentPlanDetailLineItem : NSObject <PKPaymentTransactionDetailAmountLineItem> {

	NSString* _label;
	NSString* _value;
	BOOL _hasTrailingLineSeperator;

}

@property (assign,nonatomic) BOOL hasTrailingLineSeperator;                  //@synthesize hasTrailingLineSeperator=_hasTrailingLineSeperator - In the implementation block
@property (nonatomic,readonly) unsigned long long lineItemType; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) BOOL isEmphasized; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEmphasized;
-(NSString *)value;
-(BOOL)hasTrailingLineSeperator;
-(void)setHasTrailingLineSeperator:(BOOL)arg1 ;
-(NSString *)label;
-(unsigned long long)lineItemType;
-(id)initWithLineItem:(id)arg1 currencyCode:(id)arg2 ;
@end
