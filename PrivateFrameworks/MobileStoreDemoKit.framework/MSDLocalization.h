/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface MSDLocalization : NSObject {

	NSDictionary* _localizationTable;

}

@property (nonatomic,retain) NSDictionary * localizationTable;              //@synthesize localizationTable=_localizationTable - In the implementation block
+(id)sharedInstance;
+(void)fillInMissingLocales:(id)arg1 withOwnershipWarningMsg:(id)arg2 andKey:(id)arg3 ;
+(id)getLocalizedOwnershipWarnings:(id)arg1 ;
-(id)init;
-(NSDictionary *)localizationTable;
-(id)localizedStringWithKey:(id)arg1 defaultString:(id)arg2 ;
-(void)setLocalizationTable:(NSDictionary *)arg1 ;
@end

