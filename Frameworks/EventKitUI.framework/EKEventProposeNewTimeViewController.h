/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/EKCalendarItemEditItemDelegate.h>
#import <libobjc.A.dylib/EKEventDateEditItemDelegate.h>
#import <libobjc.A.dylib/EKUIEventStatusButtonsViewDelegate.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@class NSDate, EKEvent, EKUIEventStatusButtonsView, SingleToolbarItemContainerView, NSArray, EKEventDateEditItem, EKUIInviteesViewOriginalConflictSection, EKUIInviteesViewSomeInviteesCanAttendSection, EKUIInviteesViewAllInviteesCanAttendSection, EKInviteeAlternativeTimeSearcher, EKUIInviteesViewMessageSendingManager, NSString;

@interface EKEventProposeNewTimeViewController : UITableViewController <EKEditItemViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, EKCalendarItemEditItemDelegate, EKEventDateEditItemDelegate, EKUIEventStatusButtonsViewDelegate, EKEditItemViewControllerProtocol> {

	BOOL _resetConflictResolutionSections;
	BOOL _viewIsVisible;
	NSDate* _selectedStartDate;
	NSDate* _selectedEndDate;
	NSDate* _originalDate;
	EKEvent* _event;
	EKUIEventStatusButtonsView* _statusButtonsView;
	SingleToolbarItemContainerView* _statusButtonsContainerView;
	double _statusButtonsViewCachedFontSize;
	NSDate* _proposedStartDate;
	NSArray* _sections;
	EKEventDateEditItem* _proposeTimeItem;
	EKUIInviteesViewOriginalConflictSection* _originalConflictSection;
	EKUIInviteesViewSomeInviteesCanAttendSection* _someInviteesCanAttendSection;
	EKUIInviteesViewAllInviteesCanAttendSection* _allInviteesCanAttendSection;
	EKInviteeAlternativeTimeSearcher* _availabilitySearcher;
	EKUIInviteesViewMessageSendingManager* _messageSendingManager;

}

