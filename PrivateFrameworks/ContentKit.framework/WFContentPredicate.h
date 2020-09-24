/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFContentPropertyContainer.h>

@class NSSet;

@interface WFContentPredicate : NSObject <WFContentPropertyContainer> {

	/*^block*/id _block;

}

@property (nonatomic,readonly) NSSet * containedProperties; 
+(id)predicateWithBlock:(/*^block*/id)arg1 ;
+(id)truePredicate;
+(id)falsePredicate;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSSet *)containedProperties;
-(void)evaluateWithObject:(id)arg1 propertySubstitutor:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)evaluateWithObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
