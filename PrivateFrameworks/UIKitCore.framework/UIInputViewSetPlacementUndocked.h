/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewSetPlacement.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement <NSSecureCoding> {

	CGPoint _normalizedOffset;
	UIEdgeInsets _chromeBuffer;

}

@property (assign,nonatomic) CGPoint normalizedOffset;               //@synthesize normalizedOffset=_normalizedOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets chromeBuffer;              //@synthesize chromeBuffer=_chromeBuffer - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)infoWithPoint:(CGPoint)arg1 ;
+(CGPoint)computeOffsetForOffset:(CGPoint)arg1 withSize:(CGSize)arg2 chromeBuffer:(UIEdgeInsets)arg3 onScreenSize:(CGSize)arg4 ;
+(id)placementWithUndockedOffset:(CGPoint)arg1 chromeBuffer:(UIEdgeInsets)arg2 ;
-(BOOL)isUndocked;
-(void)setOffset:(CGPoint)arg1 ;
-(BOOL)inputViewWillAppear;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(BOOL)arg2 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(id)applicatorInfoForOwner:(id)arg1 ;
-(UIEdgeInsets)chromeBuffer;
-(double)heightOfInputViews:(id)arg1 ;
-(CGPoint)normalizedOffset;
-(void)setChromeBuffer:(UIEdgeInsets)arg1 ;
-(void)setNormalizedOffset:(CGPoint)arg1 ;
@end

