/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/_HDMedicalRecordEntityEncoder.h>

@interface _HDCoverageRecordEntityEncoder : _HDMedicalRecordEntityEncoder
-(id)codableRepresentationForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(id)orderedProperties;
-(id)createBareObject;
-(BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 error:(id*)arg4 ;
@end
