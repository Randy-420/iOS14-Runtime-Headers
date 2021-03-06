/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableDictionary;

@interface CNHeap : NSObject {

	NSString* _rawDataString;
	NSMutableArray* _heapObjects;
	NSMutableDictionary* _heapObjectsByClassAndBinary;

}

@property (retain) NSString * rawDataString;                                                 //@synthesize rawDataString=_rawDataString - In the implementation block
@property (retain) NSMutableArray * heapObjects;                                             //@synthesize heapObjects=_heapObjects - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * heapObjectsByClassAndBinary;              //@synthesize heapObjectsByClassAndBinary=_heapObjectsByClassAndBinary - In the implementation block
-(NSString *)rawDataString;
-(void)setRawDataString:(NSString *)arg1 ;
-(NSMutableArray *)heapObjects;
-(void)setHeapObjects:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)heapObjectsByClassAndBinary;
-(void)setHeapObjectsByClassAndBinary:(NSMutableDictionary *)arg1 ;
@end

