/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UILabel.h>

@class NSDictionary;

@interface _UIActivityIndicatorMessageLabel : UILabel {

	NSDictionary* _regularTextAttributes;
	NSDictionary* _effectiveTextAttributes;

}

@property (nonatomic,copy) NSDictionary * regularTextAttributes;                         //@synthesize regularTextAttributes=_regularTextAttributes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * effectiveTextAttributes;              //@synthesize effectiveTextAttributes=_effectiveTextAttributes - In the implementation block
@property (nonatomic,readonly) double verticalSpacingToSpinner; 
+(id)defaultRegularContentSizeTextAttributes;
-(void)setAttributedText:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)verticalSpacingToSpinner;
-(id)initWithRegularTextAttributes:(id)arg1 ;
-(id)_validatedAttributedString:(id)arg1 ;
-(void)_ensureCapableOfCalculatingBaselineOffsets;
-(NSDictionary *)effectiveTextAttributes;
-(void)setEffectiveTextAttributes:(NSDictionary *)arg1 ;
-(double)_effectiveVerticalSpacingToSpinner;
-(NSDictionary *)regularTextAttributes;
-(id)_effectiveAttributesDerivedFromRegularTextAttributes:(id)arg1 ;
-(void)setRegularTextAttributes:(NSDictionary *)arg1 ;
@end

