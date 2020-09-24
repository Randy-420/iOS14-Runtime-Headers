/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data, MTLPipelineCache, MTLBinaryArchive;
@class MTLFunction, NSObject, NSArray, NSDictionary;

@interface MTLCompileFunctionRequestData : NSObject {

	BOOL _sync;
	MTLFunction* _function;
	unsigned long long _pipelineOptions;
	NSObject*<OS_dispatch_data> _frameworkData;
	NSObject*<OS_dispatch_data> _driverKeyData;
	id<MTLPipelineCache> _pipelineCache;
	id<MTLBinaryArchive> _destinationBinaryArchive;
	NSArray* _binaryArchives;
	NSArray* _visibleFunctions;
	NSArray* _privateVisibleFunctions;
	NSDictionary* _visibleFunctionGroups;

}

@property (assign,nonatomic) BOOL sync;                                                  //@synthesize sync=_sync - In the implementation block
@property (assign,nonatomic) unsigned long long pipelineOptions;                         //@synthesize pipelineOptions=_pipelineOptions - In the implementation block
@property (nonatomic,retain) MTLFunction * function;                                     //@synthesize function=_function - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_data> frameworkData; 
@property (assign,nonatomic) NSObject*<OS_dispatch_data> driverKeyData; 
@property (nonatomic,retain) id<MTLPipelineCache> pipelineCache;                         //@synthesize pipelineCache=_pipelineCache - In the implementation block
@property (nonatomic,retain) id<MTLBinaryArchive> destinationBinaryArchive;              //@synthesize destinationBinaryArchive=_destinationBinaryArchive - In the implementation block
@property (nonatomic,copy) NSArray * binaryArchives;                                     //@synthesize binaryArchives=_binaryArchives - In the implementation block
@property (nonatomic,copy) NSArray * visibleFunctions;                                   //@synthesize visibleFunctions=_visibleFunctions - In the implementation block
@property (nonatomic,copy) NSArray * privateVisibleFunctions;                            //@synthesize privateVisibleFunctions=_privateVisibleFunctions - In the implementation block
@property (nonatomic,copy) NSDictionary * visibleFunctionGroups;                         //@synthesize visibleFunctionGroups=_visibleFunctionGroups - In the implementation block
-(NSArray *)binaryArchives;
-(BOOL)sync;
-(void)setFrameworkData:(NSObject*<OS_dispatch_data>)arg1 ;
-(NSDictionary *)visibleFunctionGroups;
-(void)setFunction:(MTLFunction *)arg1 ;
-(void)setSync:(BOOL)arg1 ;
-(void)setBinaryArchives:(NSArray *)arg1 ;
-(unsigned long long)pipelineOptions;
-(id<MTLBinaryArchive>)destinationBinaryArchive;
-(void)dealloc;
-(void)setDriverKeyData:(NSObject*<OS_dispatch_data>)arg1 ;
-(NSArray *)privateVisibleFunctions;
-(id<MTLPipelineCache>)pipelineCache;
-(void)setPipelineOptions:(unsigned long long)arg1 ;
-(void)setPipelineCache:(id<MTLPipelineCache>)arg1 ;
-(void)setVisibleFunctionGroups:(NSDictionary *)arg1 ;
-(void)setDestinationBinaryArchive:(id<MTLBinaryArchive>)arg1 ;
-(void)setVisibleFunctions:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_data>)frameworkData;
-(NSArray *)visibleFunctions;
-(NSObject*<OS_dispatch_data>)driverKeyData;
-(MTLFunction *)function;
-(void)setPrivateVisibleFunctions:(NSArray *)arg1 ;
@end
