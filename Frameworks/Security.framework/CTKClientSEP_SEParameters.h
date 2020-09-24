/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Security/Security-Structs.h>
@class NSData;

@interface CTKClientSEP_SEParameters : NSObject {

	aks_params_sRef _params;
	NSData* _encoded;

}

@property (copy,readonly) NSData * data; 
@property (readonly) const void* bytes; 
@property (readonly) unsigned long long length; 
-(void)setData:(id)arg1 forKey:(unsigned)arg2 ;
-(void)setNumber:(long long)arg1 forKey:(unsigned)arg2 ;
-(NSData *)data;
-(const void*)bytes;
-(void)dealloc;
-(unsigned long long)length;
-(id)init;
-(id)initWithParameters:(id)arg1 ;
@end
