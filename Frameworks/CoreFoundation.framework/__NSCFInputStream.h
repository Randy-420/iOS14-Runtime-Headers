/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@interface __NSCFInputStream : NSInputStream
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)open;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)close;
-(BOOL)_tryRetain;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)propertyForKey:(id)arg1 ;
-(unsigned long long)streamStatus;
-(BOOL)hasBytesAvailable;
-(oneway void)release;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_NS9*)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(id)delegate;
-(id)initWithFileAtPath:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(id)streamError;
-(BOOL)_isDeallocating;
-(unsigned long long)hash;
-(id)retain;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
@end

