/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecents/CoreRecents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSArray, NSString;

@interface CRSearchQuery : NSObject <NSSecureCoding> {

	NSPredicate* _predicate;
	NSArray* _domains;
	unsigned long long _implicitGroupThreshold;
	unsigned long long _options;
	/*^block*/id _weightDecayer;
	/*^block*/id _comparator;
	NSString* _uuid;
	NSRange _pageRange;

}

@property (nonatomic,copy,readonly) NSString * uuid;                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * domains;                                        //@synthesize domains=_domains - In the implementation block
@property (assign,nonatomic) unsigned long long implicitGroupThreshold;              //@synthesize implicitGroupThreshold=_implicitGroupThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long options;                             //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) NSRange pageRange;                                      //@synthesize pageRange=_pageRange - In the implementation block
@property (nonatomic,copy) id weightDecayer;                                         //@synthesize weightDecayer=_weightDecayer - In the implementation block
@property (nonatomic,copy) id comparator;                                            //@synthesize comparator=_comparator - In the implementation block
+(/*^block*/id)rankedFrecencyComparatorWithPreferredSources:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)searchQueryForSearchTerm:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 recentsDomain:(id)arg4 ;
+(/*^block*/id)frecencyComparator;
+(/*^block*/id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned long long)arg4 ;
-(id)weightDecayer;
-(NSArray *)domains;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setPageRange:(NSRange)arg1 ;
-(unsigned long long)options;
-(NSRange)pageRange;
-(void)setWeightDecayer:(id)arg1 ;
-(unsigned long long)implicitGroupThreshold;
-(id)init;
-(NSPredicate *)predicate;
-(void)setImplicitGroupThreshold:(unsigned long long)arg1 ;
-(id)comparator;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDomains:(NSArray *)arg1 ;
-(void)setComparator:(id)arg1 ;
@end
