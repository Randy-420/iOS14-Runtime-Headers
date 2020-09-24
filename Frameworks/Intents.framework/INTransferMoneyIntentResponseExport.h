/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INPaymentAccount, INPaymentAmount, INDateComponentsRange, NSString, INCurrencyAmount;


@protocol INTransferMoneyIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INPaymentAccount * fromAccount; 
@property (nonatomic,copy) INPaymentAccount * toAccount; 
@property (nonatomic,copy) INPaymentAmount * transactionAmount; 
@property (nonatomic,copy) INDateComponentsRange * transactionScheduledDate; 
@property (nonatomic,copy) NSString * transactionNote; 
@property (nonatomic,copy) INCurrencyAmount * transferFee; 
@required
-(long long)code;
-(INCurrencyAmount *)transferFee;
-(void)setTransferFee:(id)arg1;
-(INPaymentAccount *)toAccount;
-(INPaymentAccount *)fromAccount;
-(void)setFromAccount:(id)arg1;
-(void)setToAccount:(id)arg1;
-(INPaymentAmount *)transactionAmount;
-(void)setTransactionAmount:(id)arg1;
-(INDateComponentsRange *)transactionScheduledDate;
-(void)setTransactionScheduledDate:(id)arg1;
-(NSString *)transactionNote;
-(void)setTransactionNote:(id)arg1;

@end
