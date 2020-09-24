/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSString;

@interface AXMText : NSObject {

	NSString* _text;
	double _confidence;
	CGRect _boundingBox;

}

@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGRect boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
@property (assign,nonatomic) double confidence;               //@synthesize confidence=_confidence - In the implementation block
-(double)confidence;
-(NSString *)text;
-(void)setBoundingBox:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(CGRect)boundingBox;
-(void)setConfidence:(double)arg1 ;
@end
