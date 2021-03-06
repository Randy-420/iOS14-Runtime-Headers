/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCStreaming.h>

@protocol FCStreaming;
@class NSString;

@interface FCTransformedStream : NSObject <FCStreaming> {

	/*^block*/id _transformBlock;
	id<FCStreaming> _stream;

}

@property (nonatomic,copy) id transformBlock;                                //@synthesize transformBlock=_transformBlock - In the implementation block
@property (nonatomic,retain) id<FCStreaming> stream;                         //@synthesize stream=_stream - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FCStreaming>)stream;
-(void)setStream:(id<FCStreaming>)arg1 ;
-(BOOL)isFinished;
-(id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)transformBlock;
-(void)setTransformBlock:(id)arg1 ;
-(id)init;
-(id)initWithStream:(id)arg1 transformBlock:(/*^block*/id)arg2 ;
@end

