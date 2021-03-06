/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BMBookmark.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BMProtoBufWrapper.h>

@class NSString;

@interface BMStoreBookmark : NSObject <BMBookmark, NSSecureCoding, BMProtoBufWrapper> {

	NSString* _streamId;
	NSString* _segmentName;
	double _iterationStartTime;
	unsigned long long _offset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * streamId;                    //@synthesize streamId=_streamId - In the implementation block
@property (nonatomic,readonly) NSString * segmentName;                 //@synthesize segmentName=_segmentName - In the implementation block
@property (nonatomic,readonly) double iterationStartTime;              //@synthesize iterationStartTime=_iterationStartTime - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)streamId;
-(id)encodeAsProto;
-(id)initWithProto:(id)arg1 ;
-(id)proto;
-(id)initWithStream:(id)arg1 segment:(id)arg2 iterationStartTime:(double)arg3 offset:(unsigned long long)arg4 ;
-(void)dealloc;
-(unsigned long long)offset;
-(double)iterationStartTime;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)initWithProtoData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionDict;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)segmentName;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
@end

