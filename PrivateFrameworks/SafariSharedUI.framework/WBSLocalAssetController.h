/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSMobileAssetControllerProtocol.h>

@protocol OS_dispatch_queue, WBSMobileAssetControllerDelegate;
@class NSDate, NSURL, NSObject;

@interface WBSLocalAssetController : NSObject <WBSMobileAssetControllerProtocol> {

	NSURL* _url;
	NSObject*<OS_dispatch_queue> _queue;
	id<WBSMobileAssetControllerDelegate> _delegate;

}

@property (__weak) id<WBSMobileAssetControllerDelegate> delegate; 
@property (nonatomic,retain) NSDate * lastUpdateDate; 
@property (nonatomic,readonly) double updateInterval; 
-(id)initWithURL:(id)arg1 ;
-(NSDate *)lastUpdateDate;
-(void)setDelegate:(id<WBSMobileAssetControllerDelegate>)arg1 ;
-(double)updateInterval;
-(id<WBSMobileAssetControllerDelegate>)delegate;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(void)queryURL:(/*^block*/id)arg1 ;
@end
