/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXContextStoreWriterProtocol.h>

@class _CDClientContext, _CDContextualKeyPath, NSString;

@interface ATXContextStoreWriter : NSObject <ATXContextStoreWriterProtocol> {

	_CDClientContext* _context;
	_CDContextualKeyPath* _keyPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)setWithObject:(id)arg1 ;
-(id)initWithContext:(id)arg1 keyPath:(id)arg2 ;
@end

