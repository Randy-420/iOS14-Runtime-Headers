/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKPaymentContentItem;

@interface PKPaymentContentDataItem : PKPaymentDataItem {

	PKPaymentContentItem* _contentItem;

}

@property (nonatomic,readonly) PKPaymentContentItem * contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
+(long long)dataType;
+(BOOL)supportsMultipleItems;
-(PKPaymentContentItem *)contentItem;
-(BOOL)isValidWithError:(id*)arg1 ;
-(id)initWithContentItem:(id)arg1 ;
@end

