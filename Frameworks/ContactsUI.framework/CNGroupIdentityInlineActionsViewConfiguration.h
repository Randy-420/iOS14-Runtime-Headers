/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface CNGroupIdentityInlineActionsViewConfiguration : NSObject {

	BOOL _displaysUnavailableActionTypes;
	NSArray* _supportedActionTypes;
	NSDictionary* _actionsPerType;

}

@property (nonatomic,readonly) BOOL displaysUnavailableActionTypes;              //@synthesize displaysUnavailableActionTypes=_displaysUnavailableActionTypes - In the implementation block
@property (nonatomic,readonly) NSArray * supportedActionTypes;                   //@synthesize supportedActionTypes=_supportedActionTypes - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionsPerType;                    //@synthesize actionsPerType=_actionsPerType - In the implementation block
-(id)initWithActions:(id)arg1 displaysUnavailableActionTypes:(BOOL)arg2 ;
-(BOOL)displaysUnavailableActionTypes;
-(id)initWithDefaultActionItems:(id)arg1 displaysUnavailableActionTypes:(BOOL)arg2 ;
-(NSDictionary *)actionsPerType;
-(NSArray *)supportedActionTypes;
@end
