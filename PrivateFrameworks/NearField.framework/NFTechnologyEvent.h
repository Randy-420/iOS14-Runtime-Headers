/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NFTechnologyEvent : NSObject <NSSecureCoding> {

	unsigned char _valueAddedServiceMode;
	BOOL _vasSupported;
	BOOL _touchIDRequired;
	unsigned short _systemCode;
	unsigned _technology;
	unsigned _terminalType;

}

@property (nonatomic,readonly) unsigned technology;                              //@synthesize technology=_technology - In the implementation block
@property (nonatomic,readonly) unsigned char valueAddedServiceMode;              //@synthesize valueAddedServiceMode=_valueAddedServiceMode - In the implementation block
@property (nonatomic,readonly) unsigned short systemCode;                        //@synthesize systemCode=_systemCode - In the implementation block
@property (nonatomic,readonly) BOOL vasSupported;                                //@synthesize vasSupported=_vasSupported - In the implementation block
@property (nonatomic,readonly) BOOL touchIDRequired;                             //@synthesize touchIDRequired=_touchIDRequired - In the implementation block
@property (nonatomic,readonly) unsigned terminalType;                            //@synthesize terminalType=_terminalType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)technology;
-(unsigned)terminalType;
-(unsigned char)valueAddedServiceMode;
-(id)description;
-(unsigned short)systemCode;
-(id)initWithTechnology:(unsigned)arg1 andValueAddedServiceMode:(unsigned)arg2 andSystemCode:(unsigned short)arg3 ;
-(id)initWithTechnology:(unsigned)arg1 andValueAddedServiceMode:(unsigned)arg2 ;
-(id)initWithFieldNotification:(id)arg1 ;
-(BOOL)vasSupported;
-(BOOL)touchIDRequired;
@end

