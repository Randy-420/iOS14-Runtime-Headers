/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject {

	WebBookmarksXPCConnection* _connection;

}
-(id)init;
-(void)getSafariWebDataUsageWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllSafariSecurityOriginsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearAllSafariHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteSafariWebsiteDataRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getSafariDataUsageByteCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)scheduleBookmarksDatabaseMaintenance;
-(void)scheduleHSTSSuperCookieCleanup;
-(void)scheduleBookmarksDatabaseMigrationTask;
-(void)schedulePasswordIconsCleanup;
@end
