/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXFeatureSetBuilderProtocol.h>

@class NSMutableDictionary;

@interface ATXInformationFeatureSetBuilder : NSObject <ATXFeatureSetBuilderProtocol> {

	NSMutableDictionary* _features;

}
+(id)stringForInfoSuggestionFeature:(unsigned long long)arg1 ;
-(id)build;
-(void)setFeatureWithName:(id)arg1 toValue:(id)arg2 ;
-(void)appendFeature:(unsigned long long)arg1 value:(double)arg2 ;
@end

