/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSNotificationCenter, NSString;

@interface HMDCloudPhotosSettingObserver : HMFObject <HMFLogging> {

	BOOL _cloudPhotosEnabled;
	/*^block*/id _accountFactory;
	NSNotificationCenter* _notificationCenter;

}

@property (getter=isCloudPhotosEnabled) BOOL cloudPhotosEnabled;              //@synthesize cloudPhotosEnabled=_cloudPhotosEnabled - In the implementation block
@property (readonly) id accountFactory;                                       //@synthesize accountFactory=_accountFactory - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;               //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)logCategory;
-(NSNotificationCenter *)notificationCenter;
-(id)accountFactory;
-(id)init;
-(BOOL)isCloudPhotosEnabled;
-(id)initWithAccountFactory:(/*^block*/id)arg1 notificationCenter:(id)arg2 ;
-(void)handleAccountStoreDidChangeNotification:(id)arg1 ;
-(BOOL)fetchCloudPhotosEnabled;
-(void)setCloudPhotosEnabled:(BOOL)arg1 ;
@end
