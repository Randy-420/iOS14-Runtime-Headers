/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class UNNotification;

@interface UIWillPresentNotificationAction : BSAction {

	BOOL _isDeliverable;
	UNNotification* _notification;

}

@property (nonatomic,retain,readonly) UNNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) BOOL isDeliverable;                                //@synthesize isDeliverable=_isDeliverable - In the implementation block
@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) BOOL isRemote; 
-(BOOL)isLocal;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(UNNotification *)notification;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)isRemote;
-(id)initWithNotification:(id)arg1 deliverable:(BOOL)arg2 timeout:(double)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)initWithNotification:(id)arg1 timeout:(double)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)_trigger;
-(long long)UIActionType;
-(BOOL)isDeliverable;
@end
