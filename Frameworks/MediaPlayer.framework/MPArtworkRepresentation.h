/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class UIImage, AVAsset;

@interface MPArtworkRepresentation : NSObject {

	long long _kind;
	UIImage* _image;
	AVAsset* _video;
	id _representationToken;
	CGSize _representationSize;

}

@property (assign,nonatomic) long long kind;                         //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) AVAsset * video;                        //@synthesize video=_video - In the implementation block
@property (assign,nonatomic) CGSize representationSize;              //@synthesize representationSize=_representationSize - In the implementation block
@property (nonatomic,retain) id representationToken;                 //@synthesize representationToken=_representationToken - In the implementation block
+(id)representationWithSize:(CGSize)arg1 video:(id)arg2 ;
+(id)representationWithSize:(CGSize)arg1 image:(id)arg2 ;
-(void)setVideo:(AVAsset *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)debugQuickLookObject;
-(AVAsset *)video;
-(long long)kind;
-(CGSize)representationSize;
-(UIImage *)image;
-(void)setKind:(long long)arg1 ;
-(id)representationToken;
-(void)setRepresentationSize:(CGSize)arg1 ;
-(void)setRepresentationToken:(id)arg1 ;
@end
