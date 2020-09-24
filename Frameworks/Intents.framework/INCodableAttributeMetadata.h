/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSString, INCodableAttribute, INCodableDescription, INCodableLocalizationTable;

@interface INCodableAttributeMetadata : NSObject <NSSecureCoding, INCodableCoding> {

	NSString* _name;
	NSString* _placeholder;
	NSString* _placeholderID;
	INCodableAttribute* _codableAttribute;

}

@property (nonatomic,__weak,readonly) INCodableAttribute * codableAttribute;                      //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,__weak,readonly) INCodableDescription * _codableDescription; 
@property (nonatomic,copy,readonly) INCodableLocalizationTable * _localizationTable; 
@property (nonatomic,copy,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                                //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) NSString * placeholderID;                                              //@synthesize placeholderID=_placeholderID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedPlaceholder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)wf_contentItemForValue:(id)arg1 ;
-(void)wf_updateWithParameterState:(id)arg1 ;
-(void)wf_updateWithParameterValue:(id)arg1 ;
-(Class)wf_objectClass;
-(Class)wf_parameterClass;
-(void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2 ;
-(BOOL)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 codableAttribute:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(INCodableDescription *)_codableDescription;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INCodableAttribute *)codableAttribute;
-(id)_localizedDialogTokensWithLocalizer:(id)arg1 ;
-(NSString *)placeholder;
-(void)setPlaceholder:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)placeholderID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 codableAttribute:(id)arg2 ;
-(void)setPlaceholderID:(NSString *)arg1 ;
-(NSString *)localizedPlaceholder;
-(id)localizedPlaceholderWithLocalizer:(id)arg1 ;
-(id)__INCodableDescriptionPlaceholderIDKey;
-(id)__INCodableDescriptionPlaceholderKey;
-(id)__INIntentResponseCodableDescriptionPlaceholderKey;
-(id)__INTypeCodableDescriptionPlaceholderKey;
-(id)__INIntentResponseCodableDescriptionPlaceholderIDKey;
-(id)__INTypeCodableDescriptionPlaceholderIDKey;
-(INCodableLocalizationTable *)_localizationTable;
-(NSString *)name;
-(NSString *)description;
-(id)dictionaryRepresentation;
@end
