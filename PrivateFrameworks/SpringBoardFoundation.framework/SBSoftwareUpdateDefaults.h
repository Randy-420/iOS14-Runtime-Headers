/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBSoftwareUpdateDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,getter=hasDeveloperInstallBrickAlertShown7DayWarning,nonatomic) BOOL developerInstallBrickAlertShown7DayWarning; 
@property (assign,getter=hasDeveloperInstallBrickAlertShown3DayWarning,nonatomic) BOOL developerInstallBrickAlertShown3DayWarning; 
@property (assign,getter=hasDeveloperInstallBrickAlertShownTomorrowWarning,nonatomic) BOOL developerInstallBrickAlertShownTomorrowWarning; 
-(void)setDeveloperInstallBrickAlertShown3DayWarning:(BOOL)arg1 ;
-(BOOL)hasDeveloperInstallBrickAlertShown3DayWarning;
-(void)setDeveloperInstallBrickAlertShown7DayWarning:(BOOL)arg1 ;
-(BOOL)hasDeveloperInstallBrickAlertShown7DayWarning;
-(void)setDeveloperInstallBrickAlertShownTomorrowWarning:(BOOL)arg1 ;
-(BOOL)hasDeveloperInstallBrickAlertShownTomorrowWarning;
-(void)clearDeveloperInstallBrickAlerts;
-(void)_bindAndRegisterDefaults;
@end
