/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionItemView.h>

@class MKBarView, _MKUILabel, UIView, NSArray, NSString;

@interface MKRatingPlatterView : MKPlaceSectionItemView {

	MKBarView* _ratingCategoryBarView;
	_MKUILabel* _categoryLabel;
	UIView* _containerView;
	NSArray* _constraints;
	double _score;
	double _scale;

}

@property (nonatomic,copy) NSString * categoryName; 
@property (assign,nonatomic) double score;                       //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) double scale;                       //@synthesize scale=_scale - In the implementation block
-(void)_setupConstraints;
-(void)_updateAppearance;
-(double)scale;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)score;
-(void)setScore:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setupSubviews;
-(void)_contentSizeChanged;
-(void)_setupInitialAppearance;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
@end

