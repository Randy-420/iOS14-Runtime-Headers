/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ENExposureDetectionManagerDelegate
@required
-(id)exposureDetectionManager:(id)arg1 advertisementDatabaseQuerySessionWithAttenuationThreshold:(unsigned char)arg2 error:(id*)arg3;
-(id)activeRegionForExposureDetectionManager:(id)arg1;
-(void)exposureDetectionManager:(id)arg1 errorDetected:(unsigned)arg2;
-(void)exposureDetectionManager:(id)arg1 finishedSessionWithResult:(id)arg2;

@end
