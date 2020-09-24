/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _REMInProgressSaveRequestsContainer : NSObject {

	NSMutableArray* _inProgressSaveRequests;

}

@property (nonatomic,retain) NSMutableArray * inProgressSaveRequests;              //@synthesize inProgressSaveRequests=_inProgressSaveRequests - In the implementation block
-(id)latestSaveInProgressAccount:(id)arg1 ;
-(void)saveRequestSaveDidStart:(id)arg1 ;
-(id)_latestSaveInProgressReminderForObjectID:(id)arg1 fallbackAccount:(id)arg2 fallbackList:(id)arg3 fallbackParentList:(id)arg4 fallbackParentReminder:(id)arg5 saveRequest:(id)arg6 ;
-(id)_latestSaveInProgressAccountForObjectID:(id)arg1 saveRequest:(id)arg2 ;
-(NSMutableArray *)inProgressSaveRequests;
-(void)saveRequestSaveDidFinish:(id)arg1 ;
-(id)_latestSaveInProgressListForObjectID:(id)arg1 fallbackAccount:(id)arg2 fallbackParentList:(id)arg3 saveRequest:(id)arg4 ;
-(id)latestSaveInProgressList:(id)arg1 ;
-(id)init;
-(id)latestSaveInProgressReminder:(id)arg1 ;
-(void)setInProgressSaveRequests:(NSMutableArray *)arg1 ;
-(id)latestSaveInProgressReminderForReminderChangeItem:(id)arg1 ;
-(id)_firstMatchInSaveRequests:(/*^block*/id)arg1 ;
@end
