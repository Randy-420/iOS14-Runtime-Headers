/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASTConnection;
@class NSMutableData;

@interface ASTNetworkObject : NSObject {

	id<ASTConnection> _connection;
	NSMutableData* _receivedData;

}

@property (nonatomic,retain) id<ASTConnection> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;              //@synthesize receivedData=_receivedData - In the implementation block
-(NSMutableData *)receivedData;
-(id<ASTConnection>)connection;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(void)setConnection:(id<ASTConnection>)arg1 ;
@end

