/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, SKUIClientContext;

@interface SKUISettingsContext : NSObject {

	NSMutableDictionary* _elementTypeClass;
	NSMutableArray* _descriptionReusePool;
	NSMutableArray* _viewReusePool;
	SKUIClientContext* _clientContext;

}

@property (assign,nonatomic,__weak) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)dequeueReusableSettingDescriptionForViewElement:(id)arg1 parent:(id)arg2 ;
-(void)recycleSettingDescriptions:(id)arg1 ;
-(void)_registerReuseClasses;
-(id)_dequeueReusableSettingDescriptionWithReuseIdentifier:(id)arg1 forViewElement:(id)arg2 parent:(id)arg3 ;
-(void)_registerClass:(Class)arg1 forReuseIdentifier:(id)arg2 ;
@end
