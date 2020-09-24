/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BNPresentableQueueDelegate.h>
#import <libobjc.A.dylib/BNPending.h>

@class NSMutableArray, NSMutableSet, BNSuspensionController, NSString, NSSet;

@interface BNPenderQueue : NSObject <BNPresentableQueueDelegate, BNPending> {

	NSMutableArray* _penderQueue;
	NSMutableSet* _suspendedPenders;
	BNSuspensionController* _suspensionController;
	NSString* _penderIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * penderIdentifier;                           //@synthesize penderIdentifier=_penderIdentifier - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,copy,readonly) NSSet * activeSuspensionReasons; 
-(BOOL)setSuspended:(BOOL)arg1 forReason:(id)arg2 ;
-(id)peekPresentable;
-(id)pullAllPresentablesWithRequesterIdentifier:(id)arg1 ;
-(void)presentableQueue:(id)arg1 didDequeuePresentableWithPendingIdentifier:(id)arg2 ;
-(NSSet *)activeSuspensionReasons;
-(id)_penderForRequesterWithIdentifier:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(BOOL)isSuspended;
-(NSString *)penderIdentifier;
-(BOOL)setPenderSuspended:(BOOL)arg1 forRequesterWithIdentifier:(id)arg2 reason:(id)arg3 ;
-(id)pullPresentablesWithRequestIdentifier:(id)arg1 andRequesterIdentifier:(id)arg2 ;
-(void)enqueuePresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)setPenderIdentifier:(NSString *)arg1 ;
@end
