/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EMVIPManagerInterface.h>

@class NSMapTable, NSSet, EDVIPManager, NSString;

@interface EDVIPManagerProxy : NSObject <EMVIPManagerInterface> {

	os_unfair_lock_s _observersLock;
	NSMapTable* _observersByIdentifier;
	NSSet* allVIPWaitForResult;
	EDVIPManager* _vipManager;

}

@property (nonatomic,readonly) EDVIPManager * vipManager;                     //@synthesize vipManager=_vipManager - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allVIPWaitForResult; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EDVIPManager *)vipManager;
-(void)saveVIPs:(id)arg1 ;
-(void)removeVIPsWithEmailAddresses:(id)arg1 ;
-(void)dealloc;
-(void)cancelObservation:(id)arg1 ;
-(void)registerObserver:(id)arg1 observationIdentifier:(id)arg2 ;
-(void)removeVIPsWithIdentifiers:(id)arg1 ;
-(NSSet *)allVIPWaitForResult;
-(void)_vipsDidChange:(id)arg1 ;
-(id)initWithVIPManager:(id)arg1 ;
@end

