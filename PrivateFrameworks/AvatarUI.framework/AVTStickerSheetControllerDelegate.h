/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTStickerSheetControllerDelegate <NSObject>
@required
-(void)stickerSheetController:(id)arg1 didFinishRenderingStickersForRecord:(id)arg2;
-(void)stickerSheetController:(id)arg1 didScrollToContentOffset:(CGPoint)arg2;
-(void)stickerSheetController:(id)arg1 scrollView:(id)arg2 willEndDraggingWithTargetContentOffset:(inout CGPoint*)arg3;
-(void)stickerSheetController:(id)arg1 didInteractWithStickerAtIndex:(long long)arg2 byPeeling:(BOOL)arg3;

@end
