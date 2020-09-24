/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, UITextPasteCoordinatorDelegate;
@class NSMutableArray, NSObject;

@interface UITextPasteCoordinator : NSObject {

	NSMutableArray* _items;
	NSObject*<OS_dispatch_group> _wait;
	id<UITextPasteCoordinatorDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<UITextPasteCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_finish;
-(void)addItem:(id)arg1 ;
-(void)_determineFinished;
-(void)setResult:(id)arg1 forItem:(id)arg2 ;
-(BOOL)performBlockingWait:(double)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id<UITextPasteCoordinatorDelegate>)delegate;
@end
