/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PBItemDetection : NSObject <NSSecureCoding> {

	BOOL _present;
	id _value;

}

@property (nonatomic,readonly) BOOL present;              //@synthesize present=_present - In the implementation block
@property (nonatomic,readonly) id value;                  //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_allowedValueClasses;
+(id)detectionAbsent;
+(id)detectionPresent;
+(id)detectionPresentWithValue:(id)arg1 ;
-(BOOL)present;
-(id)value;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPresent:(BOOL)arg1 value:(id)arg2 ;
@end

