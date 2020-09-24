/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class CNContact, PKPaymentOptionsSynchronization, CRRecentContactsLibrary;

@interface PKPaymentOptionsRecents : NSObject {

	CNContact* _cachedMeContact;
	id<NSObject> _meContactDidChangeNotificationObserver;
	PKPaymentOptionsSynchronization* _optionsSynchronization;
	BOOL _meCardCachingEnabled;
	CRRecentContactsLibrary* _recentContactsLibrary;

}

@property (nonatomic,readonly) CNContact * meCard; 
@property (assign,getter=isMeCardCachingEnabled,nonatomic) BOOL meCardCachingEnabled;              //@synthesize meCardCachingEnabled=_meCardCachingEnabled - In the implementation block
@property (nonatomic,retain) CRRecentContactsLibrary * recentContactsLibrary;                      //@synthesize recentContactsLibrary=_recentContactsLibrary - In the implementation block
+(id)_coreRecentsKindForPreference:(id)arg1 ;
+(id)defaultInstance;
-(void)deleteRecent:(id)arg1 ;
-(id)recentsForPreference:(id)arg1 ;
-(id)meCardEntriesForPreference:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isMeCardCachingEnabled;
-(id)postalAddressMetadataForContact:(id)arg1 ;
-(id)contactMetadataForContact:(id)arg1 preference:(id)arg2 ;
-(void)_addContactToKeychain:(id)arg1 forPreference:(id)arg2 ;
-(void)recentsForPreference:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_contactFromRecent:(id)arg1 preference:(id)arg2 ;
-(void)_coreRecentsContactsForPreference:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_contactsFromKeychainForPreference:(id)arg1 ;
-(void)_deleteRecentContactsFromKeychainForPreference:(id)arg1 ;
-(void)_deleteRecentContactFromKeychain:(id)arg1 forPreference:(id)arg2 ;
-(id)_defaultCRSearchQuery;
-(id)_correctCountryCodeIfNecessaryForPostalAddress:(id)arg1 ;
-(id)_postalAddressLabeledValueFromRecent:(id)arg1 ;
-(void)meCardEntriesForPreference:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setKeychainData:(id)arg1 forKey:(id)arg2 ;
-(void)_deleteRecentContactsFromKeychainForContactKey:(id)arg1 ;
-(id)_labelsToPropertiesDictionaryForContact:(id)arg1 ;
-(id)saveContactToCoreRecents:(id)arg1 preference:(id)arg2 ;
-(id)_keychainDataForKey:(id)arg1 ;
-(void)_updateRecentsWithContactsFromContactInformation:(id)arg1 currentKeychainContacts:(id)arg2 forContactKey:(id)arg3 ;
-(id)_keychainKeyFromContactKey:(id)arg1 ;
-(void)deleteRecentsForPreference:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteAllRecentsWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMeCardCachingEnabled:(BOOL)arg1 ;
-(CRRecentContactsLibrary *)recentContactsLibrary;
-(void)setRecentContactsLibrary:(CRRecentContactsLibrary *)arg1 ;
-(CNContact *)meCard;
-(void)updateRecentsAndKeychainWithContactInformation:(id)arg1 ;
@end
