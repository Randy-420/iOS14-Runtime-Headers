/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAction.h>

@class NSURL;

@interface VUIActionAppPunchout : VUIAction {

	NSURL* _punchoutURLWithoutAssociatedPlayable;

}

@property (nonatomic,readonly) NSURL * punchoutURLWithoutAssociatedPlayable;              //@synthesize punchoutURLWithoutAssociatedPlayable=_punchoutURLWithoutAssociatedPlayable - In the implementation block
-(id)initWithContextData:(id)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_openPunchoutURL:(id)arg1 isPlaybackURL:(BOOL)arg2 ;
-(NSURL *)punchoutURLWithoutAssociatedPlayable;
@end

