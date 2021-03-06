/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PCInterfaceUsabilityMonitorProtocol <PCInterfaceMonitorProtocol>
@property (nonatomic,readonly) BOOL isRadioHot; 
@property (assign,nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate; 
@required
-(void)setThresholdOffTransitionCount:(unsigned long long)arg1;
-(void)setTrackUsability:(BOOL)arg1;
-(void)setDelegate:(id)arg1;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
-(BOOL)isRadioHot;
-(void)setTrackedTimeInterval:(double)arg1;

@end

