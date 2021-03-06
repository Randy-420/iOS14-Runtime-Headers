/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class NSString, NSMutableArray;

@interface SXTextStyleAttributesMap : NSObject {

	NSString* _string;
	NSMutableArray* _attributes;

}

@property (nonatomic,readonly) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSMutableArray * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(NSString *)string;
-(id)attributedString;
-(NSMutableArray *)attributes;
-(id)initWithString:(id)arg1 ;
-(void)addAttributes:(id)arg1 ;
-(id)description;
-(id)attributesMapWithAttributesForRange:(NSRange)arg1 ;
@end

