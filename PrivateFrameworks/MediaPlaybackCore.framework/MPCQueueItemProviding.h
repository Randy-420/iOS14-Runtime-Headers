/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPAVItem;


@protocol MPCQueueItemProviding
@property (nonatomic,retain) MPAVItem * currentItem; 
@required
-(MPAVItem *)currentItem;
-(void)setCurrentItem:(id)arg1;
-(BOOL)canSkipInDirection:(long long)arg1 fromQueueItem:(id)arg2;
-(void)playerItemDidResignCurrent:(id)arg1;
-(void)playerItemDidBecomeCurrent:(id)arg1;
-(id)itemToFollowItem:(id)arg1 direction:(long long)arg2 distance:(long long)arg3 jumpToItem:(BOOL)arg4;
-(id)itemForContentItemID:(id)arg1 allowReuse:(BOOL)arg2;

@end

