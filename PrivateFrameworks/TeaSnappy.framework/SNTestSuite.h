/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TeaSnappy.framework/TeaSnappy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface SNTestSuite : NSObject {

	NSMutableDictionary* _testCases;
	NSMutableArray* _subTestSuites;
	SNTestSuite* _parentTestSuite;

}

@property (nonatomic,readonly) NSMutableDictionary * testCases;                 //@synthesize testCases=_testCases - In the implementation block
@property (nonatomic,readonly) NSMutableArray * subTestSuites;                  //@synthesize subTestSuites=_subTestSuites - In the implementation block
@property (assign,nonatomic,__weak) SNTestSuite * parentTestSuite;              //@synthesize parentTestSuite=_parentTestSuite - In the implementation block
-(id)init;
-(void)addTestCase:(id)arg1 ;
-(void)addSubTestSuite:(id)arg1 ;
-(NSMutableDictionary *)testCases;
-(id)testRunForTestName:(id)arg1 ;
-(void)setParentTestSuite:(SNTestSuite *)arg1 ;
-(NSMutableArray *)subTestSuites;
-(SNTestSuite *)parentTestSuite;
-(id)testSetupList;
@end

