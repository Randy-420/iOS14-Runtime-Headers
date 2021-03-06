/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FPItem;

@interface DocumentManagerExecutables.DOCInteractionManager : NSObject {

	 lastOpenedItem;
	 lastSelectedItem;

}

@property (retain,nonatomic) FPItem * lastOpenedItem; 
@property (retain,nonatomic) FPItem * lastSelectedItem; 
+(id)sharedManagerFor:(id)arg1 ;
+(void)clearSharedControllerFor:(id)arg1 ;
+(void)setSharedManagerWith:(id)arg1 to:(id)arg2 ;
-(id)init;
-(FPItem *)lastOpenedItem;
-(void)setLastOpenedItem:(FPItem *)arg1 ;
-(FPItem *)lastSelectedItem;
-(void)setLastSelectedItem:(FPItem *)arg1 ;
@end

