/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/Email-Structs.h>
#import <Email/EMObjectID.h>

@class EMMessageCollectionItemID, EMMailboxScope;

@interface EMMessageObjectID : EMObjectID {

	EMMessageCollectionItemID* _collectionItemID;
	EMMailboxScope* _mailboxScope;

}

@property (nonatomic,readonly) EMMessageCollectionItemID * collectionItemID;              //@synthesize collectionItemID=_collectionItemID - In the implementation block
@property (nonatomic,readonly) long long globalMessageID; 
@property (nonatomic,readonly) EMMailboxScope * mailboxScope;                             //@synthesize mailboxScope=_mailboxScope - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)globalMessageID;
-(id)initWithCollectionItemID:(id)arg1 predicate:(id)arg2 mailboxTypeResolver:(id)arg3 ;
-(id)initWithCollectionItemID:(id)arg1 mailboxScope:(id)arg2 ;
-(EMMessageCollectionItemID *)collectionItemID;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithGlobalMessageID:(long long)arg1 mailboxScope:(id)arg2 ;
-(EMMailboxScope *)mailboxScope;
-(id)description;
@end
