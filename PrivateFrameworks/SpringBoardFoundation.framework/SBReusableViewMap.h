/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBReusableViewMapDelegate;
@class NSMapTable, NSString;

@interface SBReusableViewMap : NSObject <BSDescriptionProviding> {

	NSMapTable* _recycledViewsByClass;
	BOOL _invalidated;
	id<SBReusableViewMapDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBReusableViewMapDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long recycledViewCount; 
@property (nonatomic,readonly) unsigned long long viewRecyclingCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)purgeAllViews;
-(void)addRecycledViewsOfClass:(Class)arg1 upToCount:(unsigned long long)arg2 ;
-(void)invalidate;
-(BOOL)isViewRecycled:(id)arg1 ;
-(void)recycleView:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)recycledViewCount;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<SBReusableViewMapDelegate>)arg1 ;
-(id)viewOfClass:(Class)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id<SBReusableViewMapDelegate>)delegate;
-(id)newViewOfClass:(Class)arg1 ;
-(unsigned long long)viewRecyclingCount;
-(id)succinctDescriptionBuilder;
-(id)dequeueReusableViewOfClass:(Class)arg1 ;
-(void)purgeViewsForClass:(Class)arg1 ;
-(void)enumerateRecycledViewsUsingBlock:(/*^block*/id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
@end
