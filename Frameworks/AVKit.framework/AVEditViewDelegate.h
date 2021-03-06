/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVEditViewDelegate <NSObject>
@required
-(void)editViewDidBeginScrubbing:(id)arg1;
-(void)editViewDidEndScrubbing:(id)arg1;
-(void)editView:(id)arg1 currentTimeDidChange:(double)arg2;
-(void)editView:(id)arg1 trimStartTimeDidChange:(double)arg2;
-(void)editView:(id)arg1 trimEndTimeDidChange:(double)arg2;
-(void)editViewWillBeginRequestingThumbnails:(id)arg1;
-(void)editViewDidFinishRequestingThumbnails:(id)arg1;

@end

