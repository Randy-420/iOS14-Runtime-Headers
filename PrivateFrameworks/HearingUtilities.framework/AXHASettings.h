/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <HearingUtilities/HearingUtilities-Structs.h>
@class ACAccountStore, NSMutableDictionary, NSMutableSet, NSObject, NSDictionary, NSString, NSArray;

@interface AXHASettings : NSObject {

	ACAccountStore* _accountStore;
	int _contentProtectionNotifyToken;
	BOOL _finishediCloudSetup;
	os_unfair_lock_s _syncLock;
	NSMutableDictionary* _soundDetectionSnoozeDictionary;
	NSMutableSet* _registeredNotifications;
	NSMutableSet* _synchronizePreferences;
	NSMutableDictionary* _updateBlocks;
	NSObject*<OS_dispatch_queue> _icloudInitializationQueue;

}

@property (nonatomic,retain) NSMutableSet * registeredNotifications;                              //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableSet * synchronizePreferences;                               //@synthesize synchronizePreferences=_synchronizePreferences - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                                  //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> icloudInitializationQueue;              //@synthesize icloudInitializationQueue=_icloudInitializationQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * pairedHearingAids; 
@property (nonatomic,retain) NSDictionary * knownPeripheralUUIDs; 
@property (assign,nonatomic) BOOL independentHearingAidSettings; 
@property (assign,nonatomic) BOOL allowHearingAidControlOnLockScreen; 
@property (assign,nonatomic) BOOL shouldStreamToLeftAid; 
@property (assign,nonatomic) BOOL shouldStreamToRightAid; 
@property (assign,nonatomic) long long callAudioRoute; 
@property (assign,nonatomic) long long mediaAudioRoute; 
@property (assign,nonatomic) BOOL multideviceSettingsEnabled; 
@property (assign,nonatomic) BOOL multideviceAudioEnabled; 
@property (assign,nonatomic) BOOL shouldStreamSystemSounds; 
@property (assign,nonatomic) long long complicationPreferredDisplayMode; 
@property (assign,nonatomic) int availableInputEars; 
@property (assign,nonatomic) int earsSupportingWatch; 
@property (assign,nonatomic) int preferredInputEar; 
@property (nonatomic,retain) NSString * availableHearingDeviceName; 
@property (assign,nonatomic) unsigned long long usedHearingFeatures; 
@property (assign,nonatomic) BOOL exportsLiveListenToFile; 
@property (assign,nonatomic) BOOL ultronSupportEnabled; 
@property (assign,nonatomic) BOOL ultronIsRunning; 
@property (assign,nonatomic) int soundDetectionState; 
@property (nonatomic,readonly) BOOL soundDetectionEnabled; 
@property (nonatomic,retain) NSArray * enabledSoundDetectionTypes; 
@property (nonatomic,retain) NSMutableDictionary * soundDetectionSnoozeDictionary;                //@synthesize soundDetectionSnoozeDictionary=_soundDetectionSnoozeDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * supportedSoundDetectionTypes; 
@property (assign,nonatomic) BOOL liveHeadphoneLevelEnabled; 
+(id)sharedInstance;
+(void)initialize;
+(id)stringForSoundDetectionState:(int)arg1 ;
-(void)_registerForNotification:(id)arg1 ;
-(void)iCloudAccountDidChange:(id)arg1 ;
-(BOOL)shouldStreamToLeftAid;
-(void)setIndependentHearingAidSettings:(BOOL)arg1 ;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(BOOL)allowHearingAidControlOnLockScreen;
-(void)setAllowHearingAidControlOnLockScreen:(BOOL)arg1 ;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(void)pushLocalHearingAidsToiCloud;
-(void)setMediaAudioRoute:(long long)arg1 ;
-(void)setShouldStreamToLeftAid:(BOOL)arg1 ;
-(id)_preferenceKeyForSelector:(SEL)arg1 ;
-(id)_notificationForPreferenceKey:(id)arg1 ;
-(NSMutableSet *)synchronizePreferences;
-(NSMutableSet *)registeredNotifications;
-(void)_synchronizeIfNecessary:(id)arg1 ;
-(void)setShouldStreamToRightAid:(BOOL)arg1 ;
-(BOOL)independentHearingAidSettings;
-(NSMutableDictionary *)updateBlocks;
-(void)setSynchronizePreferences:(NSMutableSet *)arg1 ;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(void)setRegisteredNotifications:(NSMutableSet *)arg1 ;
-(BOOL)shouldStreamToRightAid;
-(BOOL)shouldStreamSystemSounds;
-(void)setCallAudioRoute:(long long)arg1 ;
-(void)setUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(void)setUltronIsRunning:(BOOL)arg1 ;
-(void)removeDeviceIDFromCloudBlacklist:(id)arg1 ;
-(void)setUsedHearingFeatures:(unsigned long long)arg1 ;
-(void)setKnownPeripheralUUIDs:(NSDictionary *)arg1 ;
-(CFStringRef)domainNameForPreferenceKey:(id)arg1 ;
-(NSDictionary *)pairedHearingAids;
-(BOOL)liveHeadphoneLevelEnabled;
-(BOOL)multideviceSettingsEnabled;
-(void)setEarsSupportingWatch:(int)arg1 ;
-(long long)callAudioRoute;
-(void)setMultideviceSettingsEnabled:(BOOL)arg1 ;
-(void)setLocalHearingAidsFromiCloud:(id)arg1 ;
-(BOOL)isiCloudPaired;
-(BOOL)ultronSupportEnabled;
-(BOOL)shouldPushLocalAidsToiCloud;
-(void)dealloc;
-(BOOL)ultronIsRunning;
-(void)setLiveHeadphoneLevelEnabled:(BOOL)arg1 ;
-(void)setEnabledSoundDetectionTypes:(NSArray *)arg1 ;
-(NSString *)availableHearingDeviceName;
-(NSArray *)supportedSoundDetectionTypes;
-(void)removeSoundDetectionType:(id)arg1 ;
-(long long)complicationPreferredDisplayMode;
-(BOOL)exportsLiveListenToFile;
-(NSArray *)enabledSoundDetectionTypes;
-(void)setSupportedSoundDetectionTypes:(NSArray *)arg1 ;
-(void)setPreferredInputEar:(int)arg1 ;
-(void)setUltronSupportEnabled:(BOOL)arg1 ;
-(id)init;
-(void)setShouldStreamSystemSounds:(BOOL)arg1 ;
-(void)setSoundDetectionState:(int)arg1 ;
-(void)setAvailableHearingDeviceName:(NSString *)arg1 ;
-(void)icloudHearingSettingsDidChange:(id)arg1 ;
-(int)preferredInputEar;
-(BOOL)isPairedWithFakeHearingAids;
-(void)addSnoozeDateToSnoozeDictionary:(id)arg1 forKey:(id)arg2 ;
-(BOOL)multideviceAudioEnabled;
-(void)setExportsLiveListenToFile:(BOOL)arg1 ;
-(int)soundDetectionState;
-(BOOL)shouldUseiCloud;
-(NSDictionary *)knownPeripheralUUIDs;
-(void)setIcloudInitializationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)usedHearingFeatures;
-(void)setMultideviceAudioEnabled:(BOOL)arg1 ;
-(void)removeAllSoundDetectionTypes;
-(BOOL)soundDetectionEnabled;
-(id)convertPersistentRepresentation:(id)arg1 fromVersion:(float)arg2 toVersion:(float)arg3 ;
-(void)addDeviceIDToCloudBlacklist:(id)arg1 ;
-(long long)mediaAudioRoute;
-(void)setAvailableInputEars:(int)arg1 ;
-(id)deviceIDForPairingInformation:(id)arg1 ;
-(void)addSoundDetectionType:(id)arg1 ;
-(void)setPairedHearingAids:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)icloudInitializationQueue;
-(BOOL)isPairedWithRealHearingAids;
-(BOOL)isDeviceIDOnCloudBlacklist:(id)arg1 ;
-(void)_initializeICloudSetup;
-(void)_updateTripleClickOptionsForPairedAids:(id)arg1 ;
-(void)setSoundDetectionSnoozeDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)soundDetectionSnoozeDictionary;
-(void)setComplicationPreferredDisplayMode:(long long)arg1 ;
-(int)availableInputEars;
-(int)earsSupportingWatch;
@end

