/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SFSaveToFilesOperationDelegate <NSObject>
@optional
-(BOOL)saveToFilesOperationSupportsDownloads:(id)arg1;
-(id)customizationControllerForSaveToFilesOperation:(id)arg1;
-(BOOL)saveToFilesOperationShouldDismissViewControllerAfterCompletion:(id)arg1;

@required
-(void)saveToFilesOperation:(id)arg1 presentViewController:(id)arg2;
-(void)saveToFilesOperation:(id)arg1 didFinishWithSuccess:(BOOL)arg2;

@end

