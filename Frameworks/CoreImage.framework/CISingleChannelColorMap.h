/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISingleChannelColorMap : CIFilter {

	CIImage* inputImage;
	NSNumber* inputChannelIndex;
	NSNumber* inputShouldNormalize;
	NSNumber* inputColorMapIndex;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputChannelIndex; 
@property (nonatomic,retain) NSNumber * inputShouldNormalize; 
@property (nonatomic,retain) NSNumber * inputColorMapIndex; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(NSNumber *)inputChannelIndex;
-(void)setInputChannelIndex:(NSNumber *)arg1 ;
-(NSNumber *)inputShouldNormalize;
-(void)setInputShouldNormalize:(NSNumber *)arg1 ;
-(NSNumber *)inputColorMapIndex;
-(void)setInputColorMapIndex:(NSNumber *)arg1 ;
-(id)outputImage;
@end
