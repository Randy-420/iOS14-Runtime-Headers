/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICLRUCacheDelegate;
@class NSMapTable, NSMutableArray, NSArray;

@interface ICLRUCache : NSObject {

	NSMapTable* mData;
	NSMutableArray* mOrderedKeys;
	unsigned long long mMax;
	id<ICLRUCacheDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long maxSize; 
@property (nonatomic,readonly) NSArray * allKeys; 
@property (assign,nonatomic,__weak) id<ICLRUCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)cacheCollection;
+(void)purgeAllCaches;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(unsigned long long)maxSize;
-(void)removeAllObjects;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)p_removeOldestObject;
-(void)setDelegate:(id<ICLRUCacheDelegate>)arg1 ;
-(NSArray *)allKeys;
-(void)removeObjectForKey:(id)arg1 ;
-(id<ICLRUCacheDelegate>)delegate;
-(id)objectForKey:(id)arg1 ;
@end
