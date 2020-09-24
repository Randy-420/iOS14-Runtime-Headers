/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSApplicationDataStore, NSString;

@interface BKSApplicationDataStore : NSObject {

	FBSApplicationDataStore* _fbsApplicationDataStore;

}

@property (nonatomic,readonly) NSString * bundleID; 
+(void)setPrefetchedKeys:(id)arg1 ;
+(id)storeForApplication:(id)arg1 ;
+(id)applicationsWithAvailableStores;
+(void)synchronize;
-(id)safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)setArchivedObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllObjects;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)_initWithFBSApplicationDataStore:(id)arg1 ;
-(void)objectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(NSString *)bundleID;
-(id)archivedObjectForKey:(id)arg1 ;
-(void)archivedObjectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
@end
