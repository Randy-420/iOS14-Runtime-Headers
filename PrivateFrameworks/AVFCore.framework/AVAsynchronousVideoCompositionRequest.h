/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAsynchronousVideoCompositionRequestInternal, AVVideoCompositionRenderContext, NSArray;

@interface AVAsynchronousVideoCompositionRequest : NSObject <NSCopying> {

	AVAsynchronousVideoCompositionRequestInternal* _internal;

}

@property (nonatomic,readonly) AVVideoCompositionRenderContext * renderContext; 
@property (nonatomic,readonly) SCD_Struct_AV6 compositionTime; 
@property (nonatomic,readonly) NSArray * sourceTrackIDs; 
@property (nonatomic,readonly) id<AVVideoCompositionInstruction> videoCompositionInstruction; 
-(void)finishWithError:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<AVVideoCompositionInstruction>)videoCompositionInstruction;
-(void)dealloc;
-(SCD_Struct_AV6)compositionTime;
-(void)finishWithComposedVideoFrame:(CVBufferRef)arg1 ;
-(void)finishCancelledRequest;
-(NSArray *)sourceTrackIDs;
-(CVBufferRef)sourceFrameByTrackID:(int)arg1 ;
-(id)initUsingSession:(id)arg1 withRenderContext:(id)arg2 compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg3 atTime:(SCD_Struct_AV6)arg4 usingSources:(id)arg5 instruction:(id)arg6 ;
-(OpaqueFigVideoCompositorFrameRef)compositionFrame;
-(AVVideoCompositionRenderContext *)renderContext;
-(void)_willDeallocOrFinalize;
@end
