/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXFontFamilyProvider.h>

@class NSArray, NSString;

@interface SXDocumentFontFamilyProvider : NSObject <SXFontFamilyProvider> {

	NSArray* _fonts;

}

@property (nonatomic,readonly) NSArray * fonts;                     //@synthesize fonts=_fonts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)fonts;
-(id)initWithDocument:(id)arg1 ;
-(id)fontFamilies;
-(id)fontsFromDocument:(id)arg1 ;
@end
