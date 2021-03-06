/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface BCSConfigurationManager : NSObject {

	NSXPCConnection* _serviceConnection;

}

@property (nonatomic,retain) NSXPCConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)serviceConnection;
-(void)setUpQRCodeControlCenterModuleWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)processAppClipImageWithURL:(id)arg1 scale:(double)arg2 completion:(/*^block*/id)arg3 ;
@end

