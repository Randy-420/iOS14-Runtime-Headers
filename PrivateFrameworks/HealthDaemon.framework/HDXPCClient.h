/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDXPCProcess, NSXPCConnection;

@interface HDXPCClient : NSObject {

	HDXPCProcess* _process;
	NSXPCConnection* _connection;

}

@property (readonly) HDXPCProcess * process;                    //@synthesize process=_process - In the implementation block
@property (readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)clientWithConnection:(id)arg1 error:(id*)arg2 ;
-(NSXPCConnection *)connection;
-(HDXPCProcess *)process;
-(id)initWithConnection:(id)arg1 process:(id)arg2 ;
-(id)initWithProcess:(id)arg1 ;
-(id)_initWithConnection:(id)arg1 process:(id)arg2 ;
-(id)description;
@end
