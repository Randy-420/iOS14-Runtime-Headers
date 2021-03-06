/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXSubscriptionStatusProviding.h>
#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>

@interface NewsArticles.SubscriptionStatusProvider : NSObject <SXSubscriptionStatusProviding, FCBundleSubscriptionChangeObserver> {

	 headline;
	 purchaseProvider;
	 bundleSubscriptionManager;
	 bundlePurchasePrewarmer;
	 observers;
	 bundleSubscriptionStatus;
	 channelSubscriptionStatus;

}

@property (assign,nonatomic) long long bundleSubscriptionStatus; 
@property (assign,nonatomic) long long channelSubscriptionStatus; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(id)init;
-(long long)bundleSubscriptionStatus;
-(void)setBundleSubscriptionStatus:(long long)arg1 ;
-(long long)channelSubscriptionStatus;
-(void)setChannelSubscriptionStatus:(long long)arg1 ;
-(void)purchaseListChangedWithNotification:(id)arg1 ;
@end

