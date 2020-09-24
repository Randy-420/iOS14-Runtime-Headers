/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CellularBridgeUI/CellularBridgeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol NPHBSCellularConfirmationCodeViewControllerDelegate;
@class NPHSetupTableViewCell, UILabel, UITableView, NSLayoutConstraint, NSString;

@interface NPHBSCellularConfirmationCodeViewController : UIViewController <UITextFieldDelegate> {

	NPHSetupTableViewCell* _confirmationCodeCell;
	id<NPHBSCellularConfirmationCodeViewControllerDelegate> _delegate;
	UILabel* _confirmationCodeTitleLabel;
	UITableView* _infoTableView;
	NSLayoutConstraint* _infoTableViewHeightConstraint;

}

@property (assign,nonatomic,__weak) id<NPHBSCellularConfirmationCodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UILabel * confirmationCodeTitleLabel;                                          //@synthesize confirmationCodeTitleLabel=_confirmationCodeTitleLabel - In the implementation block
@property (assign,nonatomic,__weak) UITableView * infoTableView;                                                   //@synthesize infoTableView=_infoTableView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * infoTableViewHeightConstraint;                            //@synthesize infoTableViewHeightConstraint=_infoTableViewHeightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)init;
-(void)setDelegate:(id<NPHBSCellularConfirmationCodeViewControllerDelegate>)arg1 ;
-(id<NPHBSCellularConfirmationCodeViewControllerDelegate>)delegate;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)confirm:(id)arg1 ;
-(UILabel *)confirmationCodeTitleLabel;
-(void)setConfirmationCodeTitleLabel:(UILabel *)arg1 ;
-(UITableView *)infoTableView;
-(void)setInfoTableView:(UITableView *)arg1 ;
-(NSLayoutConstraint *)infoTableViewHeightConstraint;
-(void)setInfoTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end
