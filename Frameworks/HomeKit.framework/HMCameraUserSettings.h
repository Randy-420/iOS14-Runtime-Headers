/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFObject.h>

@protocol HMCameraUserSettingsDelegate;
@class HMFUnfairLock, _HMCameraUserSettings, HMCameraBulletinBoardSmartNotification, _HMContext, HMAccessory, NSSet, NSUUID, NSString, NSArray;

@interface HMCameraUserSettings : NSObject <HMFLogging, HMFMessageReceiver, HMFObject> {

	HMFUnfairLock* _lock;
	_HMCameraUserSettings* _cameraUserSettings;
	HMCameraBulletinBoardSmartNotification* _smartNotificationBulletin;
	id<HMCameraUserSettingsDelegate> _delegate;
	_HMContext* _context;
	HMAccessory* _accessory;

}

@property (copy) _HMCameraUserSettings * cameraUserSettings;                                                                                          //@synthesize cameraUserSettings=_cameraUserSettings - In the implementation block
@property (retain) HMCameraBulletinBoardSmartNotification * smartNotificationBulletin;                                                                //@synthesize smartNotificationBulletin=_smartNotificationBulletin - In the implementation block
@property (nonatomic,retain) _HMContext * context;                                                                                                    //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessory;                                                                                          //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long supportedFeatures; 
@property (readonly) unsigned long long currentAccessMode; 
@property (readonly) unsigned long long recordingEventTriggers; 
@property (getter=areSnapshotsAllowed,readonly) BOOL snapshotsAllowed; 
@property (getter=isAccessModeIndicatorEnabled,readonly) BOOL accessModeIndicatorEnabled; 
@property (getter=isNightVisionModeEnabled,readonly) BOOL nightVisionModeEnabled; 
@property (getter=isRecordingAudioEnabled,readonly) BOOL recordingAudioEnabled; 
@property (getter=isAccessModeChangeNotificationEnabled,readonly) BOOL accessModeChangeNotificationEnabled; 
@property (getter=isCameraManuallyDisabled,readonly) BOOL cameraManuallyDisabled; 
@property (getter=activityZones,readonly) NSSet * activityZones; 
@property (getter=areActivityZonesIncludedForSignificantEventDetection,readonly) BOOL activityZonesIncludedForSignificantEventDetection; 
@property (getter=isReachabilityChangeNotificationEnabled,readonly) BOOL reachabilityChangeNotificationEnabled; 
@property (getter=isReachabilityEventNotificationEnabled,readonly) BOOL reachabilityEventNotificationEnabled; 
@property (__weak) id<HMCameraUserSettingsDelegate> delegate;                                                                                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSUUID * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
+(id)shortDescription;
-(_HMCameraUserSettings *)cameraUserSettings;
-(NSUUID *)messageTargetUUID;
-(void)setCameraUserSettings:(_HMCameraUserSettings *)arg1 ;
-(NSString *)privateDescription;
-(NSArray *)attributeDescriptions;
-(NSString *)shortDescription;
-(HMAccessory *)accessory;
-(void)configureWithAccessory:(id)arg1 context:(id)arg2 ;
-(id)initWithCameraUserSettings:(id)arg1 ;
-(BOOL)isAccessModeChangeNotificationEnabled;
-(BOOL)isReachabilityEventNotificationEnabled;
-(void)setContext:(_HMContext *)arg1 ;
-(void)_mergeNewSettings:(id)arg1 operations:(id)arg2 ;
-(NSUUID *)uniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(unsigned long long)supportedFeatures;
-(void)setDelegate:(id<HMCameraUserSettingsDelegate>)arg1 ;
-(_HMContext *)context;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id<HMCameraUserSettingsDelegate>)delegate;
-(id)logIdentifier;
-(id)smartNotificationBulletinForSettings:(id)arg1 ;
-(void)setSmartNotificationBulletin:(HMCameraBulletinBoardSmartNotification *)arg1 ;
-(HMCameraBulletinBoardSmartNotification *)smartNotificationBulletin;
-(void)handleSettingsDidUpdateMessage:(id)arg1 ;
-(unsigned long long)accessModeAtHome;
-(unsigned long long)accessModeNotAtHome;
-(void)updateReachabilityEventNotificationEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateActivityZones:(id)arg1 areActivityZonesIncludedForSignificantEventDetection:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateWithSettings:(id)arg1 ;
-(void)_callSettingsDidUpdateDelegate;
-(unsigned long long)currentAccessMode;
-(unsigned long long)recordingEventTriggers;
-(BOOL)isAccessModeIndicatorEnabled;
-(NSSet *)activityZones;
-(BOOL)areSnapshotsAllowed;
-(BOOL)isNightVisionModeEnabled;
-(BOOL)isRecordingAudioEnabled;
-(BOOL)isCameraManuallyDisabled;
-(BOOL)areActivityZonesIncludedForSignificantEventDetection;
-(unsigned long long)accessModeForPresenceType:(unsigned long long)arg1 ;
-(void)updateAccessMode:(unsigned long long)arg1 forPresenceEventType:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateRecordingEventTriggers:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAccessModeIndicatorEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateSnapshotsAllowed:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateNightVisionModeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRecordingAudioEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAccessModeChangeNotificationEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateActivityZones:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateReachabilityChangeNotificationEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isReachabilityChangeNotificationEnabled;
-(NSString *)description;
-(id)messageDestination;
@end
