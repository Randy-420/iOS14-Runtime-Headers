/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSEventQueue.h>

@interface FBWorkspaceEventQueue : BSEventQueue
+(id)sharedInstance;
-(void)_noteWillExecuteEvent:(id)arg1 ;
-(void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned long long)arg2 ;
-(void)_noteQueueDidUnlock;
-(void)executeOrPrependEvent:(id)arg1 ;
-(void)_noteQueueDidLock;
-(void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2 ;
-(void)executeOrAppendEvent:(id)arg1 ;
-(BOOL)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2 ;
-(void)executeOrPrependEvents:(id)arg1 ;
@end
