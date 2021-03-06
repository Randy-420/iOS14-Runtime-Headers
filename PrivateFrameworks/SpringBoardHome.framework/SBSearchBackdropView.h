/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBHProgressiveBlur.h>

@class MTMaterialView, NSString;

@interface SBSearchBackdropView : UIView <SBHProgressiveBlur> {

	MTMaterialView* _materialView;
	BOOL _transitioningToBlur;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_recipeForStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)completeIncrementalTransitionSuccessfully:(BOOL)arg1 ;
-(void)prepareForTransitionToBlurred:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTransitionProgress:(double)arg1 ;
-(void)completeTransitionSuccessfully:(BOOL)arg1 ;
@end

