/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HearingCore/HCDatabaseManager.h>

@class CHManager;

@interface RTTDatabaseManager : HCDatabaseManager {

	CHManager* _callHistoryManager;

}
+(id)sharedManager;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(id)containerIdentifier;
-(void)logMessage:(id)arg1 ;
-(id)init;
-(BOOL)deleteConversationWithCallUID:(id)arg1 ;
-(id)cloudKitContainer;
-(id)conversationForCallUID:(id)arg1 ;
-(BOOL)saveConversation:(id)arg1 ;
-(BOOL)contactIDIsTTYContact:(id)arg1 ;
-(BOOL)contactPathWasUsedForTTY:(id)arg1 ;
-(void)callHistoryDBDidChange:(id)arg1 ;
-(void)_callHistoryDBDidChange:(id)arg1 ;
-(BOOL)deleteConversationsWithCallUIDs:(id)arg1 ;
-(id)managedObjectModelName;
@end

