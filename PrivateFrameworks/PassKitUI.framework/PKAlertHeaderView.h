/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSString, UIImage;

@interface PKAlertHeaderView : UIView {

	UIImageView* _imageView;
	UILabel* _messageLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIImage * image; 
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(NSString *)title;
-(void)layoutSubviews;
-(void)setMessage:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)image;
-(void)shakeTitleView;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
@end

