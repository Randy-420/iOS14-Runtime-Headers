/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class HMHomeManager, NSMutableSet;

@interface HFHomeItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHomeManager* _homeManager;
	NSMutableSet* _homeItems;

}

@property (nonatomic,retain) HMHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSMutableSet * homeItems;                 //@synthesize homeItems=_homeItems - In the implementation block
@property (nonatomic,copy) id filter;                                  //@synthesize filter=_filter - In the implementation block
-(id)items;
-(id)filter;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(void)setHomeItems:(NSMutableSet *)arg1 ;
-(id)initWithHomeManager:(id)arg1 ;
-(void)setFilter:(id)arg1 ;
-(id)invalidationReasons;
-(id)reloadItems;
-(NSMutableSet *)homeItems;
@end
