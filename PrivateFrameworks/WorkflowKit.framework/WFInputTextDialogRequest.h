/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDialogRequest.h>
#import <libobjc.A.dylib/WFDialogRequestViewControllerSupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFTextFieldConfiguration, NSString, WFDialogButton;

@interface WFInputTextDialogRequest : WFDialogRequest <WFDialogRequestViewControllerSupport, NSSecureCoding> {

	WFTextFieldConfiguration* _textFieldConfiguration;
	NSString* _message;
	WFDialogButton* _cancelButton;
	WFDialogButton* _doneButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) WFTextFieldConfiguration * textFieldConfiguration;              //@synthesize textFieldConfiguration=_textFieldConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                                             //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * cancelButton;                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * doneButton;                                    //@synthesize doneButton=_doneButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(Class)wf_dialogViewControllerClass;
-(WFDialogButton *)cancelButton;
-(WFDialogButton *)doneButton;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)message;
-(NSString *)description;
-(id)initWithTextFieldConfiguration:(id)arg1 message:(id)arg2 attribution:(id)arg3 prompt:(id)arg4 ;
-(WFTextFieldConfiguration *)textFieldConfiguration;
@end
