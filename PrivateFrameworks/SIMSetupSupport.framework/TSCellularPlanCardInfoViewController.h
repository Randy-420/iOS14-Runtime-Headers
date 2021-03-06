/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMSetupSupport/SIMSetupSupport-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class NSString, NSArray, UITextField, UIBarButtonItem, UILabel, UITableView, NSLayoutConstraint, UIScrollView;

@interface TSCellularPlanCardInfoViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, TSSetupFlowItem> {

	NSString* _fauxCardData;
	NSArray* _tableData;
	UITextField* _activeTextField;
	CGSize _keyboardSize;
	UIBarButtonItem* _nextButton;
	id<TSSIMSetupFlowDelegate> _delegate;
	UILabel* _enterActivationLabel;
	UITableView* _infoTableView;
	NSLayoutConstraint* _infoTableViewHeightConstraint;
	UIScrollView* _scrollView;

}

@property (assign,nonatomic,__weak) id<TSSIMSetupFlowDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UILabel * enterActivationLabel;                                  //@synthesize enterActivationLabel=_enterActivationLabel - In the implementation block
@property (assign,nonatomic,__weak) UITableView * infoTableView;                                     //@synthesize infoTableView=_infoTableView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * infoTableViewHeightConstraint;              //@synthesize infoTableViewHeightConstraint=_infoTableViewHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                       //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)init;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id<TSSIMSetupFlowDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIScrollView *)scrollView;
-(BOOL)canBeShownFromSuspendedState;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)keyboardWasShown:(id)arg1 ;
-(void)keyboardWillBeHidden:(id)arg1 ;
-(UITableView *)infoTableView;
-(void)setInfoTableView:(UITableView *)arg1 ;
-(NSLayoutConstraint *)infoTableViewHeightConstraint;
-(void)setInfoTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)scrollViewForKeyboardIfNecessary;
-(UILabel *)enterActivationLabel;
-(void)setEnterActivationLabel:(UILabel *)arg1 ;
-(void)addNewPlanWithUserInfo:(id)arg1 ;
@end

