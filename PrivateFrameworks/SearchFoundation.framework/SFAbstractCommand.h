/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/CRReferentialCommand.h>
#import <libobjc.A.dylib/SFAbstractCommand.h>
@class SFCommandValue, NSDictionary, NSData;


@protocol SFAbstractCommand <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) SFCommandValue * value; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setValue:(id)arg1;
-(int)type;
-(SFCommandValue *)value;
-(void)setType:(int)arg1;
-(NSData *)jsonData;
-(NSDictionary *)dictionaryRepresentation;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SFCommandValue, NSDictionary, NSData;

@interface SFAbstractCommand : NSObject <CRReferentialCommand, SFAbstractCommand, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _type;
	SFCommandValue* _value;

}

@property (nonatomic,copy,readonly) NSString * referenceIdentifier; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) SFCommandValue * value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)inuickp_intrinsicInteractiveBehavior;
-(NSString *)referenceIdentifier;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(SFCommandValue *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)hasType;
-(int)type;
-(SFCommandValue *)value;
-(id)initWithCoder:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)jsonData;
-(NSDictionary *)dictionaryRepresentation;
@end

