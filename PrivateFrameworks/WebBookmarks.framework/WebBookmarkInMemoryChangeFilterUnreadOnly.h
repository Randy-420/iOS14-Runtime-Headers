/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebBookmarks/WebBookmarkInMemoryChangeFilter.h>

@class NSString;

@interface WebBookmarkInMemoryChangeFilterUnreadOnly : NSObject <WebBookmarkInMemoryChangeFilter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_bookmarksIDsFromBookmarks:(id)arg1 fromChangeSet:(id)arg2 withFilter:(/*^block*/id)arg3 ;
-(id)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:(id)arg1 inFolder:(int)arg2 ;
-(id)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:(id)arg1 inFolder:(int)arg2 ;
@end
