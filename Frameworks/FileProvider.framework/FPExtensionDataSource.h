/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPXEnumeratorObserver.h>
#import <libobjc.A.dylib/FPCollectionDataSource.h>

@protocol FPXEnumerator, OS_dispatch_queue, FPDLifetimeServicing, FPCollectionDataSourceDelegate;
@class FPExtensionEnumerationSettings, NSObject, NSData, NSString;

@interface FPExtensionDataSource : NSObject <FPXEnumeratorObserver, FPCollectionDataSource> {

	FPExtensionEnumerationSettings* _enumerationSettings;
	id<FPXEnumerator> _enumerator;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _started;
	BOOL _invalidated;
	BOOL _shouldUpdate;
	BOOL _enumeratingExtensionResults;
	NSData* _nextPageToken;
	NSData* _changeToken;
	unsigned long long _numGatheredItems;
	id<FPDLifetimeServicing> _lifetimeExtender;
	BOOL _hasMoreIncoming;
	id<FPCollectionDataSourceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMoreIncoming;                                          //@synthesize hasMoreIncoming=_hasMoreIncoming - In the implementation block
@property (assign,nonatomic,__weak) id<FPCollectionDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_gatherInitialItems;
-(void)_updateItemsWithUpdatesCount:(unsigned long long)arg1 section:(unsigned long long)arg2 ;
-(id)_initialPageFromSortDescriptors:(id)arg1 ;
-(void)_gatherMoreItemsAfterPage:(id)arg1 section:(unsigned long long)arg2 ;
-(void)invalidate;
-(void)_invalidateWithError:(id)arg1 ;
-(void)enumerationResultsDidChange;
-(void)_invalidate;
-(void)start;
-(void)setDelegate:(id<FPCollectionDataSourceDelegate>)arg1 ;
-(id)initWithEnumerationSettings:(id)arg1 ;
-(void)_updateItems;
-(id<FPCollectionDataSourceDelegate>)delegate;
-(BOOL)hasMoreIncoming;
-(void)enumerationMightHaveResumed;
-(void)didUpdateItem:(id)arg1 ;
-(NSString *)description;
-(void)invalidateWithError:(id)arg1 ;
@end
