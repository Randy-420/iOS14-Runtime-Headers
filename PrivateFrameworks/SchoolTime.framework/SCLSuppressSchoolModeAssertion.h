/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SchoolTime/SchoolTime-Structs.h>
@class NSUUID, NSXPCConnection, NSString;

@interface SCLSuppressSchoolModeAssertion : NSObject {

	os_unfair_lock_s _lock;
	NSUUID* _UUID;
	NSXPCConnection* _connection;
	unsigned long long _state;
	NSString* _explanation;

}

@property (nonatomic,copy,readonly) NSString * explanation;              //@synthesize explanation=_explanation - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)connectionInterrupted;
-(void)invalidate;
-(void)connectionInvalidated;
-(id)initWithExplanation:(id)arg1 ;
-(void)acquireWithInvalidationHandler:(/*^block*/id)arg1 ;
-(BOOL)acquireWithError:(out id*)arg1 ;
-(NSString *)explanation;
-(BOOL)isValid;
-(id)description;
@end

