/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUArtworkCellContext.h>

@interface SUItemCellContext : SUArtworkCellContext {

	CFDictionaryRef _cachedRatingImages;
	SCD_Struct_SU7* _stringSizeCacheKeyCallBacks;
	CFDictionaryRef _stringSizes;

}

@property (assign,nonatomic) SCD_Struct_SU7* stringSizeCacheKeyCallBacks;              //@synthesize stringSizeCacheKeyCallBacks=_stringSizeCacheKeyCallBacks - In the implementation block
-(void)dealloc;
-(id)init;
-(void)resetLayoutCaches;
-(id)ratingImageForRating:(float)arg1 style:(long long)arg2 ;
-(CGSize)sizeForString:(id)arg1 font:(id)arg2 constrainedToSize:(CGSize)arg3 ;
-(SCD_Struct_SU7*)stringSizeCacheKeyCallBacks;
-(void)setStringSizeCacheKeyCallBacks:(SCD_Struct_SU7*)arg1 ;
@end

