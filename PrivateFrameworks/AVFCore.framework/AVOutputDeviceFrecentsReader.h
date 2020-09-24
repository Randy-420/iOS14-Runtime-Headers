/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVOutputDeviceFrecentsReading.h>

@class NSArray, NSString, NSMutableDictionary;

@interface AVOutputDeviceFrecentsReader : NSObject <AVOutputDeviceFrecentsReading> {

	NSString* _frecentsFilePath;
	NSMutableDictionary* _frecents;

}

@property (nonatomic,readonly) NSArray * deviceIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrecentsFilePath:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)frecencyInfoForDeviceWithID:(id)arg1 ;
-(id)init;
-(NSArray *)deviceIDs;
@end
