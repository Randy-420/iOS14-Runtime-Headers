/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class CNContactStore, NSData, NSDictionary, NSMutableDictionary, CNContact, NSArray;

@interface IMContactStore : NSObject {

	BOOL _batchFetchingForLaunchCompleted;
	CNContactStore* _contactStore;
	NSData* _changeHistoryToken;
	NSDictionary* _handleIDToCNIDMap;
	NSMutableDictionary* _CNIDToHandleIDsMap;
	NSMutableDictionary* _IDToCNContactMap;
	double _lastContactStoreSync;
	double _lastMeContactStoreSync;
	CNContact* _meContact;
	NSArray* _CNIDsForBatchFetch;

}

@property (nonatomic,retain) CNContactStore * contactStore;                         //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSData * changeHistoryToken;                           //@synthesize changeHistoryToken=_changeHistoryToken - In the implementation block
@property (nonatomic,retain) NSDictionary * handleIDToCNIDMap;                      //@synthesize handleIDToCNIDMap=_handleIDToCNIDMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * CNIDToHandleIDsMap;              //@synthesize CNIDToHandleIDsMap=_CNIDToHandleIDsMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * IDToCNContactMap;                //@synthesize IDToCNContactMap=_IDToCNContactMap - In the implementation block
@property (assign,nonatomic) BOOL batchFetchingForLaunchCompleted;                  //@synthesize batchFetchingForLaunchCompleted=_batchFetchingForLaunchCompleted - In the implementation block
@property (assign,nonatomic) double lastContactStoreSync;                           //@synthesize lastContactStoreSync=_lastContactStoreSync - In the implementation block
@property (assign,nonatomic) double lastMeContactStoreSync;                         //@synthesize lastMeContactStoreSync=_lastMeContactStoreSync - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                                 //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,retain) NSArray * CNIDsForBatchFetch;                          //@synthesize CNIDsForBatchFetch=_CNIDsForBatchFetch - In the implementation block
+(id)sharedInstance;
+(id)kIMCNContactPhoneNumbersKey;
+(id)keysForMeContact;
+(Class)IMCNLabeledValueClass;
+(id)createMutableContactWithID:(id)arg1 ;
+(Class)IMCNChangeHistoryFetchRequestClass;
+(Class)IMCNMeCardSharingPickerViewControllerClass;
+(id)keysForNicknameHandling;
+(id)phoneticFullNameForCNContact:(id)arg1 ;
+(id)kIMCNContactIdentifierKey;
+(id)keysForCNContact;
+(Class)IMCNMutableContactClass;
+(Class)IMCNContactFetchRequestClass;
+(id)displayNameWithCNNickNameOrFullNameOrCompanyNameOrAbbreviatedForContact:(id)arg1 ;
+(BOOL)shouldShowAbbreviatedNames;
+(id)nickNameForCNContact:(id)arg1 ;
+(id)_stringFromContact:(id)arg1 withStyle:(long long)arg2 ;
+(id)displayNameForContact:(id)arg1 ;
+(id)createMutableContactWithMapURL:(id)arg1 andLocalizedLocationString:(id)arg2 ;
+(id)phoneticFirstNameForCNContact:(id)arg1 ;
+(Class)IMCNPhoneNumberClass;
+(id)kIMCNContactCropRectKey;
+(id)IDsFromCNContact:(id)arg1 ;
+(Class)IMCNContactFormatterClass;
+(BOOL)isCNContactAKnownContact:(id)arg1 ;
+(id)dialingForCurrentLocale;
+(id)abbreviatedNameForCNContact:(id)arg1 ;
+(id)kIMCNContactEmailAddressesKey;
+(id)kIMCNContactLinkIdentifierKey;
+(id)kIMCNContactImageDataAvailableKey;
+(id)phoneticLastNameForCNContact:(id)arg1 ;
+(Class)IMCNGeminiManagerClass;
+(id)validateAndFilterIDsForContactsBatchFetch:(id)arg1 ;
+(id)descriptionForCNContact:(id)arg1 ;
+(id)kIMCNContactThumbnailImageDataKey;
+(id)kIMCNContactImageDataKey;
+(id)firstNameForCNContact:(id)arg1 ;
+(id)companyNameForCNContact:(id)arg1 ;
+(id)predicateForID:(id)arg1 ;
+(id)lastNameForCNContact:(id)arg1 ;
+(id)phoneNumbersForCNContact:(id)arg1 ;
+(id)displayNameWithPhoneNumberOrEmailForContact:(id)arg1 ;
+(id)emailsForCNContact:(id)arg1 ;
+(BOOL)shouldShowNickNames;
+(id)dialingCodeForID:(id)arg1 ;
+(id)validateAndCleanupID:(id)arg1 ;
+(id)fullNameForCNContact:(id)arg1 ;
+(id)mePredicate;
-(CNContact *)meContact;
-(void)setMeContact:(CNContact *)arg1 ;
-(void)setCNIDToHandleIDsMap:(NSMutableDictionary *)arg1 ;
-(void)fetchCNContactsForHandlesWithIDs:(id)arg1 isFinalBatch:(BOOL)arg2 ;
-(void)addEntriesToIDToCNContactMap:(id)arg1 ;
-(void)logHandleID:(id)arg1 ;
-(void)cacheBatchFetchResults:(id)arg1 handleIDsWithoutCNID:(id)arg2 ;
-(void)setHandleIDToCNIDMap:(NSDictionary *)arg1 ;
-(void)replaceContact:(id)arg1 withID:(id)arg2 ;
-(void)removeContactWithID:(id)arg1 ;
-(id)completedContact:(id)arg1 withKeys:(id)arg2 ;
-(BOOL)isBatchFetchingForLaunchCompleted;
-(void)logContactFetchRequestResults:(id)arg1 ;
-(void)replaceWithMutableContactForID:(id)arg1 ;
-(id)fetchMeContactWithKeys:(id)arg1 ;
-(void)dealloc;
-(id)getIDToCNContactMap;
-(id)getCurrentHistoryToken;
-(NSDictionary *)handleIDToCNIDMap;
-(void)setBatchFetchingForLaunchCompleted:(BOOL)arg1 ;
-(void)setBatchFetchingCompleted;
-(id)initWithContactStore:(id)arg1 ;
-(CNContactStore *)contactStore;
-(void)logDictionary:(id)arg1 ;
-(void)logCNContact:(id)arg1 ;
-(void)setIDToCNContactMap:(NSMutableDictionary *)arg1 ;
-(void)logDictionary:(id)arg1 inBatchesOfSize:(long long)arg2 ;
-(void)contactStoreChanged:(id)arg1 ;
-(void)checkForContactStoreChanges;
-(id)getContactForID:(id)arg1 ;
-(id)fetchCNContactForHandleID:(id)arg1 withKeys:(id)arg2 ;
-(id)init;
-(id)handleIDsForCNID:(id)arg1 ;
-(BOOL)isContactWithIDAlreadyFetched:(id)arg1 ;
-(BOOL)batchFetchingForLaunchCompleted;
-(NSData *)changeHistoryToken;
-(void)logHandleIDs:(id)arg1 ;
-(void)logCurrentHistoryToken;
-(void)logCNContact:(id)arg1 andID:(id)arg2 ;
-(void)meCardChanged:(id)arg1 ;
-(void)setLastContactStoreSync:(double)arg1 ;
-(void)handleDropEverythingEvent;
-(NSMutableDictionary *)CNIDToHandleIDsMap;
-(NSMutableDictionary *)IDToCNContactMap;
-(id)getContactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)_logArray:(id)arg1 inBatchesOfSize:(long long)arg2 ;
-(id)getHandleIDToCNIDMap;
-(NSArray *)CNIDsForBatchFetch;
-(void)addContact:(id)arg1 withID:(id)arg2 ;
-(double)lastContactStoreSync;
-(void)_logDictionaryInformation:(id)arg1 inRange:(NSRange)arg2 ;
-(double)lastMeContactStoreSync;
-(id)getCNIDToHandleIDsMap;
-(id)fetchCNContactForHandleWithID:(id)arg1 ;
-(id)fetchCNContactWithIdentifier:(id)arg1 ;
-(void)setLastMeContactStoreSync:(double)arg1 ;
-(void)setCNIDsForBatchFetch:(NSArray *)arg1 ;
-(void)resetMeCard;
-(id)getAllKeysFromIDToCNContactMap;
-(void)generateCNIDToHandleIDMap;
-(void)setChangeHistoryToken:(NSData *)arg1 ;
@end
