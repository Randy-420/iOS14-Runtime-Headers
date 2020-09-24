/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class FMFHandle, NSSet, NSString;

@interface FMFNotNowRequest : NSObject <NSCopying, NSSecureCoding> {

	FMFHandle* _fromHandle;
	NSSet* _toHandles;
	NSString* _requestId;

}

@property (nonatomic,retain) NSString * requestId;                //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,retain) FMFHandle * fromHandle;              //@synthesize fromHandle=_fromHandle - In the implementation block
@property (nonatomic,retain) NSSet * toHandles;                   //@synthesize toHandles=_toHandles - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)notNowRequestToHandles:(id)arg1 fromHandle:(id)arg2 ;
-(NSString *)requestId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequestId:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(FMFHandle *)fromHandle;
-(void)setFromHandle:(FMFHandle *)arg1 ;
-(void)setToHandles:(NSSet *)arg1 ;
-(NSSet *)toHandles;
-(id)initWithFromHandle:(id)arg1 toHandle:(id)arg2 requestId:(id)arg3 ;
@end
