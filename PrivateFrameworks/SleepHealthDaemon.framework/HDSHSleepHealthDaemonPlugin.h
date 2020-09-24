/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDPlugin.h>
#import <libobjc.A.dylib/HDTaskServerClassProvider.h>

@class NSString;

@interface HDSHSleepHealthDaemonPlugin : NSObject <HDPlugin, HDTaskServerClassProvider>

@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)pluginIdentifier;
-(id)extensionForHealthDaemon:(id)arg1 ;
-(id)extensionForProfile:(id)arg1 ;
-(id)taskServerClasses;
@end
