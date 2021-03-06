/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol CHHapticPlayable <NSObject>
@property (readonly) NSArray * events; 
@property (readonly) NSArray * parameters; 
@property (readonly) NSArray * parameterCurves; 
@property (readonly) double duration; 
@required
-(NSArray *)events;
-(NSArray *)parameters;
-(double)duration;
-(NSArray *)parameterCurves;
-(id)resolveExternalResources:(id)arg1 error:(id*)arg2;

@end

