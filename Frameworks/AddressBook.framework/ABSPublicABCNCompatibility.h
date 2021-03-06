/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ABSPublicABCNCompatibility : NSObject
+(void*)publicABPersonFromContact:(id)arg1 contactStore:(id)arg2 publicAddressBook:(const void*)arg3 ;
+(int)publicMultiValueIdentifierFromLabeledValue:(id)arg1 contactStore:(id)arg2 ;
+(id)labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3 contactStore:(id)arg4 ;
+(id)contactStoreForPublicAddressBook:(void*)arg1 ;
+(BOOL)overwritePublicABPerson:(void*)arg1 withContact:(id)arg2 ;
+(id)contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2 mutable:(BOOL)arg3 ;
+(BOOL)updateNewPublicABPerson:(void*)arg1 withSavedContact:(id)arg2 inAddressBook:(void*)arg3 ;
+(id)contactPropertyKeyFromPublicABPropertyID:(int)arg1 ;
+(int)publicABPropertyIDFromContactPropertyKey:(id)arg1 ;
+(id)contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2 ;
+(id)createAddressBookForConversion;
@end

