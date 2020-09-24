/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPArtworkRepresentation;

@interface MPArtworkRepresentationCollection : NSObject {

	MPArtworkRepresentation* _imageRepresentation;
	MPArtworkRepresentation* _videoRepresentation;
	unsigned long long _bestRepresentationKinds;

}

@property (nonatomic,retain) MPArtworkRepresentation * imageRepresentation;              //@synthesize imageRepresentation=_imageRepresentation - In the implementation block
@property (nonatomic,retain) MPArtworkRepresentation * videoRepresentation;              //@synthesize videoRepresentation=_videoRepresentation - In the implementation block
@property (assign,nonatomic) unsigned long long bestRepresentationKinds;                 //@synthesize bestRepresentationKinds=_bestRepresentationKinds - In the implementation block
+(id)collectionWithImageRepresentation:(id)arg1 videoRepresentation:(id)arg2 bestRepresentationKinds:(unsigned long long)arg3 ;
+(id)collectionWithImageRepresentation:(id)arg1 videoRepresentation:(id)arg2 ;
-(MPArtworkRepresentation *)imageRepresentation;
-(void)setBestRepresentationKinds:(unsigned long long)arg1 ;
-(MPArtworkRepresentation *)videoRepresentation;
-(BOOL)isBestRepresentationForKind:(long long)arg1 ;
-(void)setVideoRepresentation:(MPArtworkRepresentation *)arg1 ;
-(void)resetForRepresentationKinds:(unsigned long long)arg1 ;
-(void)setImageRepresentation:(MPArtworkRepresentation *)arg1 ;
-(unsigned long long)bestRepresentationKinds;
@end
