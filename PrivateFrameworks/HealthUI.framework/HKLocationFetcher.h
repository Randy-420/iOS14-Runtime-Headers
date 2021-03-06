/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _HKLocationShifter, _HKWorkoutRouteStore, HKHealthStore, HKAnchoredObjectQuery;

@interface HKLocationFetcher : NSObject {

	_HKLocationShifter* _shifter;
	_HKWorkoutRouteStore* _routesStore;
	HKHealthStore* _healthStore;
	HKAnchoredObjectQuery* _routesQuery;

}

@property (nonatomic,retain) _HKWorkoutRouteStore * routesStore;               //@synthesize routesStore=_routesStore - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                      //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKAnchoredObjectQuery * routesQuery;              //@synthesize routesQuery=_routesQuery - In the implementation block
@property (nonatomic,retain) _HKLocationShifter * shifter;                     //@synthesize shifter=_shifter - In the implementation block
-(void)dealloc;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(_HKLocationShifter *)shifter;
-(HKHealthStore *)healthStore;
-(id)initWithHealthStore:(id)arg1 ;
-(void)fetchLocationsFromWorkout:(id)arg1 applyThreshold:(BOOL)arg2 withSamplesHandler:(/*^block*/id)arg3 ;
-(_HKWorkoutRouteStore *)routesStore;
-(void)_handleAndShiftLocations:(id)arg1 forWorkout:(id)arg2 withSamplesHandler:(/*^block*/id)arg3 ;
-(void)fetchRoutesFromWorkout:(id)arg1 withUpdateHandler:(/*^block*/id)arg2 ;
-(id)_workoutRoutesQueryForWorkout:(id)arg1 withUpdateHandler:(/*^block*/id)arg2 ;
-(BOOL)_routesAreSmoothed:(id)arg1 ;
-(void)fetchLocationsFromWorkout:(id)arg1 withSamplesHandler:(/*^block*/id)arg2 ;
-(void)setShifter:(_HKLocationShifter *)arg1 ;
-(void)setRoutesStore:(_HKWorkoutRouteStore *)arg1 ;
-(HKAnchoredObjectQuery *)routesQuery;
-(void)setRoutesQuery:(HKAnchoredObjectQuery *)arg1 ;
@end

