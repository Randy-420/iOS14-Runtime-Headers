/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKViewElement, NSString;

@interface _TVShadowViewElementID : NSObject <NSCopying> {

	IKViewElement* _viewElement;
	NSString* _itemID;

}

@property (nonatomic,copy,readonly) NSString * itemID;                   //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)itemID;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(IKViewElement *)viewElement;
-(id)initWithViewElement:(id)arg1 ;
@end
