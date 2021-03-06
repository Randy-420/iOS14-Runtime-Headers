/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSDictionary, NSArray;

@interface SAUITemplateSegmentedControl : SAUITemplateBaseItem

@property (nonatomic,copy) NSDictionary * backgroundColors; 
@property (nonatomic,copy) NSDictionary * textColors; 
@property (nonatomic,copy) NSArray * titles; 
+(id)segmentedControlWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)segmentedControl;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setTitles:(NSArray *)arg1 ;
-(NSDictionary *)backgroundColors;
-(NSDictionary *)textColors;
-(NSArray *)titles;
-(void)setBackgroundColors:(NSDictionary *)arg1 ;
-(void)setTextColors:(NSDictionary *)arg1 ;
@end