@property (nonatomic,retain) NSDate * originalDate;                                                                    //@synthesize originalDate=_originalDate - In the implementation block
@property (assign,nonatomic) BOOL resetConflictResolutionSections;                                                     //@synthesize resetConflictResolutionSections=_resetConflictResolutionSections - In the implementation block
@property (assign,nonatomic) BOOL viewIsVisible;                                                                       //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                                                          //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) EKUIEventStatusButtonsView * statusButtonsView;                                           //@synthesize statusButtonsView=_statusButtonsView - In the implementation block
@property (nonatomic,retain) SingleToolbarItemContainerView * statusButtonsContainerView;                              //@synthesize statusButtonsContainerView=_statusButtonsContainerView - In the implementation block
@property (assign,nonatomic) double statusButtonsViewCachedFontSize;                                                   //@synthesize statusButtonsViewCachedFontSize=_statusButtonsViewCachedFontSize - In the implementation block
@property (nonatomic,retain) NSDate * proposedStartDate;                                                               //@synthesize proposedStartDate=_proposedStartDate - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                                       //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) EKEventDateEditItem * proposeTimeItem;                                                    //@synthesize proposeTimeItem=_proposeTimeItem - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewOriginalConflictSection * originalConflictSection;                        //@synthesize originalConflictSection=_originalConflictSection - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewSomeInviteesCanAttendSection * someInviteesCanAttendSection;              //@synthesize someInviteesCanAttendSection=_someInviteesCanAttendSection - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewAllInviteesCanAttendSection * allInviteesCanAttendSection;                //@synthesize allInviteesCanAttendSection=_allInviteesCanAttendSection - In the implementation block
@property (nonatomic,retain) EKInviteeAlternativeTimeSearcher * availabilitySearcher;                                  //@synthesize availabilitySearcher=_availabilitySearcher - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewMessageSendingManager * messageSendingManager;                            //@synthesize messageSendingManager=_messageSendingManager - In the implementation block
@property (nonatomic,readonly) NSDate * selectedStartDate;                                                             //@synthesize selectedStartDate=_selectedStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * selectedEndDate;                                                               //@synthesize selectedEndDate=_selectedEndDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
+(id)_participantsInArray:(id)arg1 thatAreNotInArray:(id)arg2 ;
-(double)eventStatusButtonsViewButtonFontSize:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)initWithEvent:(id)arg1 ;
-(EKUIInviteesViewMessageSendingManager *)messageSendingManager;
-(NSDate *)proposedStartDate;
-(BOOL)viewIsVisible;
-(void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2 ifCancelled:(/*^block*/id)arg3 ;
-(void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2 ;
-(id)_statusButtons;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setMessageSendingManager:(EKUIInviteesViewMessageSendingManager *)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)setViewIsVisible:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setEvent:(EKEvent *)arg1 ;
-(EKEvent *)event;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setProposedStartDate:(NSDate *)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setOriginalDate:(NSDate *)arg1 ;
-(void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(id)editItemEventToDetach;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 ;
-(void)dealloc;
-(void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2 ;
-(void)editItem:(id)arg1 wantsDoneButtonDisabled:(BOOL)arg2 ;
-(void)dateChangedTo:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSDate *)selectedStartDate;
-(NSDate *)selectedEndDate;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_dismiss:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)setResetConflictResolutionSections:(BOOL)arg1 ;
-(void)_searcherStateChanged:(long long)arg1 ;
-(void)_eventModified:(id)arg1 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)setAvailabilitySearcher:(EKInviteeAlternativeTimeSearcher *)arg1 ;
-(EKInviteeAlternativeTimeSearcher *)availabilitySearcher;
-(void)setStatusButtonsViewCachedFontSize:(double)arg1 ;
-(SingleToolbarItemContainerView *)statusButtonsContainerView;
-(EKUIEventStatusButtonsView *)statusButtonsView;
-(void)_updateStatusButtons;
-(void)_fontSizeDefinitionsChanged:(id)arg1 ;
-(void)updateCustomBackButton;
-(void)updateCheckmark;
-(EKEventDateEditItem *)proposeTimeItem;
-(void)setProposeTimeItem:(EKEventDateEditItem *)arg1 ;
-(void)setOriginalConflictSection:(EKUIInviteesViewOriginalConflictSection *)arg1 ;
-(EKUIInviteesViewOriginalConflictSection *)originalConflictSection;
-(EKUIInviteesViewAllInviteesCanAttendSection *)allInviteesCanAttendSection;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setAllInviteesCanAttendSection:(EKUIInviteesViewAllInviteesCanAttendSection *)arg1 ;
-(void)setSomeInviteesCanAttendSection:(EKUIInviteesViewSomeInviteesCanAttendSection *)arg1 ;
-(EKUIInviteesViewSomeInviteesCanAttendSection *)someInviteesCanAttendSection;
-(long long)_indexForSection:(id)arg1 ;
-(BOOL)proposedTimeChanged;
-(id)_sectionForIndex:(unsigned long long)arg1 ;
-(void)_dismissPresentedViewControllerAnimated:(BOOL)arg1 ;
-(double)statusButtonsViewCachedFontSize;
-(id)_viewControllerForPresentingViewControllers;
-(BOOL)resetConflictResolutionSections;
-(id)defaultAlertTitleForEditItem:(id)arg1 ;
-(void)editItem:(id)arg1 wantsRowReload:(id)arg2 ;
-(void)setStatusButtonsView:(EKUIEventStatusButtonsView *)arg1 ;
-(void)setStatusButtonsContainerView:(SingleToolbarItemContainerView *)arg1 ;
-(void)_presentViewController:(id)arg1 ;
-(NSArray *)sections;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_refreshIfNeeded;
-(NSDate *)originalDate;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end
