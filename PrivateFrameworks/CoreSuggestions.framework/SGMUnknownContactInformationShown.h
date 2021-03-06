/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class PETScalarEventTracker;

@interface SGMUnknownContactInformationShown : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(void)trackEventWithScalar:(unsigned long long)arg1 app:(SGMContactDetailUsedApp_)arg2 wasSuggestedContact:(SGMTypeSafeBool_)arg3 ;
-(PETScalarEventTracker *)tracker;
@end

