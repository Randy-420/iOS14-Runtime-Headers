/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXFill.h>

@class NSString;

@interface SXRepeatableImageFill : SXFill

@property (nonatomic,readonly) NSString * imageIdentifier; 
@property (nonatomic,readonly) SXConvertibleValue width; 
@property (nonatomic,readonly) SXConvertibleValue height; 
@property (nonatomic,readonly) unsigned long long repeat; 
-(unsigned long long)repeat;
-(SXConvertibleValue)height;
-(SXConvertibleValue)width;
-(NSString *)imageIdentifier;
-(unsigned long long)repeatWithValue:(id)arg1 withType:(int)arg2 ;
@end
