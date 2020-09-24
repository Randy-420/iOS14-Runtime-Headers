/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/SXDocumentSectionItemProvider.h>

@protocol NUDocumentSectionItemHeightProvider;
@class UIViewController, UITraitCollection, NSString;

@interface NUDocumentSectionItem : NSObject <SXDocumentSectionItemProvider> {

	UIViewController* _viewController;
	UITraitCollection* _traitCollection;
	id<NUDocumentSectionItemHeightProvider> _heightProvider;

}

@property (readonly) UIViewController * viewController;                                   //@synthesize viewController=_viewController - In the implementation block
@property (readonly) UITraitCollection * traitCollection;                                 //@synthesize traitCollection=_traitCollection - In the implementation block
@property (readonly) id<NUDocumentSectionItemHeightProvider> heightProvider;              //@synthesize heightProvider=_heightProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)viewController;
-(UITraitCollection *)traitCollection;
-(id<NUDocumentSectionItemHeightProvider>)heightProvider;
-(double)sectionItemHeightForSize:(CGSize)arg1 traitCollection:(id)arg2 ;
-(id)sectionItemViewController;
-(id)initWithViewController:(id)arg1 heightProvider:(id)arg2 ;
@end
