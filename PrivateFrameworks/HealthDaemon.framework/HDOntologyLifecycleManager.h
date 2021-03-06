/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDHealthOntologyManagerObserver.h>
#import <libobjc.A.dylib/HDHealthRecordsAccountEventObserver.h>

@protocol HDOntologyTester;
@class HDProfile, HDOntologyAssetManager, HDHealthOntologyManager, HDConceptIndexManager, HDHealthRecordsNotificationManager, HDHealthOntologyConfiguration, NSSet, NSString;

@interface HDOntologyLifecycleManager : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDHealthOntologyManagerObserver, HDHealthRecordsAccountEventObserver> {

	os_unfair_lock_s _ivarLock;
	BOOL _ready;
	HDProfile* _profile;
	HDOntologyAssetManager* _assetManager;
	HDHealthOntologyManager* _ontologyManager;
	HDConceptIndexManager* _indexManager;
	HDHealthRecordsNotificationManager* _notificationManager;
	HDHealthOntologyConfiguration* _ontologyConfiguration;
	id<HDOntologyTester> _ontologyTester;
	HDHealthOntologyConfiguration* _unitTesting_ontologyConfigurationOverride;

}

@property (nonatomic,retain) HDOntologyAssetManager * assetManager;                                                  //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) HDHealthOntologyManager * ontologyManager;                                              //@synthesize ontologyManager=_ontologyManager - In the implementation block
@property (nonatomic,copy) HDHealthOntologyConfiguration * ontologyConfiguration;                                    //@synthesize ontologyConfiguration=_ontologyConfiguration - In the implementation block
@property (assign,getter=isReady,nonatomic) BOOL ready;                                                              //@synthesize ready=_ready - In the implementation block
@property (assign,nonatomic,__weak) id<HDOntologyTester> ontologyTester;                                             //@synthesize ontologyTester=_ontologyTester - In the implementation block
@property (nonatomic,retain) HDHealthOntologyConfiguration * unitTesting_ontologyConfigurationOverride;              //@synthesize unitTesting_ontologyConfigurationOverride=_unitTesting_ontologyConfigurationOverride - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                                           //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDConceptIndexManager * indexManager;                                                 //@synthesize indexManager=_indexManager - In the implementation block
@property (nonatomic,readonly) HDHealthRecordsNotificationManager * notificationManager;                             //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allSupportedCountryCodes; 
@property (nonatomic,copy,readonly) NSSet * improveHealthRecordsGatedAnalyticsEnabledCountryCodes; 
@property (nonatomic,copy,readonly) NSSet * optInDataCollectionEnabledCountryCodes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)invalidateAndWait;
-(HDHealthOntologyConfiguration *)ontologyConfiguration;
-(HDHealthRecordsNotificationManager *)notificationManager;
-(void)daemonReady:(id)arg1 ;
-(BOOL)isCountrySupported:(id)arg1 ;
-(void)profileExtension:(id)arg1 accountEventOccurred:(unsigned long long)arg2 ;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)isReady;
-(BOOL)isCountryCodeSupported:(id)arg1 ;
-(void)ontologyManagerReferenceOntologyFinishedUpdate:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(NSSet *)allSupportedCountryCodes;
-(void)setOntologyConfiguration:(HDHealthOntologyConfiguration *)arg1 ;
-(HDConceptIndexManager *)indexManager;
-(void)_disableAllManagers;
-(HDProfile *)profile;
-(void)obliterateWithReason:(id)arg1 ;
-(void)dealloc;
-(void)setAssetManager:(HDOntologyAssetManager *)arg1 ;
-(NSSet *)improveHealthRecordsGatedAnalyticsEnabledCountryCodes;
-(void)ontologyManagerReferenceOntologyWillUpdate:(id)arg1 ;
-(void)setOntologyManager:(HDHealthOntologyManager *)arg1 ;
-(HDOntologyAssetManager *)assetManager;
-(void)setReady:(BOOL)arg1 ;
-(void)setOntologyTester:(id<HDOntologyTester>)arg1 ;
-(HDHealthOntologyConfiguration *)unitTesting_ontologyConfigurationOverride;
-(id<HDOntologyTester>)ontologyTester;
-(void)ontologyManagerReferenceOntologyCreated:(id)arg1 ;
-(void)setUnitTesting_ontologyConfigurationOverride:(HDHealthOntologyConfiguration *)arg1 ;
-(void)_evaluateManagerState;
-(NSSet *)optInDataCollectionEnabledCountryCodes;
-(void)_enableAllManagers;
-(HDHealthOntologyManager *)ontologyManager;
-(id)ontologyConfigurationForCountryCode:(id)arg1 ;
@end

