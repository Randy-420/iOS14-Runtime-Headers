/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFHistoryAnalyzerOptions;

@interface PFHistoryAnalyzer : NSObject {

	PFHistoryAnalyzerOptions* _options;

}

@property (nonatomic,copy,readonly) PFHistoryAnalyzerOptions * options;              //@synthesize options=_options - In the implementation block
-(BOOL)processTransaction:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)instantiateNewAnalyzerContextForChangesInStore:(id)arg1 ;
-(id)newAnalyzerContextForStore:(id)arg1 sinceLastHistoryToken:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
-(PFHistoryAnalyzerOptions *)options;
-(void)dealloc;
-(id)init;
-(id)initWithOptions:(id)arg1 ;
@end

