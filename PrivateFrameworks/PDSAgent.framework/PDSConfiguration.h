/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDSAgent/PDSAgent-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, OS_dispatch_workloop;
@class NSObject, NSURL;

@interface PDSConfiguration : NSObject <NSCopying> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_workloop> _workloop;
	NSURL* _daemonRootDirectory;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_workloop> workloop;              //@synthesize workloop=_workloop - In the implementation block
@property (nonatomic,retain) NSURL * daemonRootDirectory;                           //@synthesize daemonRootDirectory=_daemonRootDirectory - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)daemonRootDirectory;
-(void)setDaemonRootDirectory:(NSURL *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(void)setWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
@end

