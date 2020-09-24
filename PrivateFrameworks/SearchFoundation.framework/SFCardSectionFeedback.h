/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@protocol SFCardSection;
@class NSString;

@interface SFCardSectionFeedback : SFFeedback {

	id<SFCardSection> _cardSection;
	NSString* _cardSectionId;
	NSString* _resultId;

}

@property (nonatomic,retain) id<SFCardSection> cardSection;              //@synthesize cardSection=_cardSection - In the implementation block
@property (nonatomic,copy) NSString * cardSectionId;                     //@synthesize cardSectionId=_cardSectionId - In the implementation block
@property (nonatomic,copy) NSString * resultId;                          //@synthesize resultId=_resultId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id<SFCardSection>)cardSection;
-(void)setCardSection:(id<SFCardSection>)arg1 ;
-(void)setCardSectionId:(NSString *)arg1 ;
-(NSString *)resultId;
-(void)setResultId:(NSString *)arg1 ;
-(NSString *)cardSectionId;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCardSection:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
