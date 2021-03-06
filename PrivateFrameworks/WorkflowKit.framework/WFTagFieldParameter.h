/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>

@class NSArray;

@interface WFTagFieldParameter : WFParameter {

	BOOL _allowsTextEntry;
	long long _keyboardType;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	long long _textAlignment;
	NSArray* _suggestedTags;

}

@property (nonatomic,readonly) BOOL allowsTextEntry;                          //@synthesize allowsTextEntry=_allowsTextEntry - In the implementation block
@property (nonatomic,readonly) long long keyboardType;                        //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,readonly) long long autocapitalizationType;              //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) long long autocorrectionType;                  //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (nonatomic,readonly) long long textAlignment;                       //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) NSArray * suggestedTags;                       //@synthesize suggestedTags=_suggestedTags - In the implementation block
-(long long)keyboardType;
-(long long)textAlignment;
-(long long)autocapitalizationType;
-(long long)autocorrectionType;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(BOOL)shouldAlignLabels;
-(NSArray *)suggestedTags;
-(BOOL)allowsTextEntry;
@end

