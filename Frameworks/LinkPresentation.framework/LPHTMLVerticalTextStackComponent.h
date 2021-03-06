/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPHTMLComponent.h>

@class LPVerticalTextStackViewStyle, LPCaptionBarPresentationProperties;

@interface LPHTMLVerticalTextStackComponent : LPHTMLComponent {

	LPVerticalTextStackViewStyle* _style;
	LPCaptionBarPresentationProperties* _presentationProperties;

}
+(id)styleSet;
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)baseRules;
+(id)additionalRulesForStyle:(id)arg1 ;
-(void)buildComponents;
-(id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 themePath:(id)arg3 generator:(id)arg4 ;
-(id)componentForRow:(id)arg1 style:(id)arg2 name:(id)arg3 firstLineLeading:(double)arg4 ;
@end

