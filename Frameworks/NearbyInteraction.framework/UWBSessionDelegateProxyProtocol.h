/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UWBSessionDelegateProxyProtocol <NSObject>
@required
-(void)uwbSessionDidFailWithError:(id)arg1;
-(void)uwbSessionDidInvalidateWithError:(id)arg1;
-(void)uwbSystemDidChangeState:(unsigned long long)arg1;
-(void)didUpdateNearbyObjects:(id)arg1;
-(void)didRemoveNearbyObjects:(id)arg1 withReason:(unsigned long long)arg2;
-(void)uwbSessionInterruptedWithReason:(long long)arg1 timestamp:(double)arg2;
-(void)uwbSessionInterruptionReasonEnded:(long long)arg1 timestamp:(double)arg2;

@end

