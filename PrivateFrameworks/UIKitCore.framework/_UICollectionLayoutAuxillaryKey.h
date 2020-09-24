/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UICollectionLayoutAuxillaryKey : NSObject <NSCopying> {

	BOOL _isSupplementary;
	NSString* _elementKind;
	long long _index;
	long long _auxillaryKind;

}

@property (nonatomic,readonly) NSString * elementKind;               //@synthesize elementKind=_elementKind - In the implementation block
@property (nonatomic,readonly) long long index;                      //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long auxillaryKind;              //@synthesize auxillaryKind=_auxillaryKind - In the implementation block
@property (nonatomic,readonly) BOOL isSupplementary;                 //@synthesize isSupplementary=_isSupplementary - In the implementation block
-(BOOL)isSupplementary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)index;
-(id)initWithElementKind:(id)arg1 index:(long long)arg2 auxillaryKind:(long long)arg3 isSupplementary:(BOOL)arg4 ;
-(NSString *)elementKind;
-(long long)auxillaryKind;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
