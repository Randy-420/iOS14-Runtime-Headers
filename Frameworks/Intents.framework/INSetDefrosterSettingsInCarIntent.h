/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetDefrosterSettingsInCarIntentExport.h>

@class NSNumber, INSpeakableString, NSString;

@interface INSetDefrosterSettingsInCarIntent : INIntent <INSetDefrosterSettingsInCarIntentExport>

@property (nonatomic,copy,readonly) NSNumber * enable; 
@property (nonatomic,readonly) long long defroster; 
@property (nonatomic,copy,readonly) INSpeakableString * carName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)enable;
-(id)verb;
-(id)_dictionaryRepresentation;
-(INSpeakableString *)carName;
-(id)_metadata;
-(void)setCarName:(INSpeakableString *)arg1 ;
-(id)initWithEnable:(id)arg1 defroster:(long long)arg2 ;
-(void)setEnable:(NSNumber *)arg1 ;
-(long long)defroster;
-(void)setDefroster:(long long)arg1 ;
-(void)setVerb:(id)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(id)initWithEnable:(id)arg1 defroster:(long long)arg2 carName:(id)arg3 ;
-(void)setDomain:(id)arg1 ;
@end
