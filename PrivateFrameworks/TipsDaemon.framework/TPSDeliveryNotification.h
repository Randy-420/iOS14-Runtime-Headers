/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsDaemon/TipsDaemon-Structs.h>
#import <TipsCore/TPSSerializableObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TPSDeliveryPrecondition;

@interface TPSDeliveryNotification : TPSSerializableObject <NSCopying> {

	BOOL _suppress;
	BOOL _overrideOptOut;
	TPSDeliveryPrecondition* _precondition;

}

@property (assign,nonatomic) BOOL suppress;                                       //@synthesize suppress=_suppress - In the implementation block
@property (assign,nonatomic) BOOL overrideOptOut;                                 //@synthesize overrideOptOut=_overrideOptOut - In the implementation block
@property (nonatomic,retain) TPSDeliveryPrecondition * precondition;              //@synthesize precondition=_precondition - In the implementation block
+(id)notificationFromDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(BOOL)suppress;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSuppress:(BOOL)arg1 ;
-(BOOL)overrideOptOut;
-(void)setOverrideOptOut:(BOOL)arg1 ;
-(TPSDeliveryPrecondition *)precondition;
-(void)setPrecondition:(TPSDeliveryPrecondition *)arg1 ;
@end
