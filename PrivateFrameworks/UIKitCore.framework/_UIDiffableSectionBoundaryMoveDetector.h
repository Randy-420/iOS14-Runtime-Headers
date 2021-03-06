/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIIdentifierDiffer, _UIDiffableDataSourceState;
@class NSSet;

@interface _UIDiffableSectionBoundaryMoveDetector : NSObject {

	id<_UIIdentifierDiffer> _differ;
	id<_UIDiffableDataSourceState> _beforeState;
	id<_UIDiffableDataSourceState> _afterState;
	NSSet* _movePairs;
	BOOL _didShortCircuit;

}

@property (nonatomic,readonly) NSSet * movePairs;                 //@synthesize movePairs=_movePairs - In the implementation block
@property (nonatomic,readonly) BOOL didShortCircuit;              //@synthesize didShortCircuit=_didShortCircuit - In the implementation block
-(BOOL)didShortCircuit;
-(NSSet *)movePairs;
-(id)_computeMovePairsFoundation;
-(id)initWithItemDiffer:(id)arg1 beforeDataSourceState:(id)arg2 afterDataSourceState:(id)arg3 ;
-(id)_computeMovePairsSTL;
@end

