/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncHistoryItem.h>

@class NSString, GEOComposedWaypoint;

@interface MapsSync.MapsSyncHistoryRideShareItem : MapsSync.MapsSyncHistoryItem {

	 _startWaypoint;
	 _endWaypoint;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) GEOComposedWaypoint * startWaypoint; 
@property (readonly,nonatomic) GEOComposedWaypoint * endWaypoint; 
-(id)initWithObject:(id)arg1 ;
-(GEOComposedWaypoint *)endWaypoint;
-(GEOComposedWaypoint *)startWaypoint;
-(void)setPropertiesWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(Class)managedObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(Class)mutableObjectClass;
-(NSString *)description;
@end

