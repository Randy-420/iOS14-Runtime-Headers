/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SensingProtocols/SensingProtocols-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class GPBMessage, NSMutableDictionary;

@interface GPBAutocreatedDictionary : NSMutableDictionary {

	GPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;

}
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)keyEnumerator;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
@end
