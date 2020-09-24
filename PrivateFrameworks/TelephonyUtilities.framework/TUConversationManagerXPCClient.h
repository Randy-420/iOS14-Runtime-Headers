/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUConversationManagerXPCClient.h>

@protocol TUConversationManagerXPCClient <TUConversationMediaControllerXPCClient>
@required
-(oneway void)updateConversationsByGroupUUID:(id)arg1;

@end

#import <libobjc.A.dylib/TUConversationManagerDataSource.h>

@protocol TUConversationManagerDataSourceDelegate, TUConversationMediaControllerDataSourceDelegate, OS_dispatch_queue;
@class NSDictionary, NSObject, NSXPCConnection, NSString;

@interface TUConversationManagerXPCClient : NSObject <TUConversationManagerXPCClient, TUConversationManagerDataSource> {

	BOOL _hasRequestedInitialState;
	BOOL _shouldConnectToHost;
	int _shouldConnectToken;
	id<TUConversationManagerDataSourceDelegate> _delegate;
	id<TUConversationMediaControllerDataSourceDelegate> _mediaDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	NSDictionary* _conversationsByGroupUUID;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                       //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) BOOL hasRequestedInitialState;                                                         //@synthesize hasRequestedInitialState=_hasRequestedInitialState - In the implementation block
@property (assign,nonatomic) int shouldConnectToken;                                                                //@synthesize shouldConnectToken=_shouldConnectToken - In the implementation block
@property (assign,nonatomic) BOOL shouldConnectToHost;                                                              //@synthesize shouldConnectToHost=_shouldConnectToHost - In the implementation block
@property (nonatomic,copy) NSDictionary * conversationsByGroupUUID;                                                 //@synthesize conversationsByGroupUUID=_conversationsByGroupUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TUConversationManagerDataSourceDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<TUConversationMediaControllerDataSourceDelegate> mediaDelegate;              //@synthesize mediaDelegate=_mediaDelegate - In the implementation block
+(id)asynchronousServer;
+(void)setSynchronousServer:(id)arg1 ;
+(id)synchronousServer;
+(id)conversationManagerServerXPCInterface;
+(id)conversationManagerClientXPCInterface;
+(id)conversationManagerAllowedClasses;
+(void)setAsynchronousServer:(id)arg1 ;
-(id)synchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)handleServerDisconnect;
-(BOOL)hasRequestedInitialState;
-(void)setHasRequestedInitialState:(BOOL)arg1 ;
-(void)registerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)buzzMember:(id)arg1 conversation:(id)arg2 ;
-(void)setShouldConnectToHost:(BOOL)arg1 ;
-(void)invalidate;
-(void)setShouldConnectToken:(int)arg1 ;
-(void)setMediaDelegate:(id<TUConversationMediaControllerDataSourceDelegate>)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2 ;
-(void)dealloc;
-(void)_requestInitialStateIfNecessary;
-(BOOL)shouldConnectToHost;
-(void)setConversationsByGroupUUID:(NSDictionary *)arg1 ;
-(oneway void)mediaPrioritiesChangedForConversation:(id)arg1 ;
-(void)_invokeCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDelegate:(id<TUConversationManagerDataSourceDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(oneway void)updateConversationsByGroupUUID:(id)arg1 ;
-(int)shouldConnectToken;
-(id<TUConversationManagerDataSourceDelegate>)delegate;
-(void)setDownlinkMuted:(BOOL)arg1 forRemoteParticipantsInConversation:(id)arg2 ;
-(void)_requestInitialStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)conversationsByGroupUUID;
-(id<TUConversationMediaControllerDataSourceDelegate>)mediaDelegate;
-(id)serverWithErrorHandler:(/*^block*/id)arg1 ;
-(void)addRemoteMembers:(id)arg1 toConversation:(id)arg2 ;
@end
