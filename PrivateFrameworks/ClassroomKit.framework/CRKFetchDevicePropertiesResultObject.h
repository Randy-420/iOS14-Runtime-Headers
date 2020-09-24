/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchDevicePropertiesResultObject : CATTaskResultObject {

	NSDictionary* _valuesByPropertyKey;
	NSDictionary* _errorsByPropertyKey;

}

@property (nonatomic,copy) NSDictionary * valuesByPropertyKey;              //@synthesize valuesByPropertyKey=_valuesByPropertyKey - In the implementation block
@property (nonatomic,copy) NSDictionary * errorsByPropertyKey;              //@synthesize errorsByPropertyKey=_errorsByPropertyKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)errorsByPropertyKey;
-(NSDictionary *)valuesByPropertyKey;
-(id)valueForPropertyKey:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(void)setValuesByPropertyKey:(NSDictionary *)arg1 ;
-(void)setErrorsByPropertyKey:(NSDictionary *)arg1 ;
@end
