/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFPageLayerGeometryInterface;
#import <PDFKit/PDFKit-Structs.h>
@class PDFPage, NSObject, PDFRenderingProperties, CALayer, NSDate, NSMutableArray, PDFTimer, NSMutableDictionary;

@interface PDFPageLayerPrivate : NSObject {

	PDFPage* page;
	NSObject*<PDFPageLayerGeometryInterface> geometryInterface;
	PDFRenderingProperties* renderingProperties;
	long long oldPageRotation;
	CGRect oldBoundsForBox;
	CALayer* tilesLayer;
	CALayer* shadowLayer;
	int generationCount;
	double lastLayoutZoomFactor;
	CGRect lastLayerFrameInRootView;
	NSDate* lastZoomChange;
	BOOL zoomChangeScheduled;
	double zoomGenerationDelay;
	unsigned long long visibilityDelegateIndex;
	BOOL tileLayerHidden;
	NSMutableArray* tiles;
	BOOL allowUpdate;
	PDFTimer* forcedUpdateTimer;
	BOOL isForcingUpdate;
	AB isTiling;
	AB requestedTiling;
	CALayer* effectsLayer;
	NSMutableDictionary* pageLayerEffects;

}
@end

