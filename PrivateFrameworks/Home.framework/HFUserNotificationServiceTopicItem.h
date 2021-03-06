/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HMHome, HFUserNotificationServiceTopic;

@interface HFUserNotificationServiceTopicItem : HFItem {

	HMHome* _home;
	HFUserNotificationServiceTopic* _topic;

}

@property (nonatomic,readonly) HMHome * home;                                       //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFUserNotificationServiceTopic * topic;              //@synthesize topic=_topic - In the implementation block
-(HFUserNotificationServiceTopic *)topic;
-(id)initWithHome:(id)arg1 topic:(id)arg2 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HMHome *)home;
@end

