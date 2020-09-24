/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _MRUpdateActiveSystemEndpointRequestProtobuf;

@interface MRUpdateActiveSystemEndpointRequest : NSObject <NSCopying> {

	BOOL _pairedDeviceSync;
	NSString* _outputDeviceUID;
	NSString* _reason;
	long long _changeType;
	NSString* _clientBundleIdentifier;

}

@property (nonatomic,copy) NSString * clientBundleIdentifier;                                        //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (assign,getter=isPairedDeviceSync,nonatomic) BOOL pairedDeviceSync;                        //@synthesize pairedDeviceSync=_pairedDeviceSync - In the implementation block
@property (nonatomic,readonly) _MRUpdateActiveSystemEndpointRequestProtobuf * protobuf; 
@property (nonatomic,copy) NSString * outputDeviceUID;                                               //@synthesize outputDeviceUID=_outputDeviceUID - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                        //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long changeType;                                                   //@synthesize changeType=_changeType - In the implementation block
-(NSString *)outputDeviceUID;
-(_MRUpdateActiveSystemEndpointRequestProtobuf *)protobuf;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)perform:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOutputDeviceUID:(NSString *)arg1 ;
-(void)setChangeType:(long long)arg1 ;
-(void)setPairedDeviceSync:(BOOL)arg1 ;
-(NSString *)clientBundleIdentifier;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(long long)changeType;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithOutputDeviceUID:(id)arg1 reason:(id)arg2 ;
-(NSString *)reason;
-(BOOL)isPairedDeviceSync;
-(id)description;
@end
