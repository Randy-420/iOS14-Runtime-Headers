/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SUScriptTextFieldDelegate.h>

@class NSHashTable, NSString;

@interface SUScriptTextFieldDelegate : NSObject <SUScriptTextFieldDelegate> {

	NSHashTable* _delegates;

}

@property (nonatomic,readonly) long long numberOfDelegates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(long long)numberOfDelegates;
@end
