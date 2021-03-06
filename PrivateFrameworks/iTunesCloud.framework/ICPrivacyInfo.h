/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSMutableDictionary;

@interface ICPrivacyInfo : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _observers;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) BOOL privacyAcknowledgementRequiredForMedia; 
@property (nonatomic,readonly) BOOL privacyAcknowledgementRequiredForMusic; 
+(id)sharedPrivacyInfo;
+(BOOL)_queryPrivacyAcknowledgementRequiredForIdentifier:(id)arg1 ;
+(id)_onboardingKitPrivacyIdentifierForPrivacyIdentifier:(id)arg1 ;
-(BOOL)privacyAcknowledgementRequiredForMusic;
-(BOOL)_privacyAcknowledgementRequiredForIdentifier:(id)arg1 ;
-(void)endObservingPrivacyAcknowledgementForIdentifier:(id)arg1 withToken:(id)arg2 ;
-(BOOL)privacyAcknowledgementRequiredForMedia;
-(BOOL)privacyAcknowledgementRequiredForBundleIdentifier:(id)arg1 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(id)init;
-(BOOL)_privacyAcknowledgementRequiredForVideos;
-(void)_updateForPrivacyAcknowledgementChanged;
-(id)beginObservingPrivacyAcknowledgementForIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)acknowledgePrivacyPolicyForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)privacyAcknowledgementRequiredForIdentifier:(id)arg1 ;
@end

