/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>

@interface STAskForTimeGroupSpecifierProvider : STRootGroupSpecifierProvider
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)requestSpecifiers;
-(void)confirmRespondToRequest:(id)arg1 ;
-(id)_createSpecifierForAskForMore:(id)arg1 ;
-(void)respondToRequest:(id)arg1 withApproval:(BOOL)arg2 timeApproved:(id)arg3 ;
@end
