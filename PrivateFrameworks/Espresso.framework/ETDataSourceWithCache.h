/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/ETDataSource.h>

@protocol ETDataSource;
@interface ETDataSourceWithCache : NSObject <ETDataSource> {

	id<ETDataSource> _source;
	map<int, ETDataPoint *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, ETDataPoint *> > >* _cache;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > dump_path;
	BOOL dump_descriptors;

}
-(int)numberOfDataPoints;
-(id)initWithDataSource:(id)arg1 ;
-(id)dataPointAtIndex:(int)arg1 ;
-(id)initWithDataSource:(id)arg1 dumpPath:(id)arg2 ;
@end

