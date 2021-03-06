/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class PKFamilyMember, UIImage, PKFamilyMemberRowModel;

@interface PKFamilyMemberTableViewCell : UITableViewCell {

	PKFamilyMember* _familyMember;
	UIImage* _familyMemberImage;
	unsigned long long _state;
	PKFamilyMemberRowModel* _rowModel;

}

@property (nonatomic,retain) PKFamilyMemberRowModel * rowModel;              //@synthesize rowModel=_rowModel - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(PKFamilyMemberRowModel *)rowModel;
-(void)prepareForReuse;
-(void)setRowModel:(PKFamilyMemberRowModel *)arg1 ;
-(void)layoutSubviews;
-(void)setFamilyMemberImage:(id)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)setFamilyMember:(id)arg1 ;
@end

