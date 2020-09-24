/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXDocumentSectionManager.h>

@protocol SXDocumentSectionManager <NSObject>
@required
-(void)applySectionBlueprint:(id)arg1 identifier:(id)arg2 offset:(CGPoint)arg3 size:(CGSize)arg4;
-(double)heightForBlueprint:(id)arg1 canvasSize:(CGSize)arg2 traitCollection:(id)arg3;

@end


@protocol SXDocumentSectionHosting;
@class SXViewport, NSMutableDictionary, NSMutableSet, NFMultiDelegate, NSString;

@interface SXDocumentSectionManager : NSObject <SXViewportChangeListener, SXDocumentSectionManager> {

	id<SXDocumentSectionHosting> _hosting;
	SXViewport* _viewport;
	NSMutableDictionary* _blueprints;
	NSMutableSet* _visibleViewControllers;
	NFMultiDelegate* _multiScrollDelegate;

}

@property (nonatomic,__weak,readonly) id<SXDocumentSectionHosting> hosting;              //@synthesize hosting=_hosting - In the implementation block
@property (nonatomic,readonly) SXViewport * viewport;                                    //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * blueprints;                         //@synthesize blueprints=_blueprints - In the implementation block
@property (nonatomic,readonly) NSMutableSet * visibleViewControllers;                    //@synthesize visibleViewControllers=_visibleViewControllers - In the implementation block
@property (nonatomic,readonly) NFMultiDelegate * multiScrollDelegate;                    //@synthesize multiScrollDelegate=_multiScrollDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(NFMultiDelegate *)multiScrollDelegate;
-(void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(NSMutableDictionary *)blueprints;
-(void)updateViewControllerVisibility;
-(id)viewController;
-(id)initWithSectionHosting:(id)arg1 viewport:(id)arg2 appStateMonitor:(id)arg3 ;
-(id)view;
-(void)applySectionBlueprint:(id)arg1 identifier:(id)arg2 offset:(CGPoint)arg3 size:(CGSize)arg4 ;
-(void)endImpressions;
-(double)heightForBlueprint:(id)arg1 canvasSize:(CGSize)arg2 traitCollection:(id)arg3 ;
-(void)performDisappearanceTransitionForVisibleViewControllers;
-(id<SXDocumentSectionHosting>)hosting;
-(NSMutableSet *)visibleViewControllers;
-(void)viewport:(id)arg1 documentSizeDidChangeFromSize:(CGSize)arg2 ;
@end
