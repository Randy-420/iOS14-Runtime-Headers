/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDQueryServerClientState : NSObject <NSCopying> {

	unsigned _applicationState;

}

@property (nonatomic,readonly) unsigned applicationState;                        //@synthesize applicationState=_applicationState - In the implementation block
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
-(BOOL)isForeground;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isSuspended;
-(id)init;
-(unsigned)applicationState;
-(id)initWithApplicationState:(unsigned)arg1 ;
-(id)description;
@end
