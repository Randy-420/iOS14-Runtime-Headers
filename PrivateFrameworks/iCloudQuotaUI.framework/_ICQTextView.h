/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudQuotaUI/iCloudQuotaUI-Structs.h>
#import <UIKitCore/UITextView.h>

@class NSString, NSArray, NSDictionary;

@interface _ICQTextView : UITextView {

	NSString* _format;
	NSArray* _links;
	NSDictionary* _attributes;

}

@property (nonatomic,retain) NSString * format;                      //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSArray * links;                        //@synthesize links=_links - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(NSArray *)links;
-(void)setFormat:(NSString *)arg1 ;
-(NSString *)format;
-(BOOL)canBecomeFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSDictionary *)attributes;
-(void)setLinks:(NSArray *)arg1 ;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setAttributedText;
@end

