/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation;

@interface ATXLocationManagerKnownLOIs : NSObject <NSSecureCoding> {

	CLLocation* Home;
	CLLocation* Work;
	CLLocation* School;
	CLLocation* Gym;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

