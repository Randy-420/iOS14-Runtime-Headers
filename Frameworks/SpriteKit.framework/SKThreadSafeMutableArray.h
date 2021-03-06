/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSArray;

@interface SKThreadSafeMutableArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {

	opaque_pthread_mutex_t _storageLock;
	NSMutableArray* _storage;

}

@property (__weak,readonly) NSArray * arrayRepresentation; 
-(NSArray *)arrayRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(id)description;
-(id)initWithNSMutableArray:(id)arg1 ;
@end

