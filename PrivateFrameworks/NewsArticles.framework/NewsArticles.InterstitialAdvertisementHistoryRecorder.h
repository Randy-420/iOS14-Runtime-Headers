/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAInterstitialAdvertisementHistoryRecorder.h>

@interface NewsArticles.InterstitialAdvertisementHistoryRecorder : _UKNOWN_SUPERCLASS_ <NAInterstitialAdvertisementHistoryRecorder> {

	 articlesSeenSinceLastInterstitial;

}

@property (assign,nonatomic) long long articlesSeenSinceLastInterstitial; 
-(long long)articlesSeenSinceLastInterstitial;
-(void)recordInterstitialAdView;
-(void)recordArticleView;
-(void)setArticlesSeenSinceLastInterstitial:(long long)arg1 ;
@end
