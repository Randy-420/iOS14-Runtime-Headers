/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSImageCacheType.h>

@interface TSImageCache : NSObject <TSImageCacheType> {

	 downloader;
	 processor;
	 underlyingCache;
	 fetchDeduper;
	 mainLRU;

}
-(void)fetchImageForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)fetchImageForRequest:(id)arg1 ;
-(void)setImage:(id)arg1 forRequest:(id)arg2 ;
-(void)cancelAllRunningOperations;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithUnderlyingCache:(id)arg1 processor:(id)arg2 downloader:(id)arg3 ;
@end
