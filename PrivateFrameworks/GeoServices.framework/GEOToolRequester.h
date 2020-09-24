/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOToolProxy.h>

@interface GEOToolRequester : NSObject <GEOToolProxy>
+(id)sharedRequester;
-(id)ping;
-(void)lockDBs;
-(void)unlockDBs;
-(id)getDefault:(id)arg1 source:(long long*)arg2 ;
-(unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1 ;
-(unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2 ;
-(BOOL)notifyNetworkDefaultsChanged;
-(void)invalidateTileCache;
@end
