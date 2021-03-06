/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface LSDatabaseContext : NSObject

@property (getter=isAccessing,readonly) BOOL accessing; 
@property (readonly) NSData * currentPersistentIdentifier; 
+(id)new;
+(id)sharedDatabaseContext;
-(BOOL)isAccessing;
-(void)stopAccessing;
-(void)accessUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)startAccessingWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)removeDatabaseChangeObserver4WebKit:(id)arg1 ;
-(void)accessWithUserID:(unsigned)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)startAccessingWithUserID:(unsigned)arg1 error:(id*)arg2 ;
-(void)accessWithUserID:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSData *)currentPersistentIdentifier;
-(BOOL)startAccessingWithUserID:(unsigned)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)addDatabaseChangeObserver4WebKit:(/*^block*/id)arg1 ;
-(BOOL)startAccessingReturningError:(id*)arg1 ;
-(void)observeDatabaseChange4WebKit:(id)arg1 ;
-(void)accessWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_init;
-(id)init;
@end

