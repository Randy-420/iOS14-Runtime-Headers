/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXDarkModePolicyHandler.h>

@protocol SXDarkModePolicyHandler <NSObject>
@required
-(BOOL)shouldApplyDarkModeToDOM:(id)arg1 layoutOptions:(id)arg2;
-(BOOL)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)arg1 DOM:(id)arg2;
-(BOOL)shouldApplyDarkModeToForegroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
-(BOOL)shouldApplyDarkModeToBackgroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
-(BOOL)shouldApplyDarkModeToDocumentStyle:(id)arg1 DOM:(id)arg2;
-(BOOL)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)arg1 DOM:(id)arg2;
-(BOOL)shouldApplyDarkModeToForegroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
-(BOOL)shouldApplyDarkModeToComponentStylesForComponent:(id)arg1 DOM:(id)arg2;
-(BOOL)shouldApplyDarkModeToComponent:(id)arg1 DOM:(id)arg2;
-(BOOL)shouldApplyDarkModeToBackgroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
-(BOOL)shouldApplyDarkModeToComponentStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;

@end


@protocol SXDarkModeConfiguration, SXDocumentProviding;
@class NSMutableArray, NSString;

@interface SXDarkModePolicyHandler : NSObject <SXDarkModePolicyHandler> {

	id<SXDarkModeConfiguration> _darkModeConfiguration;
	id<SXDocumentProviding> _documentProvider;
	NSMutableArray* _exceptions;

}

@property (nonatomic,readonly) id<SXDarkModeConfiguration> darkModeConfiguration;              //@synthesize darkModeConfiguration=_darkModeConfiguration - In the implementation block
@property (nonatomic,readonly) id<SXDocumentProviding> documentProvider;                       //@synthesize documentProvider=_documentProvider - In the implementation block
@property (nonatomic,readonly) NSMutableArray * exceptions;                                    //@synthesize exceptions=_exceptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDocumentProviding>)documentProvider;
-(BOOL)shouldApplyDarkModeToDOM:(id)arg1 layoutOptions:(id)arg2 ;
-(BOOL)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)arg1 DOM:(id)arg2 ;
-(BOOL)shouldApplyDarkModeToForegroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 ;
-(BOOL)shouldApplyDarkModeToBackgroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 ;
-(NSMutableArray *)exceptions;
-(void)addPolicyException:(id)arg1 ;
-(BOOL)shouldApplyDarkModeToDocumentStyle:(id)arg1 DOM:(id)arg2 ;
-(id)initWithDocumentProvider:(id)arg1 darkModeConfiguration:(id)arg2 ;
-(BOOL)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)arg1 DOM:(id)arg2 ;
-(id<SXDarkModeConfiguration>)darkModeConfiguration;
-(BOOL)shouldApplyDarkModeToForegroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 ;
-(BOOL)shouldApplyDarkModeToComponentStylesForComponent:(id)arg1 DOM:(id)arg2 ;
-(BOOL)shouldApplyDarkModeToComponent:(id)arg1 DOM:(id)arg2 ;
-(BOOL)shouldApplyDarkModeToBackgroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 ;
-(BOOL)shouldApplyDarkModeToComponentStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 ;
@end

