/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/PILongExposureRegistrationResult.h>

@class VNImageHomographicAlignmentObservation, NSString;

@interface _PILongExposureRegistrationResult : _NURenderResult <PILongExposureRegistrationResult> {

	VNImageHomographicAlignmentObservation* _observation;
	SCD_Struct_PI6 _extent;

}

@property (nonatomic,copy) VNImageHomographicAlignmentObservation * observation;              //@synthesize observation=_observation - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI6 extent;                                           //@synthesize extent=_extent - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setExtent:(SCD_Struct_PI6)arg1 ;
-(void)setObservation:(VNImageHomographicAlignmentObservation *)arg1 ;
-(SCD_Struct_PI6)extent;
-(VNImageHomographicAlignmentObservation *)observation;
@end
