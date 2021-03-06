/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CNContainer, CNContactStore, ACAccountStore, CNCache, NSObject;

@interface CNContainerCache : NSObject {

	CNContainer* _primaryiCloudContainer;
	CNContactStore* _contactStore;
	ACAccountStore* _accountStore;
	CNCache* _cachedAccounts;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) CNContainer * primaryiCloudContainer;                //@synthesize primaryiCloudContainer=_primaryiCloudContainer - In the implementation block
@property (assign,nonatomic,__weak) CNContactStore * contactStore;                //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                       //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) CNCache * cachedAccounts;                            //@synthesize cachedAccounts=_cachedAccounts - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
+(id)os_log;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)dealloc;
-(ACAccountStore *)accountStore;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)resetAccountCache;
-(id)initWithContactStore:(id)arg1 ;
-(void)accountStoreDidChange;
-(void)contactStoreDidChange;
-(void)resetPrimaryiCloudContainer;
-(id)accountForContainer:(id)arg1 ;
-(id)onWorkQueue_findPrimaryiCloudContainer;
-(id)cnAccountForContainer:(id)arg1 ;
-(void)setPrimaryiCloudContainer:(CNContainer *)arg1 ;
-(CNContactStore *)contactStore;
-(CNContainer *)primaryiCloudContainer;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setCachedAccounts:(CNCache *)arg1 ;
-(CNCache *)cachedAccounts;
@end

