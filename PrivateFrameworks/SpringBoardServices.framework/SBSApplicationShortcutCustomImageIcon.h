/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSData;

@interface SBSApplicationShortcutCustomImageIcon : SBSApplicationShortcutIcon {

	BOOL _isTemplate;
	NSData* _imageData;
	long long _dataType;

}

@property (nonatomic,readonly) NSData * imageData;                 //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) long long dataType;                 //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) BOOL isTemplate;                    //@synthesize isTemplate=_isTemplate - In the implementation block
@property (nonatomic,readonly) NSData * imagePNGData; 
-(id)_scui_iconImageWithAssetProvider:(id)arg1 ;
-(id)_scui_iconImageForCachedBitmapData:(id)arg1 scale:(double)arg2 ;
-(NSData *)imageData;
-(long long)dataType;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithImageData:(id)arg1 dataType:(long long)arg2 isTemplate:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isTemplate;
-(NSData *)imagePNGData;
-(id)_initForSubclass;
-(id)initWithImageData:(id)arg1 dataType:(long long)arg2 ;
-(id)initWithImagePNGData:(id)arg1 ;
@end

