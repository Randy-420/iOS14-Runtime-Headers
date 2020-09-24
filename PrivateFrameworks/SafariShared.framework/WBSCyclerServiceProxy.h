/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSCyclerServiceProtocol.h>

@class NSXPCConnection;

@interface WBSCyclerServiceProxy : NSObject <WBSCyclerServiceProtocol> {

	NSXPCConnection* _xpcConnection;
	/*^block*/id _errorHandler;

}

@property (nonatomic,copy) id connectionInvalidationHandler; 
@property (nonatomic,copy) id errorHandler;                               //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)setErrorHandler:(id)arg1 ;
-(void)setTestTargetEndpoint:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_cyclerProxy;
-(void)dealloc;
-(void)setValue:(id)arg1 forConfigurationKey:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)startCyclingFromBeginning:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)stopCyclingWithReply:(/*^block*/id)arg1 ;
-(void)sendRequestToTestSuite:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchStatusWithReply:(/*^block*/id)arg1 ;
-(id)connectionInvalidationHandler;
-(void)setConnectionInvalidationHandler:(id)arg1 ;
-(id)init;
-(id)errorHandler;
@end
