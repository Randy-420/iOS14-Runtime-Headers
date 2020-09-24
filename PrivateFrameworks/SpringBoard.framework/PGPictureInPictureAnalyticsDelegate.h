/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGPictureInPictureAnalyticsDelegate <NSObject>
@required
-(void)pictureInPictureDidDestroyAnalyticsSourceWithUUID:(id)arg1;
-(void)pictureInPictureDidCreateAnalyticsSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 contentType:(long long)arg3;
-(void)pictureInPictureDidChangeStashStateForAnalyticsSessionWithUUID:(id)arg1 stashed:(BOOL)arg2;
-(void)pictureInPictureDidDeactivateAnalyticsSessionWithUUID:(id)arg1 analyticsSourceUUID:(id)arg2 appStoppedSession:(BOOL)arg3 restoredFullScreen:(BOOL)arg4;
-(void)pictureInPictureDidDestroyAnalyticsSessionWithUUID:(id)arg1;
-(void)pictureInPictureDidCreateAnalyticsSessionWithUUID:(id)arg1 bundleIdentifier:(id)arg2 contentType:(long long)arg3;
-(void)pictureInPictureDidActivateAnalyticsSessionWithUUID:(id)arg1 analyticsSourceUUID:(id)arg2 automatically:(BOOL)arg3;
-(void)pictureInPictureAnalyticsSourceWithUUID:(id)arg1 didBecomePossible:(BOOL)arg2;

@end
