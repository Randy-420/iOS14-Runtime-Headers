/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFormat.h>

@interface BWMetadataFormat : BWFormat {

	opaqueCMFormatDescriptionRef _desc;

}
+(void)initialize;
+(id)formatWithMetadataFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(id)debugDescription;
-(void)dealloc;
-(id)_initWithMetadataFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)description;
@end

