/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSStickerBrowserViewDataSource.h>

@class NSMutableArray, NSString;

@interface _MSStickerPackCollectionViewDataSource : NSObject <MSStickerBrowserViewDataSource> {

	long long _stickerSize;
	NSMutableArray* _stickers;

}

@property (nonatomic,readonly) NSMutableArray * stickers;              //@synthesize stickers=_stickers - In the implementation block
@property (nonatomic,readonly) long long stickerSize;                  //@synthesize stickerSize=_stickerSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_stickerSizeFromString:(id)arg1 ;
-(long long)numberOfStickersInStickerBrowserView:(id)arg1 ;
-(id)stickerBrowserView:(id)arg1 stickerAtIndex:(long long)arg2 ;
-(NSMutableArray *)stickers;
-(void)_loadStickerPackWithURL:(id)arg1 ;
-(id)initWithStickerPackURL:(id)arg1 ;
-(long long)stickerSize;
-(id)_allStickers;
@end

