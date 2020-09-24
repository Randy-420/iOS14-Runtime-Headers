/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Navigation/Navigation-Structs.h>
@interface MNRouteCoordinateWithType : NSObject {

	unsigned long long _significanceType;
	PolylineCoordinate _routeCoordinate;

}

@property (assign,nonatomic) unsigned long long significanceType;              //@synthesize significanceType=_significanceType - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeCoordinate;               //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
+(id)divergenceCoordinate:(PolylineCoordinate)arg1 ;
+(id)convergenceCoordinate:(PolylineCoordinate)arg1 ;
-(void)setRouteCoordinate:(PolylineCoordinate)arg1 ;
-(unsigned long long)significanceType;
-(PolylineCoordinate)routeCoordinate;
-(id)description;
-(void)setSignificanceType:(unsigned long long)arg1 ;
@end
