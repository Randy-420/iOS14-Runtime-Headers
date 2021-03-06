/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AnalyticsStoreMOHandler;

@interface AnalyticsReader : NSObject {

	AnalyticsStoreMOHandler* _managedObjectHandler;

}

@property (nonatomic,retain) AnalyticsStoreMOHandler * managedObjectHandler;              //@synthesize managedObjectHandler=_managedObjectHandler - In the implementation block
-(BOOL)parsedBeaconInfoIsStored:(id)arg1 ssid:(id)arg2 ;
-(long long)rssiRoamTriggerForBSS:(id)arg1 ssid:(id)arg2 ;
-(id)init;
-(AnalyticsStoreMOHandler *)managedObjectHandler;
-(unsigned long long)manualLeaveCountForBss:(id)arg1 ssid:(id)arg2 ;
-(id)neighborChannelsForBSS:(id)arg1 ssid:(id)arg2 ;
-(void)setManagedObjectHandler:(AnalyticsStoreMOHandler *)arg1 ;
-(long long)autoLeaveRssiForBss:(id)arg1 ssid:(id)arg2 ;
-(id)neighborsForBSS:(id)arg1 ssid:(id)arg2 ;
@end

