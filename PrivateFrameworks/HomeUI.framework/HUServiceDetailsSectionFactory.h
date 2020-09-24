/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HUServiceDetailsSectionFactory : NSObject {

	/*^block*/id _customComparator;

}

@property (nonatomic,copy) id customComparator;              //@synthesize customComparator=_customComparator - In the implementation block
-(/*^block*/id)_serviceDetailsItemComparatorForSectionIdentifier:(id)arg1 ;
-(id)customComparator;
-(id)buildServiceDetailsItemSectionForSourceItem:(id)arg1 sectionIdentifier:(id)arg2 items:(id)arg3 ;
-(void)setCustomComparator:(id)arg1 ;
@end
