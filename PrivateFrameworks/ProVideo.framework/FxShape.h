/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxShape : NSObject {

	FxShapePriv* _priv;

}
+(id)shapeWithRect:(CGRect)arg1 ;
+(id)infiniteShape;
-(id)initWithRect:(CGRect)arg1 ;
-(void)dealloc;
-(CGRect)extent;
-(BOOL)isInfinite;
-(id)initWithInfiniteBounds;
-(id)intersectWithShape:(id)arg1 ;
@end

