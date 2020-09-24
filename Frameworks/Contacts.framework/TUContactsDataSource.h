/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUContactsDataSource <NSObject>
@optional
-(id)contactForIdentifier:(id)arg1 keysToFetch:(id)arg2;
-(id)contactForDestinationId:(id)arg1 keysToFetch:(id)arg2;

@required
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
-(const void*)personFromContact:(id)arg1;
-(id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;

@end
