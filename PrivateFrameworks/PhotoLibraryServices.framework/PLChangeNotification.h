/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSNotification.h>

@class PLChangeNotificationCenter;

@interface PLChangeNotification : NSNotification

@property (nonatomic,readonly) PLChangeNotificationCenter * changeNotificationCenter; 
+(id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)_calculateDiffs;
-(PLChangeNotificationCenter *)changeNotificationCenter;
@end

