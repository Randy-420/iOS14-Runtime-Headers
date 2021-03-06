/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SLGDomainWhitelisting.h>

@protocol OS_dispatch_queue;
@class NSSet, NSObject, NSString;

@interface SLGDomainWhitelist : NSObject <SLGDomainWhitelisting> {

	NSObject*<OS_dispatch_queue> _lockQueue;
	NSSet* _whitelist;
	BOOL _allowUnspecifiedDomains;

}

@property (assign,nonatomic) BOOL allowUnspecifiedDomains; 
@property (nonatomic,readonly) NSSet * whitelist; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)allowUnspecifiedDomains;
-(void)dealloc;
-(id)init;
-(void)setAllowUnspecifiedDomains:(BOOL)arg1 ;
-(void)addDomain:(id)arg1 ;
-(BOOL)isDomainWhitelisted:(id)arg1 ;
-(NSSet *)whitelist;
-(void)_reloadSettings;
-(void)_beginObservingSettings;
-(void)_stopObservingSettings;
-(void)_lockQueue_loadSettings;
-(void)_lockQueue_loadWhitelist;
-(void)_lockQueue_loadUnspecifiedDomains;
-(void)removeDomain:(id)arg1 ;
@end

