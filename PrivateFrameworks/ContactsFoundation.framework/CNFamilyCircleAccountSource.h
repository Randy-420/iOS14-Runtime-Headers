/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNDelegateAccountSource.h>

@class FAFamilyCircle, NSString;

@interface CNFamilyCircleAccountSource : NSObject <CNDelegateAccountSource> {

	FAFamilyCircle* _familyCircle;

}

@property (nonatomic,readonly) FAFamilyCircle * familyCircle;              //@synthesize familyCircle=_familyCircle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FAFamilyCircle *)familyCircle;
-(id)initWithFamilyCircle:(id)arg1 ;
-(id)delegateAccounts;
-(id)myFamilyMemberRecord;
-(id)primaryAccount;
-(NSString *)description;
@end
