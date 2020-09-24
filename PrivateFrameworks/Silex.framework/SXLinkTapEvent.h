/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAnalyticsEvent.h>

@class NSURL;

@interface SXLinkTapEvent : SXAnalyticsEvent {

	NSURL* _destinationURL;

}

@property (nonatomic,readonly) NSURL * destinationURL;              //@synthesize destinationURL=_destinationURL - In the implementation block
-(NSURL *)destinationURL;
-(id)initWithDestinationURL:(id)arg1 ;
@end
