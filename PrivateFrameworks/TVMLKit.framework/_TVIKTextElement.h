/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKTextElement.h>

@class NSAttributedString;

@interface _TVIKTextElement : IKTextElement {

	NSAttributedString* _cachedAttributedString;

}

@property (nonatomic,copy) NSAttributedString * cachedAttributedString;              //@synthesize cachedAttributedString=_cachedAttributedString - In the implementation block
-(void)dealloc;
-(void)_stylesMarkedDirtyNotification:(id)arg1 ;
-(void)setCachedAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)cachedAttributedString;
@end
