/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, CPLRecordChange, CPLRecordStatus;

@interface _CPLTransientStatus : NSObject {

	NSDate* _date;
	CPLRecordChange* _record;
	unsigned long long _generation;

}

@property (nonatomic,readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) CPLRecordChange * record;                   //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) unsigned long long generation;              //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) CPLRecordStatus * status; 
-(CPLRecordChange *)record;
-(NSDate *)date;
-(CPLRecordStatus *)status;
-(unsigned long long)generation;
-(id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2 date:(id)arg3 ;
@end

