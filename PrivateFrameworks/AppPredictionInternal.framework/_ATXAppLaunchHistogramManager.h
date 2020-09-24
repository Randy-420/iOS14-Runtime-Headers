/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _ATXDataStore, NSObject, NSDictionary, NSMutableDictionary;

@interface _ATXAppLaunchHistogramManager : NSObject {

	_ATXDataStore* _datastore;
	NSObject*<OS_dispatch_queue> _backgroundSaverQueue;
	NSDictionary* _parameters;
	NSMutableDictionary* _histograms;
	NSMutableDictionary* _categoricalHistograms;
	long long _SSIDPruningMethod;
	int _maxSSIDCount;
	long long _actionConfirmsRejectsPruningMethod;
	int _maxActionConfirmsRejectsActionCount;
	int _maxAppSpecificLocationMaxKeyCount;
	int _maxAppCoarseLocationMaxKeyCount;
	int _maxAppZoom7GeoHashMaxKeyCount;
	long long _appJointContextPruningMethod;
	int _maxAppJointContextKeyCount;
	BOOL _persistentStore;

}

@property (nonatomic,readonly) BOOL persistentStore;              //@synthesize persistentStore=_persistentStore - In the implementation block
+(id)sharedInstance;
+(void)resetSharedInstance;
+(void)resetDataForCategoricalHistograms;
+(void)useTemporarySharedInstance:(id)arg1 ;
+(void)releaseTemporarySharedInstance;
+(BOOL)isHistogramDeprecated:(long long)arg1 ;
-(BOOL)persistentStore;
-(id)initWithPersistentStore;
-(id)initAndPersist:(BOOL)arg1 ;
-(id)initWithInMemoryStore;
-(unsigned long long)getHistogramPruningMethodFromAsset:(id)arg1 ;
-(id)init;
-(id)histogramForLaunchType:(long long)arg1 ;
-(void)exchangeDatastore:(id)arg1 ;
-(id)categoricalHistogramForLaunchType:(long long)arg1 ;
-(int)getHistogramMaxCategoryCountFromAsset:(id)arg1 ;
@end
