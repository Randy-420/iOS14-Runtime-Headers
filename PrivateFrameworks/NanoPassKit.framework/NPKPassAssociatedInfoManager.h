/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, PKPaymentService, NSHashTable, NSSet, NSString;

@interface NPKPassAssociatedInfoManager : NSObject <PKPaymentServiceDelegate> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableDictionary* _passAssociatedInfoModelsByPassUniqueID;
	int _pendingAddValueUpdatedNotifyToken;
	BOOL _paymentServiceWasInterrupted;
	PKPaymentService* _paymentService;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) PKPaymentService * paymentService;              //@synthesize paymentService=_paymentService - In the implementation block
@property (assign,nonatomic) BOOL paymentServiceWasInterrupted;                //@synthesize paymentServiceWasInterrupted=_paymentServiceWasInterrupted - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                          //@synthesize observers=_observers - In the implementation block
@property (copy) NSSet * passes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)setPasses:(NSSet *)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(NSSet *)passes;
-(id)init;
-(PKPaymentService *)paymentService;
-(void)_notifyObservers:(/*^block*/id)arg1 ;
-(void)paymentServiceEstablishedConnection;
-(void)paymentServiceReceivedInterruption;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)removePassWithUniqueID:(id)arg1 ;
-(id)initWithPaymentService:(id)arg1 ;
-(void)_updateAllPassesItemsFieldsPendingUpdateStatus;
-(id)_transitPassBalanceModelWithPass:(id)arg1 currentModel:(id)arg2 ;
-(void)_loadPassContentIfNeeded:(id)arg1 ;
-(void)_fetchMostRecentInfoForPass:(id)arg1 ;
-(void)_notifyObserversOfUpdatedTransitPassInfoForModel:(id)arg1 ;
-(void)_updatePassTransitPassesInfoManagerForPassUniqueID:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(void)_fetchMostRecentTransitPropertiesAndAppletStateForPass:(id)arg1 ;
-(void)refreshAllPasses;
-(void)_fetchMostRecentBalancesForPass:(id)arg1 ;
-(void)addPass:(id)arg1 ;
-(void)setPendingAmount:(id)arg1 forBalanceField:(id)arg2 passWithUniqueID:(id)arg3 ;
-(id)passInfoForPassWithUniqueID:(id)arg1 ;
-(BOOL)paymentServiceWasInterrupted;
-(void)setPaymentServiceWasInterrupted:(BOOL)arg1 ;
@end
