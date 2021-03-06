/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemSection.h>

@class NSString, NSAttributedString, NSArray, NSDictionary;

@interface HFMutableItemSection : HFItemSection

@property (nonatomic,copy) NSString * headerTitle; 
@property (nonatomic,copy) NSString * headerAccessoryButtonTitle; 
@property (assign,nonatomic,__weak) id<HFItemSectionAccessoryButtonHeaderDelegate> headerAccessoryButtonDelegate; 
@property (nonatomic,copy) NSString * footerTitle; 
@property (nonatomic,copy) NSAttributedString * attributedFooterTitle; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSDictionary * userInfo; 
-(void)setItems:(id)arg1 filteringToDisplayedItems:(id)arg2 ;
-(void)setItemsUsingDefaultSortComparator:(id)arg1 ;
@end

