/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ECIMAPCopyInfo : NSObject {

	unsigned _uidValidity;
	NSDictionary* _sourceUIDsToDestinationUIDs;

}

@property (assign,nonatomic) unsigned uidValidity;                                    //@synthesize uidValidity=_uidValidity - In the implementation block
@property (nonatomic,retain) NSDictionary * sourceUIDsToDestinationUIDs;              //@synthesize sourceUIDsToDestinationUIDs=_sourceUIDsToDestinationUIDs - In the implementation block
-(unsigned)uidValidity;
-(void)setUidValidity:(unsigned)arg1 ;
-(NSDictionary *)sourceUIDsToDestinationUIDs;
-(void)setSourceUIDsToDestinationUIDs:(NSDictionary *)arg1 ;
@end

