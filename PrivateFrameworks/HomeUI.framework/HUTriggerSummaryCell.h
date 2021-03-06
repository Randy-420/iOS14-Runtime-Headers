/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>
#import <libobjc.A.dylib/HUSelectableCellProtocol.h>

@class HFItem, NSString, UIImage, NSArray, UIColor, UILabel, UIImageView, HUIconListView, UIView, UIFont;

@interface HUTriggerSummaryCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUSelectableCellProtocol> {

	BOOL _disabled;
	BOOL _canBeSelected;
	BOOL _hideTitle;
	BOOL _hideDescription;
	BOOL _hideDescriptionIcon;
	HFItem* _item;
	NSString* _titleText;
	NSString* _descriptionText;
	UIImage* _descriptionIcon;
	NSArray* _iconDescriptors;
	UIColor* _cellColor;
	NSArray* _verticalLabelConstraints;
	NSArray* _horizontalLabelConstraints;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIImageView* _descriptionIconView;
	HUIconListView* _iconContainerView;
	UIView* _textContainerView;
	double _textAlpha;
	UIFont* _titleFont;
	UIFont* _descriptionFont;

}

@property (nonatomic,retain) NSArray * verticalLabelConstraints;                               //@synthesize verticalLabelConstraints=_verticalLabelConstraints - In the implementation block
@property (nonatomic,retain) NSArray * horizontalLabelConstraints;                             //@synthesize horizontalLabelConstraints=_horizontalLabelConstraints - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIImageView * descriptionIconView;                                //@synthesize descriptionIconView=_descriptionIconView - In the implementation block
@property (nonatomic,retain) HUIconListView * iconContainerView;                               //@synthesize iconContainerView=_iconContainerView - In the implementation block
@property (nonatomic,retain) UIView * textContainerView;                                       //@synthesize textContainerView=_textContainerView - In the implementation block
@property (assign,nonatomic) double textAlpha;                                                 //@synthesize textAlpha=_textAlpha - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                               //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) UIFont * descriptionFont;                                         //@synthesize descriptionFont=_descriptionFont - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                             //@synthesize titleText=_titleText - In the implementation block
@property (assign,nonatomic) BOOL hideTitle;                                                   //@synthesize hideTitle=_hideTitle - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                                       //@synthesize descriptionText=_descriptionText - In the implementation block
@property (assign,nonatomic) BOOL hideDescription;                                             //@synthesize hideDescription=_hideDescription - In the implementation block
@property (nonatomic,retain) UIImage * descriptionIcon;                                        //@synthesize descriptionIcon=_descriptionIcon - In the implementation block
@property (assign,nonatomic) BOOL hideDescriptionIcon;                                         //@synthesize hideDescriptionIcon=_hideDescriptionIcon - In the implementation block
@property (nonatomic,retain) NSArray * iconDescriptors;                                        //@synthesize iconDescriptors=_iconDescriptors - In the implementation block
@property (nonatomic,retain) UIColor * cellColor;                                              //@synthesize cellColor=_cellColor - In the implementation block
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL canBeSelected;                                               //@synthesize canBeSelected=_canBeSelected - In the implementation block
-(void)setDisabled:(BOOL)arg1 ;
-(void)setTextAlpha:(double)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)isDisabled;
-(BOOL)hideTitle;
-(UILabel *)titleLabel;
-(void)setTextContainerView:(UIView *)arg1 ;
-(UIView *)textContainerView;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(double)textAlpha;
-(void)updateConstraints;
-(void)setHideTitle:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setUpIconContainerViewConstraints;
-(void)setUpTextContainerViewConstraints;
-(void)_addTitleLabel;
-(void)_addDescriptionLabel;
-(void)setCanBeSelected:(BOOL)arg1 ;
-(HUIconListView *)iconContainerView;
-(UIImageView *)descriptionIconView;
-(void)_addDescriptionIconView;
-(void)updateSelectionUI;
-(void)updateVerticalLabelConstraints;
-(UIImage *)descriptionIcon;
-(UIFont *)titleFont;
-(void)setItem:(HFItem *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)titleText;
-(void)updateHorizontalLabelConstraints;
-(NSArray *)verticalLabelConstraints;
-(void)setVerticalLabelConstraints:(NSArray *)arg1 ;
-(NSArray *)horizontalLabelConstraints;
-(void)setHorizontalLabelConstraints:(NSArray *)arg1 ;
-(void)updateUITextWithResults:(id)arg1 ;
-(void)updateUIIconsWithResults:(id)arg1 ;
-(BOOL)canBeSelected;
-(BOOL)hideDescription;
-(BOOL)hideDescriptionIcon;
-(UIColor *)cellColor;
-(void)setDescriptionIconView:(UIImageView *)arg1 ;
-(void)setIconContainerView:(HUIconListView *)arg1 ;
-(void)setDescriptionFont:(UIFont *)arg1 ;
-(void)setHideDescriptionIcon:(BOOL)arg1 ;
-(HFItem *)item;
-(void)setCellColor:(UIColor *)arg1 ;
-(void)setDescriptionIcon:(UIImage *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)updateTitle;
-(UILabel *)descriptionLabel;
-(UIFont *)descriptionFont;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(NSArray *)iconDescriptors;
-(void)setIconDescriptors:(NSArray *)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setHideDescription:(BOOL)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
@end

