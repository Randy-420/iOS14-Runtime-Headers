/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFSensorActivityDataProvider.h>

@class NSSet, NSMutableArray, STMediaStatusDomain, NSMutableSet, SBSensorActivityAttribution, NSString;

@interface SBSensorActivityDataProvider : NSObject <SBFSensorActivityDataProvider> {

	NSSet* _activeSensorActivityAttributions;
	NSMutableArray* _recentSensorActivityAttributions;
	NSMutableArray* _recentAttributionExpirationTimers;
	STMediaStatusDomain* _mediaDomain;
	NSMutableSet* _observers;

}

@property (nonatomic,copy) NSSet * activeSensorActivityAttributions;                                                //@synthesize activeSensorActivityAttributions=_activeSensorActivityAttributions - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * recentSensorActivityAttributions;                              //@synthesize recentSensorActivityAttributions=_recentSensorActivityAttributions - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * recentAttributionExpirationTimers;                             //@synthesize recentAttributionExpirationTimers=_recentAttributionExpirationTimers - In the implementation block
@property (nonatomic,readonly) STMediaStatusDomain * mediaDomain;                                                   //@synthesize mediaDomain=_mediaDomain - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * observers;                                                       //@synthesize observers=_observers - In the implementation block
@property (nonatomic,copy,readonly) SBSensorActivityAttribution * mostRecentSensorActivityAttribution; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)observers;
-(void)addObserver:(id)arg1 ;
-(SBSensorActivityAttribution *)mostRecentSensorActivityAttribution;
-(void)_handleMediaDomainData:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(STMediaStatusDomain *)mediaDomain;
-(void)_notifyObserversOfActivityChange;
-(void)_updateStateForActiveAttributions:(id)arg1 ;
-(void)setActiveSensorActivityAttributions:(NSSet *)arg1 ;
-(NSMutableArray *)recentAttributionExpirationTimers;
-(id)init;
-(NSMutableArray *)recentSensorActivityAttributions;
-(id)initWithSystemStatusServer:(id)arg1 ;
-(NSSet *)activeSensorActivityAttributions;
@end

