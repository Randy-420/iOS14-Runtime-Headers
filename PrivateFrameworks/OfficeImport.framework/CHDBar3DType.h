/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CHDBar2DType.h>

@interface CHDBar3DType : CHDBar2DType {

	int mGapDepth;
	int mShapeType;

}
+(BOOL)is3DType;
+(id)stringWithShapeType:(int)arg1 ;
-(int)shapeType;
-(void)setShapeType:(int)arg1 ;
-(id)initWithChart:(id)arg1 ;
-(void)setGapDepth:(int)arg1 ;
-(int)gapDepth;
@end

