/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextMagnifier.h>

@interface UITextMagnifierCaret : UITextMagnifier {

	double _yOffset;
	CGPoint _offset;

}

@property (assign,nonatomic) CGPoint offset;              //@synthesize offset=_offset - In the implementation block
+(Class)renderClass;
+(id)activeCaretMagnifier;
+(id)sharedCaretMagnifier;
-(void)remove;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(id)initWithFrame;
-(BOOL)isHorizontal;
-(CGPoint)animationPoint;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(BOOL)arg5 ;
-(void)zoomDownAnimation;
-(void)updateFrameAndOffset;
-(void)zoomUpAnimation;
-(BOOL)terminalPointPlacedCarefully;
-(double)offsetFromMagnificationPoint;
-(void)setAnimationPoint:(CGPoint)arg1 ;
@end
