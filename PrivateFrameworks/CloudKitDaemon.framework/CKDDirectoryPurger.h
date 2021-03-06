/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CKDDirectoryPurger : NSObject {

	/*^block*/id _shouldSkipFileBlock;
	/*^block*/id _shouldRemoveFileBlock;
	NSArray* _paths;

}

@property (nonatomic,retain) NSArray * paths;                     //@synthesize paths=_paths - In the implementation block
@property (nonatomic,copy) id shouldSkipFileBlock;                //@synthesize shouldSkipFileBlock=_shouldSkipFileBlock - In the implementation block
@property (nonatomic,copy) id shouldRemoveFileBlock;              //@synthesize shouldRemoveFileBlock=_shouldRemoveFileBlock - In the implementation block
+(void)purgeDirectoryAtPath:(id)arg1 ;
-(NSArray *)paths;
-(void)purge;
-(id)shouldRemoveFileBlock;
-(void)setShouldRemoveFileBlock:(id)arg1 ;
-(void)setPaths:(NSArray *)arg1 ;
-(id)initWithPaths:(id)arg1 ;
-(id)shouldSkipFileBlock;
-(void)setShouldSkipFileBlock:(id)arg1 ;
@end

