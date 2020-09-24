/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CALNSuggestedEventNotificationDataSource <NSObject>
@required
-(void)clearSuggestedEventNotificationWithSourceClientIdentifier:(id)arg1;
-(id)fetchSuggestedEventNotificationsWithSourceClientIdentifier:(id)arg1;
-(id)fetchSuggestedEventNotificationWithObjectID:(id)arg1;
-(id)fetchSuggestedEventNotifications;
-(void)confirmSuggestedEventWithSourceClientIdentifier:(id)arg1;
-(void)deleteCanceledSuggestedEventWithSourceClientIdentifier:(id)arg1;
-(id)fetchSuggestedEventNotificationObjectIDs;
-(void)ignoreSuggestedEventWithSourceClientIdentifier:(id)arg1;

@end
