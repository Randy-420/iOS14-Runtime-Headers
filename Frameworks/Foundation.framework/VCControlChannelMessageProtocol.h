/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSData;


@protocol VCControlChannelMessageProtocol <NSObject>
@property (readonly) unsigned long long VCCCLength; 
@property (readonly) NSString * VCCCString; 
@property (readonly) NSData * VCCCData; 
@property (readonly) NSString * VCCCPayloadKey; 
@required
-(NSString *)VCCCString;
-(BOOL)VCCCGetBytes:(char*)arg1 size:(unsigned)arg2;
-(unsigned long long)VCCCLength;
-(NSString *)VCCCPayloadKey;
-(NSData *)VCCCData;

@end
