/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSPasswordEvaluation, NSArray, WBSSavedPassword, NSString;

@interface WBSPasswordWarning : NSObject {

	WBSPasswordEvaluation* _weakPasswordEvaluation;
	NSArray* _localizedLongDescriptionStrings;
	WBSSavedPassword* _password;
	unsigned long long _issueTypes;
	unsigned long long _severityScore;
	NSString* _localizedShortDescription;

}

@property (assign,nonatomic) unsigned long long severityScore;                                          //@synthesize severityScore=_severityScore - In the implementation block
@property (nonatomic,readonly) WBSSavedPassword * password;                                             //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) unsigned long long issueTypes;                                           //@synthesize issueTypes=_issueTypes - In the implementation block
@property (nonatomic,readonly) unsigned long long severity; 
@property (nonatomic,readonly) unsigned long long hashForUserAcknowlegement; 
@property (nonatomic,readonly) BOOL shouldShowWarningsWhenLoggingIn; 
@property (nonatomic,readonly) NSString * localizedShortDescription;                                    //@synthesize localizedShortDescription=_localizedShortDescription - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitleForWarningWhenLoggingIn; 
@property (nonatomic,readonly) NSString * localizedInformationTextForWarningWhenLoggingIn; 
-(unsigned long long)severityScore;
-(unsigned long long)issueTypes;
-(long long)compare:(id)arg1 ;
-(unsigned long long)severity;
-(WBSSavedPassword *)password;
-(id)initWithPassword:(id)arg1 issueTypes:(unsigned long long)arg2 weakPasswordEvaluation:(id)arg3 longDescriptionStrings:(id)arg4 shortDescription:(id)arg5 ;
-(BOOL)shouldShowWarningsWhenLoggingIn;
-(id)localizedLongDescriptionForClient:(unsigned long long)arg1 ;
-(NSString *)localizedTitleForWarningWhenLoggingIn;
-(NSString *)localizedInformationTextForWarningWhenLoggingIn;
-(unsigned long long)hashForUserAcknowlegement;
-(void)setSeverityScore:(unsigned long long)arg1 ;
-(NSString *)localizedShortDescription;
@end

