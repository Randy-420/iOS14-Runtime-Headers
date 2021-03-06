/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIView, SKUIClientContext, UIButton, UIImageView, SSLookupItemOffer, SKUIItemState, NSMutableArray, UIImage, NSArray, NSString, UIControl;

@interface SKUIBannerView : UIView {

	UILabel* _artistNameLabel;
	UIView* _bottomBorderView;
	SKUIClientContext* _clientContext;
	UIButton* _closeButton;
	UIImageView* _iconImageView;
	SSLookupItemOffer* _itemOffer;
	UIButton* _itemOfferButton;
	SKUIItemState* _itemState;
	UILabel* _itemStateLabel;
	NSMutableArray* _screenshotImageViews;
	UIView* _separatorView;
	UILabel* _titleLabel;
	float _userRating;
	UIImageView* _userRatingStarImageView;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) UIImage * iconImage; 
@property (nonatomic,copy) NSArray * screenshotImages; 
@property (nonatomic,copy) NSString * artistName; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) float userRating;                               //@synthesize userRating=_userRating - In the implementation block
@property (nonatomic,retain) SSLookupItemOffer * itemOffer;                  //@synthesize itemOffer=_itemOffer - In the implementation block
@property (nonatomic,retain) SKUIItemState * itemState;                      //@synthesize itemState=_itemState - In the implementation block
@property (nonatomic,readonly) UIControl * closeButton;                      //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,readonly) UIControl * itemOfferButton; 
-(void)setUserRating:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(NSString *)title;
-(float)userRating;
-(UIImage *)iconImage;
-(SKUIItemState *)itemState;
-(void)layoutSubviews;
-(UIControl *)closeButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(NSString *)artistName;
-(void)setTitle:(NSString *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(SKUIClientContext *)clientContext;
-(void)setItemState:(SKUIItemState *)arg1 ;
-(SSLookupItemOffer *)itemOffer;
-(id)_newDefaultLabel;
-(UIControl *)itemOfferButton;
-(void)setScreenshotImages:(NSArray *)arg1 ;
-(void)setItemOffer:(SSLookupItemOffer *)arg1 ;
-(void)_reloadItemState;
-(NSArray *)screenshotImages;
@end

