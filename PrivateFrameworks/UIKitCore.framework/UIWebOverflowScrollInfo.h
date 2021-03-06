/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class DOMNode;

@interface UIWebOverflowScrollInfo : NSObject {

	BOOL _isUserScroll;
	DOMNode* _node;
	CGPoint _offset;

}

@property (nonatomic,retain) DOMNode * node;                 //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) CGPoint offset;                 //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL isUserScroll;              //@synthesize isUserScroll=_isUserScroll - In the implementation block
-(DOMNode *)node;
-(void)setNode:(DOMNode *)arg1 ;
-(void)dealloc;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(id)initWithNode:(id)arg1 offset:(CGPoint)arg2 isUserScroll:(BOOL)arg3 ;
-(BOOL)coalesceScrollForNode:(id)arg1 offset:(CGPoint)arg2 isUserScroll:(BOOL)arg3 ;
-(BOOL)isUserScroll;
-(void)setIsUserScroll:(BOOL)arg1 ;
@end

