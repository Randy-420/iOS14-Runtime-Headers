/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiAwareDataSessionDelegate <NSObject>
@optional
-(void)dataSession:(id)arg1 receivedControlDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3 onInterfaceIndex:(unsigned)arg4;

@required
-(void)dataSessionRequestStarted:(id)arg1;
-(void)dataSession:(id)arg1 terminatedWithReason:(long long)arg2;
-(void)dataSession:(id)arg1 failedToStartWithError:(long long)arg2;
-(void)dataSession:(id)arg1 confirmedForPeerDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3;

@end

