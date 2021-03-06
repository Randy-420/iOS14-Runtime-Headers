/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageBalloonView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>

@class CKMovieMediaObject, UIView, CKReusableVideoPlayer, CKVideoPlayerReusePool, NSString;

@interface CKVideoPlayerBalloonView : CKImageBalloonView <UIGestureRecognizerDelegate, AVPlayerViewControllerDelegate> {

	CKMovieMediaObject* _mediaObject;
	UIView* _playerView;
	CKReusableVideoPlayer* _reusablePlayer;
	CKVideoPlayerReusePool* _playerPool;

}

@property (nonatomic,retain) UIView * playerView;                                               //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) CKReusableVideoPlayer * reusablePlayer;                            //@synthesize reusablePlayer=_reusablePlayer - In the implementation block
@property (nonatomic,retain) CKVideoPlayerReusePool * playerPool;                               //@synthesize playerPool=_playerPool - In the implementation block
@property (nonatomic,retain) CKMovieMediaObject * mediaObject;                                  //@synthesize mediaObject=_mediaObject - In the implementation block
@property (assign,nonatomic,__weak) id<CKVideoPlayerBalloonViewDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setPlayerView:(UIView *)arg1 ;
-(id)playerViewController;
-(CKMovieMediaObject *)mediaObject;
-(UIView *)playerView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)prepareForDisplay;
-(void)tapGestureRecognized:(id)arg1 ;
-(CKVideoPlayerReusePool *)playerPool;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)doubleTapGestureRecognized:(id)arg1 ;
-(id)playerItem;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 hasInvisibleInkEffect:(BOOL)arg4 ;
-(void)setMediaObject:(CKMovieMediaObject *)arg1 ;
-(NSString *)description;
-(BOOL)gestureIsOurGesture:(id)arg1 ;
-(void)cleanUpPlayerIfNeeded;
-(void)showPlayerViewController;
-(CKReusableVideoPlayer *)reusablePlayer;
-(void)setReusablePlayer:(CKReusableVideoPlayer *)arg1 ;
-(void)setPlayerPool:(CKVideoPlayerReusePool *)arg1 ;
@end

