/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNGroupIdentityActionItemDelegate;
@class NSString, UIImage;

@interface CNGroupIdentityActionItem : NSObject {

	BOOL _shouldOverrideEnabledState;
	BOOL _overrideEnabledState;
	BOOL _shouldPresentDisambiguationUI;
	NSString* _title;
	NSString* _actionType;
	UIImage* _image;
	/*^block*/id _actionBlock;
	id<CNGroupIdentityActionItemDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CNGroupIdentityActionItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * actionType;                                            //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) id actionBlock;                                                       //@synthesize actionBlock=_actionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldOverrideEnabledState;                                    //@synthesize shouldOverrideEnabledState=_shouldOverrideEnabledState - In the implementation block
@property (assign,nonatomic) BOOL overrideEnabledState;                                          //@synthesize overrideEnabledState=_overrideEnabledState - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentDisambiguationUI;                                 //@synthesize shouldPresentDisambiguationUI=_shouldPresentDisambiguationUI - In the implementation block
-(NSString *)actionType;
-(id)initWithTitle:(id)arg1 actionType:(id)arg2 actionBlock:(/*^block*/id)arg3 ;
-(id)initWithTitle:(id)arg1 actionType:(id)arg2 image:(id)arg3 actionBlock:(/*^block*/id)arg4 ;
-(id)initWithTitle:(id)arg1 actionType:(id)arg2 systemImageName:(id)arg3 overrideEnabledState:(BOOL)arg4 actionBlock:(/*^block*/id)arg5 ;
-(id)initWithTitle:(id)arg1 actionType:(id)arg2 systemImageName:(id)arg3 actionBlock:(/*^block*/id)arg4 ;
-(void)setOverrideEnabledState:(BOOL)arg1 ;
-(BOOL)shouldOverrideEnabledState;
-(void)setShouldOverrideEnabledState:(BOOL)arg1 ;
-(BOOL)overrideEnabledState;
-(BOOL)shouldPresentDisambiguationUI;
-(void)setShouldPresentDisambiguationUI:(BOOL)arg1 ;
-(NSString *)title;
-(void)setDelegate:(id<CNGroupIdentityActionItemDelegate>)arg1 ;
-(UIImage *)image;
-(id<CNGroupIdentityActionItemDelegate>)delegate;
-(void)setActionBlock:(id)arg1 ;
-(id)actionBlock;
@end

