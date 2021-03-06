/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPContainer.h>

@class NSMutableSet;

@interface MSPHistoryContainer : MSPContainer {

	NSMutableSet* _dependents;

}
+(id)sharedLocalContainer;
+(id)sharedRemoteContainer;
-(void)removeDependent:(id)arg1 ;
-(id)queryWithDelegate:(id)arg1 ;
-(void)addDependent:(id)arg1 ;
-(void)_processNewEditedContents:(id)arg1 ;
-(void)_processNewLoadedContents:(id)arg1 ;
-(void)_commitEditWithFinalContents:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

