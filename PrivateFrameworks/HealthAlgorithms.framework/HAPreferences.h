/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface HAPreferences : NSObject {

	NSUserDefaults* _globalDefaults;
	BOOL _sensitiveLoggingEnabled;

}

@property (readonly) BOOL sensitiveLoggingEnabled;              //@synthesize sensitiveLoggingEnabled=_sensitiveLoggingEnabled - In the implementation block
+(id)sharedPreferences;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)sensitiveLoggingEnabled;
@end
