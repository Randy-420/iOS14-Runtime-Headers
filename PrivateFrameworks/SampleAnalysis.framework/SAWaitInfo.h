/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSString;

@interface SAWaitInfo : NSObject <SASerializable> {

	unsigned short _type;
	unsigned long long _owner;
	unsigned long long _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned short type;                           //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long owner;                      //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned long long context;                    //@synthesize context=_context - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
-(unsigned long long)owner;
-(long long)compare:(id)arg1 ;
-(unsigned short)type;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)context;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA18*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(id)initWithKCDataWaitInfo:(const stackshot_thread_waitinfo*)arg1 ;
-(id)descriptionForPid:(int)arg1 tid:(unsigned long long)arg2 options:(unsigned long long)arg3 nameCallback:(/*^block*/id)arg4 ;
@end

