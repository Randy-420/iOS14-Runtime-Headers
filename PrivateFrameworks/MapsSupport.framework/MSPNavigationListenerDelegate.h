/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPNavigationListenerDelegate <NSObject>
@required
-(void)navigationListenerRouteUpdated:(id)arg1;
-(void)navigationListenerStopped:(id)arg1;
-(void)navigationListenerTrafficUpdated:(id)arg1;
-(void)navigationListenerETAUpdated:(id)arg1;
-(void)navigationListenerIsReady:(id)arg1;
-(void)navigationListener:(id)arg1 didFailWithError:(id)arg2;
-(void)navigationListenerArrived:(id)arg1;
-(void)navigationListenerDestinationUpdated:(id)arg1;

@end

