/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUICacheCoding.h>

@class NSString, NSMutableDictionary;

@interface SKUIReview : NSObject <SKUICacheCoding> {

	NSString* _body;
	NSString* _dateString;
	float _rating;
	NSString* _reviewer;
	NSString* _title;

}

@property (nonatomic,readonly) NSString * body;                                        //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) NSString * dateString;                                  //@synthesize dateString=_dateString - In the implementation block
@property (nonatomic,readonly) float rating;                                           //@synthesize rating=_rating - In the implementation block
@property (nonatomic,readonly) NSString * reviewer;                                    //@synthesize reviewer=_reviewer - In the implementation block
@property (nonatomic,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)body;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSString *)title;
-(NSString *)reviewer;
-(NSString *)dateString;
-(float)rating;
-(id)initWithReviewDictionary:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(id)formattedBylineWithClientContext:(id)arg1 ;
@end

