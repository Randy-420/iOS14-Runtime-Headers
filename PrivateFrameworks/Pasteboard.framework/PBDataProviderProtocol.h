/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBDataProviderProtocol <NSObject>
@required
-(void)waitForItemRequestsDeliveryCompletion:(/*^block*/id)arg1;
-(void)helloCompletionBlock:(/*^block*/id)arg1;
-(void)loadRepresentationForItemAtIndex:(unsigned long long)arg1 type:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)callCleanupBlockWithUUID:(id)arg1;

@end

