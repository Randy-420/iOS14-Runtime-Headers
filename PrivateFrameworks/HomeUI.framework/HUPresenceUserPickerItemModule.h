/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemModule.h>

@protocol HUPresenceUserPickerItemModuleDelegate;
@class HUPresenceLocationDeviceFooterItem, HUPresenceActivationOptionItem, HMHome, HFPresenceEventBuilder, HUPresenceUserPickerItemModuleOptions, NSDictionary, HFStaticItemProvider, HULocationDeviceManager, HFItem;

@interface HUPresenceUserPickerItemModule : HFItemModule {

	HUPresenceLocationDeviceFooterItem* _footerItem;
	HUPresenceActivationOptionItem* _singleUserSummaryItem;
	HMHome* _home;
	id<HUPresenceUserPickerItemModuleDelegate> _delegate;
	HFPresenceEventBuilder* _presenceEventBuilder;
	HUPresenceUserPickerItemModuleOptions* _options;
	NSDictionary* _activationOptionStateByGranularity;
	HFStaticItemProvider* _staticItemProvider;
	HULocationDeviceManager* _locationDeviceManager;

}

@property (nonatomic,readonly) NSDictionary * activationOptionStateByGranularity;                     //@synthesize activationOptionStateByGranularity=_activationOptionStateByGranularity - In the implementation block
@property (nonatomic,readonly) HFStaticItemProvider * staticItemProvider;                             //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,readonly) HULocationDeviceManager * locationDeviceManager;                       //@synthesize locationDeviceManager=_locationDeviceManager - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                         //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) id<HUPresenceUserPickerItemModuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HFPresenceEventBuilder * presenceEventBuilder;                         //@synthesize presenceEventBuilder=_presenceEventBuilder - In the implementation block
@property (nonatomic,retain) HUPresenceUserPickerItemModuleOptions * options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) HFItem * footerItem;                                                   //@synthesize footerItem=_footerItem - In the implementation block
@property (nonatomic,readonly) HFItem * singleUserSummaryItem;                                        //@synthesize singleUserSummaryItem=_singleUserSummaryItem - In the implementation block
+(/*^block*/id)_userItemComparator;
+(id)footerSectionID;
+(id)sectionID;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)setOptions:(HUPresenceUserPickerItemModuleOptions *)arg1 ;
-(HUPresenceUserPickerItemModuleOptions *)options;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 presenceEvent:(id)arg3 options:(id)arg4 delegate:(id)arg5 ;
-(NSDictionary *)activationOptionStateByGranularity;
-(HFPresenceEventBuilder *)presenceEventBuilder;
-(BOOL)_isUserHandleSelected:(id)arg1 ;
-(unsigned long long)_activationGranularityForUserItem:(id)arg1 ;
-(void)_updateSelected:(BOOL)arg1 forUserHandle:(id)arg2 ;
-(void)_resetSelectionForCustomLocation;
-(unsigned long long)itemTypeForItem:(id)arg1 ;
-(id)stateForActivationOptionItem:(id)arg1 ;
-(BOOL)_shouldUseSingleUserStyle;
-(id)_sortedActivationGranularities;
-(void)selectUserItem:(id)arg1 ;
-(void)_createItemProviders;
-(HULocationDeviceManager *)locationDeviceManager;
-(void)setDelegate:(id<HUPresenceUserPickerItemModuleDelegate>)arg1 ;
-(id)itemProviders;
-(id<HUPresenceUserPickerItemModuleDelegate>)delegate;
-(HFStaticItemProvider *)staticItemProvider;
-(HFItem *)footerItem;
-(HFItem *)singleUserSummaryItem;
-(id)_allSelectedAndSupportedUsers;
-(BOOL)_canDeselectUserHandle:(id)arg1 ;
-(id)activationOptionItemForGranularity:(unsigned long long)arg1 ;
-(void)selectActivationOptionItem:(id)arg1 ;
-(void)toggleExpandedForActivationOptionItem:(id)arg1 ;
-(id)stateForUserItem:(id)arg1 ;
-(void)deselectUserItem:(id)arg1 ;
-(id)confirmationPromptForOptionItem:(id)arg1 ;
-(BOOL)_isPresenceAuthorizedForUser:(id)arg1 ;
-(HMHome *)home;
@end

