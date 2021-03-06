/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSMutableArray, NSDate;

@interface PGRecentPastEventsMemoryGenerator : PGMemoryGenerator {

	NSMutableArray* _potentialMemories;
	NSDate* _localDate;

}

@property (nonatomic,retain) NSDate * localDate;              //@synthesize localDate=_localDate - In the implementation block
-(NSDate *)localDate;
-(id)initWithController:(id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(void)setLocalDate:(NSDate *)arg1 ;
-(id)_peopleSeenInPreviousWeekButNotInPreviousThreeMonthsWithLocalDate:(id)arg1 ;
-(id)_computePotentialMemoriesForPersonNodes:(id)arg1 ;
-(id)_computePotentialMemoriesForSubcategory:(unsigned long long)arg1 withLocalStartDate:(id)arg2 localEndDate:(id)arg3 ;
-(void)_computePotentialMemories;
-(id)generateMemories:(unsigned long long)arg1 ;
-(id)_createMemoryDebugWithPotentialMemory:(id)arg1 ;
@end

