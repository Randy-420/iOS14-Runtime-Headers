/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/_MTLParallelRenderCommandEncoder.h>

@interface MTLIOAccelParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder
-(BOOL)isMemorylessRender;
-(unsigned long long)getType;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2 ;
-(void)setLabel:(id)arg1 ;
-(void)endEncoding;
@end
