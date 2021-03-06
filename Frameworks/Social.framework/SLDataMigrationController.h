/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SLDataMigrationController : NSObject
+(id)sharedController;
-(BOOL)needsMigrationForSocialDaemonBundleID:(id)arg1 preferenceKey:(id)arg2 ;
-(void)didFinishMigrationForSocialDaemonBundleID:(id)arg1 preferenceKey:(id)arg2 ;
-(void)ensureSocialUserDataDirectory;
-(BOOL)needsFileProtectionUpgradeForProfileImagesAtPath:(id)arg1 serviceNameForLogging:(id)arg2 ;
-(void)removeAncillarySocialDatabaseFilesWithPrefix:(id)arg1 serviceNameForLogging:(id)arg2 ;
@end

