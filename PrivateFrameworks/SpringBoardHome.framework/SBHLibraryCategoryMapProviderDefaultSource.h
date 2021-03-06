/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBHLibraryCategoryMapProviderSource.h>

@protocol SBHLibraryCategoryMapProviderSourceDelegate;
@class NSString, SBHIconModel;

@interface SBHLibraryCategoryMapProviderDefaultSource : NSObject <SBHLibraryCategoryMapProviderSource> {

	SBHIconModel* _iconModel;
	BOOL _refreshScheduled;
	id<SBHLibraryCategoryMapProviderSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBHLibraryCategoryMapProviderSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * sourceName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_requestRefresh:(id)arg1 ;
-(void)requestLibraryCategoryMapWithOptions:(unsigned long long)arg1 existingLibraryCategoryMap:(id)arg2 forbiddenApplicationIdentifiers:(id)arg3 sessionId:(unsigned long long)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setDelegate:(id<SBHLibraryCategoryMapProviderSourceDelegate>)arg1 ;
-(id)initWithIconModel:(id)arg1 ;
-(id<SBHLibraryCategoryMapProviderSourceDelegate>)delegate;
-(NSString *)sourceName;
@end

