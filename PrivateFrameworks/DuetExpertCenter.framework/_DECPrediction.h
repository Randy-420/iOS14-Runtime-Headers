/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, _DECPredictionExpiry, NSDictionary, NSDate;

@interface _DECPrediction : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _items;
	_DECPredictionExpiry* _expiry;
	long long _reason;
	NSDictionary* _reasonMetadata;
	NSDate* _creationDate;

}

@property (nonatomic,retain) NSArray * items;                              //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) long long reason;                             //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSDictionary * reasonMetadata;                //@synthesize reasonMetadata=_reasonMetadata - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                        //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) _DECPredictionExpiry * expiry;              //@synthesize expiry=_expiry - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predictionWithItems:(id)arg1 expiry:(id)arg2 ;
-(NSArray *)items;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(void)setReason:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)reasonMetadata;
-(NSDate *)creationDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setReasonMetadata:(NSDictionary *)arg1 ;
-(long long)reason;
-(_DECPredictionExpiry *)expiry;
-(id)description;
-(void)filterItems:(id)arg1 ;
-(id)initWithItems:(id)arg1 expiry:(id)arg2 ;
@end

