/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDCharacteristicsAvailabilityListenerDelegate.h>

@protocol HMDDoorbellChimeControllerContext;
@class NSSet, NSDate, NSString;

@interface HMDDoorbellChimeController : NSObject <HMFLogging, HMDCharacteristicsAvailabilityListenerDelegate> {

	NSSet* _availableCharacteristics;
	NSDate* _lastUnidentifiedChimeDate;
	id<HMDDoorbellChimeControllerContext> _context;

}

@property (retain) NSSet * availableCharacteristics;                           //@synthesize availableCharacteristics=_availableCharacteristics - In the implementation block
@property (retain) NSDate * lastUnidentifiedChimeDate;                         //@synthesize lastUnidentifiedChimeDate=_lastUnidentifiedChimeDate - In the implementation block
@property (retain) id<HMDDoorbellChimeControllerContext> context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)configureWithContext:(id)arg1 ;
-(void)dealloc;
-(id)clientIdentifier;
-(void)setContext:(id<HMDDoorbellChimeControllerContext>)arg1 ;
-(id)init;
-(id<HMDDoorbellChimeControllerContext>)context;
-(id)logIdentifier;
-(void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2 ;
-(void)_handleCharacteristicsValueUpdated:(id)arg1 ;
-(void)_notifyAllAccessoriesForDoorbellPressAndPlayChimeSound:(BOOL)arg1 attemptCloudPullIfNoPersonsFound:(BOOL)arg2 ;
-(void)handleCharacteristicsValueUpdated:(id)arg1 ;
-(void)setLastUnidentifiedChimeDate:(NSDate *)arg1 ;
-(NSDate *)lastUnidentifiedChimeDate;
-(void)setAvailableCharacteristics:(NSSet *)arg1 ;
-(NSSet *)availableCharacteristics;
-(void)handleUpdatedPersonIdentificationInformation;
@end
