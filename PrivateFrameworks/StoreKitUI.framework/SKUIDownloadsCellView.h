/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, UIButton, UISlider, NSAttributedString, NSString, UIImage;

@interface SKUIDownloadsCellView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _imageView;
	UIButton* _button;
	UISlider* _progressSlider;
	NSAttributedString* _attributedTitle;
	NSString* _subtitle;
	long long _buttonType;
	BOOL _isPad;

}

@property (nonatomic,retain) NSAttributedString * attributedTitle;              //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) double progress; 
@property (assign,nonatomic) long long buttonType;                              //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,readonly) UIButton * button;                               //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL isPad;                                        //@synthesize isPad=_isPad - In the implementation block
-(BOOL)isPad;
-(NSAttributedString *)attributedTitle;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)subtitle;
-(long long)buttonType;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIButton *)button;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(id)init;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(UIImage *)image;
-(void)setIsPad:(BOOL)arg1 ;
-(double)progress;
-(void)setButtonType:(long long)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
@end
