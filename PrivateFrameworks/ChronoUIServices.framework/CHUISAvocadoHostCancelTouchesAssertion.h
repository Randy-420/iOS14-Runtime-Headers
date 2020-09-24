/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSArray, NSString;

@interface CHUISAvocadoHostCancelTouchesAssertion : NSObject <BSInvalidatable> {

	BOOL _invalidated;
	NSArray* _assertions;

}

@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assertions;                        //@synthesize assertions=_assertions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInvalidated:(BOOL)arg1 ;
-(BOOL)isInvalidated;
-(void)invalidate;
-(void)dealloc;
-(id)init;
-(NSArray *)assertions;
-(id)initWithAssertions:(id)arg1 ;
@end
