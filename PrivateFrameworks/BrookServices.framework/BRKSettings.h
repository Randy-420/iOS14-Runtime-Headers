/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BrookServices.framework/BrookServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NPSManager, NPSDomainAccessor, NSSet, NRDevice, NSDate, NSString;

@interface BRKSettings : NSObject <MCProfileConnectionObserver> {

	NPSManager* _npsManager;
	BOOL _shouldObserveDefaultChanges;
	int _notifyToken;
	BOOL _currentMCDataCollectionValue;
	NPSDomainAccessor* _domainAccessor;
	NSSet* _observedKeys;
	NSSet* _dataCollectionKeys;
	NRDevice* _device;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=areRemindersEnabled,nonatomic) BOOL remindersEnabled; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (getter=isBrookTentpoleEnabled,nonatomic,readonly) BOOL brookTentpoleEnabled; 
@property (assign,getter=isDataCollectionEnabled,nonatomic) BOOL dataCollectionEnabled; 
@property (assign,getter=isOnboardingComplete,nonatomic) BOOL onboardingComplete; 
@property (getter=isStealthUIEnabled,nonatomic,readonly) BOOL stealthUIEnabled; 
@property (assign,nonatomic) double brookCoolDownInterval; 
@property (nonatomic,retain) NSDate * lastDataCollectionUploadDate; 
@property (assign,nonatomic) unsigned long long overrideDataCollectionAuthorization; 
@property (assign,getter=isDataCollectionUploadDisabled,nonatomic) BOOL dataCollectionUploadDisabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsForActiveDevice;
+(id)remindersSettingFooter;
+(id)remindersFooterExplanationSignificantLocationsUnavailable;
+(id)remindersFooterExplanationNoLocationOrMeCard;
+(id)remindersFooterLinkTitleContacts;
+(id)remindersFooterExplanationNoLocation;
+(id)remindersFooterExplanationInavlidLocationAuth;
+(id)remindersFooterLinkTitleLocation;
+(id)remindersFooterExplanationFormat;
+(id)settingsForDevice:(id)arg1 ;
+(id)_stringForConfigurationWithKey:(id)arg1 ;
+(id)settingsTitle;
+(id)timerSettingTitle;
+(id)timerSettingFooter;
+(id)remindersSettingTitle;
-(BOOL)isAvailable;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)_valueForKey:(id)arg1 ;
-(BOOL)isEnabled;
-(void)dealloc;
-(BOOL)isDataCollectionEnabled;
-(void)setDataCollectionEnabled:(BOOL)arg1 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setEnabled:(BOOL)arg1 ;
-(unsigned long long)overrideDataCollectionAuthorization;
-(void)setRemindersEnabled:(BOOL)arg1 ;
-(void)_handleNPSNotification;
-(id)_initWithDevice:(id)arg1 ;
-(void)_BRKRegisterForBRKSettingsChange;
-(BOOL)_isManagedConfigurationDataCollectionEnabled;
-(void)_observeDefaultChanges:(BOOL)arg1 ;
-(void)_BRKCancelForBRKSettingsChange;
-(BOOL)isBrookTentpoleEnabled;
-(BOOL)areRemindersEnabled;
-(void)setOnboardingComplete:(BOOL)arg1 ;
-(BOOL)isOnboardingComplete;
-(BOOL)isStealthUIEnabled;
-(void)setBrookCoolDownInterval:(double)arg1 ;
-(double)brookCoolDownInterval;
-(NSDate *)lastDataCollectionUploadDate;
-(void)setLastDataCollectionUploadDate:(NSDate *)arg1 ;
-(void)setOverrideDataCollectionAuthorization:(unsigned long long)arg1 ;
-(BOOL)isDataCollectionUploadDisabled;
-(void)setDataCollectionUploadDisabled:(BOOL)arg1 ;
@end
