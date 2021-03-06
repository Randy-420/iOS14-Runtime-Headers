/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventHandling.h>

@class NSMutableArray, NSString;

@interface SBAnalyticsStateMachineEventHandler : NSObject <SBFAnalyticsBackendEventHandling> {

	unsigned long long _currentState;
	NSMutableArray* _edges;

}

@property (nonatomic,readonly) unsigned long long currentState;              //@synthesize currentState=_currentState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)currentState;
-(BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(id)init;
-(void)addEdge:(id)arg1 ;
@end

