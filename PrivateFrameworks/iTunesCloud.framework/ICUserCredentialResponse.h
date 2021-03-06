/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICUserIdentityProperties;

@interface ICUserCredentialResponse : NSObject {

	ICUserIdentityProperties* _identityProperties;
	ICUserIdentityProperties* _iCloudIdentityProperties;

}

@property (nonatomic,copy) ICUserIdentityProperties * identityProperties;                    //@synthesize identityProperties=_identityProperties - In the implementation block
@property (nonatomic,copy) ICUserIdentityProperties * iCloudIdentityProperties;              //@synthesize iCloudIdentityProperties=_iCloudIdentityProperties - In the implementation block
-(ICUserIdentityProperties *)identityProperties;
-(void)setIdentityProperties:(ICUserIdentityProperties *)arg1 ;
-(void)setICloudIdentityProperties:(ICUserIdentityProperties *)arg1 ;
-(ICUserIdentityProperties *)iCloudIdentityProperties;
@end

