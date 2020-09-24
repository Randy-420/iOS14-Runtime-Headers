/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKitCore/_UIDocumentPickerViewControllerHost.h>
#import <UIKitCore/_UIDocumentPickerServiceInvalidating.h>

@protocol _UIDocumentPickerRemoteViewControllerContaining;
@class UIViewController, NSString;

@interface _UIDocumentPickerRemoteViewController : _UIRemoteViewController <_UIDocumentPickerViewControllerHost, _UIDocumentPickerServiceInvalidating> {

	UIViewController*<_UIDocumentPickerRemoteViewControllerContaining> _publicController;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) UIViewController*<_UIDocumentPickerRemoteViewControllerContaining> publicController;              //@synthesize publicController=_publicController - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                                                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(NSString *)identifier;
-(void)invalidate;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_dismissViewController;
-(void)_didSelectURLWrapper:(id)arg1 ;
-(void)_didSelectURLBookmark:(id)arg1 ;
-(void)_didSelectPicker;
-(void)_dismissWithOption:(id)arg1 ;
-(void)_stitchFileCreationAtURL:(id)arg1 ;
-(void)setPublicController:(UIViewController*<_UIDocumentPickerRemoteViewControllerContaining>)arg1 ;
-(UIViewController*<_UIDocumentPickerRemoteViewControllerContaining>)publicController;
-(void)_tintColorDidChangeToColor:(id)arg1 ;
@end
