/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ADJasperPointCloud;

@interface ARPointCloud : NSObject <NSSecureCoding> {

	vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* _pointsVector;
	vector<unsigned long long, std::__1::allocator<unsigned long long> >* _identifiersVector;
	vector<float, std::__1::allocator<float> >* _vergenceAngleCosinesVector;
	 _centroid;
	 _standardDeviation;
	ADJasperPointCloud* _depthPointCloud;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) const * points; 
@property (nonatomic,readonly) const unsigned long long* identifiers; 
+(BOOL)supportsSecureCoding;
+(id)concatPointClouds:(id)arg1 ;
+(id)emptyPointCloud;
-(const unsigned long long*)identifiers;
-(1)centroid;
-(const *)points;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(1)standardDeviation;
-(unsigned long long)hash;
-(id)description;
-(id)initWithPointsVector:(const vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >}Ref)arg1 identifiersVector:(const vector<unsigned long long, std::__1::allocator<unsigned long long> >*)arg2 ;
-(id)initWithPointsVector:(const vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >}Ref)arg1 identifiersVector:(const vector<unsigned long long, std::__1::allocator<unsigned long long> >*)arg2 vergenceAngleCosinesVector:(const vector<float, std::__1::allocator<float> >*)arg3 ;
-(const float*)vergenceAngleCosines;
-(id)initWithPointData:(id)arg1 ;
-(id)initWithCV3DPointData:(id)arg1 minVergenceAngleCosine:(double)arg2 ;
-(id)initWithDepthPointCloud:(id)arg1 ;
-(id)depthPointCloud;
-(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)computeBounds;
-(id)filterPointCloudFrom:ellipsoid:;
-(id)filterPointCloudWithIdentifiers:(set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >*)arg1 ;
-(id)_hitTestPointFromOrigin:(float)arg1 withDirection:(SCD_Struct_AR1)arg2 ;
-(id)pointCloudByApplyingTransform:(SCD_Struct_AR1)arg1 ;
@end

