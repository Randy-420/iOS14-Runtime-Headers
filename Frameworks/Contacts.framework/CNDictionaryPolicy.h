/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPermissivePolicy.h>

@class NSDictionary;

@interface CNDictionaryPolicy : CNPermissivePolicy {

	NSDictionary* _policyDictionary;

}
-(id)unsupportedAttributesForLableledContactProperty:(id)arg1 ;
-(BOOL)isContactPropertySupported:(id)arg1 ;
-(id)contactRestrictionsForLabeledProperty:(id)arg1 ;
-(id)supportedLabelsForContactProperty:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2 ;
@end

