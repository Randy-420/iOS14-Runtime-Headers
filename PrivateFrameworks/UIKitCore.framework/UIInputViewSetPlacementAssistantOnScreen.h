/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewSetPlacement.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UIInputViewSetPlacementAssistantOnScreen : UIInputViewSetPlacement <NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(BOOL)showsInputViews;
-(BOOL)inputViewWillAppear;
-(BOOL)accessoryViewWillAppear;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(BOOL)showsInputOrAssistantViews;
-(CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(BOOL)arg2 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(double)inputAssistantViewHeightForInputViewSet:(id)arg1 ;
@end

