/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying;
#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIFocusGroupDescriptor : NSObject {

	struct {
		unsigned isStringIdentifier : 1;
	}  _flags;
	id<NSObject><NSCopying> _identifier;

}
+(id)_stringIdentifierMapTable;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)_stringIdentifier;
-(id)description;
@end
