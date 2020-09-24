/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthToolbox/WDSourceStoredDataViewController.h>

@class UILabel;

@interface WDWatchStoredDataViewController : WDSourceStoredDataViewController {

	UILabel* _messageLabel;
	BOOL _watchPaired;

}

@property (assign) BOOL watchPaired;              //@synthesize watchPaired=_watchPaired - In the implementation block
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateFont;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)_shouldDisplayPrivacySection;
-(void)updateTableHeaderViewForUnpairedWatch;
-(void)handlePairedDevicesSnapshot:(id)arg1 ;
-(void)addUnpairedWatchHeaderView;
-(BOOL)watchPaired;
-(void)setWatchPaired:(BOOL)arg1 ;
@end
