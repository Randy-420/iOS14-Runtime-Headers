/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASLazyPlist : NSObject
+(id)propertyListWithData:(id)arg1 error:(id*)arg2 ;
+(BOOL)isLazyPlistLikelyContainedInData:(id)arg1 format:(unsigned long long*)arg2 ;
+(id)fileBackedDataWithPropertyList:(id)arg1 appendedToFd:(int)arg2 format:(unsigned long long)arg3 startOfs:(long long*)arg4 error:(id*)arg5 ;
+(void)setSerializationStatsHandler:(/*^block*/id)arg1 ;
+(BOOL)isLazyPlistLikelyContainedInFileAtPath:(id)arg1 format:(unsigned long long*)arg2 ;
+(id)fileBackedDataWithPropertyList:(id)arg1 appendedToFd:(int)arg2 startOfs:(long long*)arg3 error:(id*)arg4 ;
+(id)fileBackedDataWithPropertyList:(id)arg1 writtenToPath:(id)arg2 format:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)arrayWithPath:(id)arg1 error:(id*)arg2 ;
+(id)dataWithPropertyList:(id)arg1 error:(id*)arg2 ;
+(/*^block*/id)serializationStatsHandler;
+(id)dictionaryWithPath:(id)arg1 error:(id*)arg2 ;
+(id)dictionaryWithData:(id)arg1 error:(id*)arg2 ;
+(id)dataWithPropertyList:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
+(/*^block*/id)deserializationStatsHandler;
+(id)propertyListWithPath:(id)arg1 error:(id*)arg2 ;
+(id)propertyListWithPath:(id)arg1 fileRange:(NSRange)arg2 error:(id*)arg3 ;
+(id)fileBackedDataWithPropertyList:(id)arg1 writtenToPath:(id)arg2 error:(id*)arg3 ;
+(id)arrayWithData:(id)arg1 error:(id*)arg2 ;
+(void)setDeserializationStatsHandler:(/*^block*/id)arg1 ;
-(id)init;
@end
