/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNNotificationIconProvider.h>
#import <libobjc.A.dylib/CALNCalendarIconIdentifierProvider.h>

@class NSString;

@interface CALNCUIKIconProvider : NSObject <CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_identifierEncodingAllowedCharacters;
+(BOOL)_parseIconIdentifier:(id)arg1 intoDateComponents:(id*)arg2 calendar:(id*)arg3 type:(long long*)arg4 ;
-(id)identifierForIconWithDate:(id)arg1 inCalendar:(id)arg2 ;
-(id)pngDataForIconWithIdentifier:(id)arg1 ;
@end
