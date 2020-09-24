/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFCloudKitTask.h>

@class NSURLSessionTask, NSOperationQueue;

@interface WFCloudKitWebServiceTask : WFCloudKitTask {

	NSURLSessionTask* _dataTask;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSURLSessionTask * dataTask;                    //@synthesize dataTask=_dataTask - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(void)cancel;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setDataTask:(NSURLSessionTask *)arg1 ;
-(id)init;
-(NSURLSessionTask *)dataTask;
@end
