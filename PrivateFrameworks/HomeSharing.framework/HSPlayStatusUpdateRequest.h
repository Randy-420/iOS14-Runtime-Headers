/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSPlayStatusUpdateRequest : HSRequest {

	unsigned _interfaceID;
	unsigned _revisionID;

}

@property (nonatomic,readonly) unsigned interfaceID;              //@synthesize interfaceID=_interfaceID - In the implementation block
@property (nonatomic,readonly) unsigned revisionID;               //@synthesize revisionID=_revisionID - In the implementation block
-(unsigned)interfaceID;
-(unsigned)revisionID;
-(double)timeoutInterval;
-(BOOL)isConcurrent;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)initWithInterfaceID:(unsigned)arg1 revisionID:(unsigned)arg2 ;
@end
