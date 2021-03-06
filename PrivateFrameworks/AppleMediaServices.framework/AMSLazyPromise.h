/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSPromise.h>

@interface AMSLazyPromise : AMSPromise {

	BOOL _executedBlock;
	/*^block*/id _block;
	double _timeout;

}

@property (nonatomic,copy) id block;                          //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL executedBlock;              //@synthesize executedBlock=_executedBlock - In the implementation block
@property (assign,nonatomic) double timeout;                  //@synthesize timeout=_timeout - In the implementation block
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(void)setExecutedBlock:(BOOL)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(id)initWithTimeout:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(id)resultWithError:(id*)arg1 ;
-(double)timeout;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(BOOL)executedBlock;
-(BOOL)_runBlock;
@end

