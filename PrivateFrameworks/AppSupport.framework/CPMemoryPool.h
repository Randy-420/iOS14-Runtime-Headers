/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSMutableArray;

@interface CPMemoryPool : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableArray* _files;
	char* _label;
	unsigned long long _slotLength;

}

@property (nonatomic,readonly) unsigned long long slotLength;              //@synthesize slotLength=_slotLength - In the implementation block
-(unsigned long long)slotLength;
-(void)dealloc;
-(id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithLabel:(const char*)arg1 slotLength:(unsigned long long)arg2 ;
@end
