/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>

@class SXAdRequest, NSString;

@interface NUSilexRequestAdContextProvider : NSObject <NUAdContextProvider> {

	SXAdRequest* _request;

}

@property (nonatomic,readonly) SXAdRequest * request;               //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXAdRequest *)request;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(id)contextProvidersForKeyPath:(id)arg1 ;
-(id)initWithAdRequest:(id)arg1 ;
-(id)creativeTypeFromBannerType:(unsigned long long)arg1 ;
@end
