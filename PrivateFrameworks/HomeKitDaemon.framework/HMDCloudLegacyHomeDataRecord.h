/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCloudRecord.h>

@class NSData;

@interface HMDCloudLegacyHomeDataRecord : HMDCloudRecord

@property (nonatomic,retain) NSData * dataVersion2; 
+(id)legacyModelWithHomeDataV0:(id)arg1 homeDataV2:(id)arg2 ;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)clearData;
-(id)recordType;
-(id)extractObjectChange;
-(unsigned long long)objectEncoding;
-(BOOL)encodeObjectChange:(id)arg1 ;
-(NSData *)dataVersion2;
-(void)setDataVersion2:(NSData *)arg1 ;
@end

