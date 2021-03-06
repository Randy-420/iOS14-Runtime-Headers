/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUCallProviderManagerXPCClient.h>

@protocol TUCallProviderManagerXPCClient <NSObject>
@required
-(oneway void)updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3;

@end

#import <libobjc.A.dylib/TUCallProviderManagerDataSource.h>

@protocol TUCallProviderManagerDataSourceDelegate, OS_dispatch_queue;
@class NSDictionary, NSObject, NSXPCConnection, NSString;

@interface TUCallProviderManagerXPCClient : NSObject <TUCallProviderManagerXPCClient, TUCallProviderManagerDataSource> {

	BOOL _requestedInitialState;
	int _token;
	id<TUCallProviderManagerDataSourceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	NSDictionary* _providersByIdentifier;
	NSDictionary* _localProvidersByIdentifier;
	NSDictionary* _pairedHostDeviceProvidersByIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                          //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) int token;                                                                //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) BOOL requestedInitialState;                                               //@synthesize requestedInitialState=_requestedInitialState - In the implementation block
@property (nonatomic,copy) NSDictionary * providersByIdentifier;                                       //@synthesize providersByIdentifier=_providersByIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * localProvidersByIdentifier;                                  //@synthesize localProvidersByIdentifier=_localProvidersByIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * pairedHostDeviceProvidersByIdentifier;                       //@synthesize pairedHostDeviceProvidersByIdentifier=_pairedHostDeviceProvidersByIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL currentProcessCanAccessInitialState; 
@property (assign,nonatomic,__weak) id<TUCallProviderManagerDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)asynchronousServer;
+(id)callProviderManagerServerXPCInterface;
+(id)callProviderManagerAllowedClasses;
+(void)setSynchronousServer:(id)arg1 ;
+(id)synchronousServer;
+(id)callProviderManagerClientXPCInterface;
+(void)setAsynchronousServer:(id)arg1 ;
-(id)synchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(BOOL)openURL:(id)arg1 isSensitive:(BOOL)arg2 error:(id*)arg3 ;
-(void)invalidate;
-(NSDictionary *)providersByIdentifier;
-(void)launchAppForDialRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)donateUserIntentForProviderWithIdentifier:(id)arg1 ;
-(void)setProvidersByIdentifier:(NSDictionary *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)_requestInitialState;
-(void)blockUntilInitialStateReceived;
-(void)setPairedHostDeviceProvidersByIdentifier:(NSDictionary *)arg1 ;
-(void)setToken:(int)arg1 ;
-(void)dealloc;
-(BOOL)requestedInitialState;
-(int)token;
-(oneway void)updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3 ;
-(id)init;
-(void)setDelegate:(id<TUCallProviderManagerDataSourceDelegate>)arg1 ;
-(void)setRequestedInitialState:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDictionary *)localProvidersByIdentifier;
-(void)setLocalProvidersByIdentifier:(NSDictionary *)arg1 ;
-(id<TUCallProviderManagerDataSourceDelegate>)delegate;
-(id)server;
-(void)_updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3 ;
-(BOOL)currentProcessCanAccessInitialState;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)serverWithErrorHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)pairedHostDeviceProvidersByIdentifier;
@end

