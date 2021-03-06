/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClassKit/ClassKit-Structs.h>
@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject {

	CLSCurrentUser* _currentUser;
	os_unfair_lock_s _lock;

}
+(id)shared;
-(id)currentUser;
-(void)lock;
-(BOOL)settingsUIVisible;
-(void)unlock;
-(void)dealloc;
-(void)currentUserDidChange:(id)arg1 ;
-(id)init;
-(id)cachedCurrentUserAppleID;
@end

