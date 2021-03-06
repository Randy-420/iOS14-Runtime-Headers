/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIComposeTextFieldListViewDelegate <NSObject>
@optional
-(void)textFieldListValidityDidChange:(id)arg1;
-(void)textFieldListValuesDidChange:(id)arg1;

@required
-(long long)numberOfColumnsInTextFieldList:(id)arg1;
-(long long)numberOfFieldsInTextFieldList:(id)arg1;
-(id)textFieldList:(id)arg1 configurationForFieldAtIndex:(unsigned long long)arg2;

@end

