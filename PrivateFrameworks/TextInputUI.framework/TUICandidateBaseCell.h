/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>

@protocol TUICandidateViewStyle;
@class UIImageView;

@interface TUICandidateBaseCell : UICollectionViewCell {

	id<TUICandidateViewStyle> _style;
	UIImageView* _backgroundImageView;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> style;                //@synthesize style=_style - In the implementation block
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)backgroundImageView;
-(id<TUICandidateViewStyle>)style;
-(void)updateColors;
-(void)updateBackground:(id)arg1 color:(id)arg2 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(id)cellBackgroundImage;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)cellBackgroundColor;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
@end

