/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKPinnedConversationActivityItemView.h>

@protocol CKPinnedConversationActivityItemViewDelegate;
@class CKPinnedConversationTapbackBubbleActivityItem, CKAcknowledgmentGlyphView, CKPinnedConversationActivityItemViewBackdropLayer, CAShapeLayer, CKPinnedConversationActivityItemViewShadowLayer;

@interface CKPinnedConversationTapbackBubble : UIView <CKPinnedConversationActivityItemView> {

	id<CKPinnedConversationActivityItemViewDelegate> _activityItemViewDelegate;
	long long _activityItemViewContentScale;
	long long _originationHorizontalDirection;
	CKPinnedConversationTapbackBubbleActivityItem* _tapbackActivityItem;
	long long _originationDirection;
	double _preferredTailAttachmentPointXCoordinate;
	CKAcknowledgmentGlyphView* _tapbackGlyph;
	CKPinnedConversationActivityItemViewBackdropLayer* _backdropLayer;
	CAShapeLayer* _backdropMaskShapeLayer;
	CKPinnedConversationActivityItemViewShadowLayer* _broadShadowLayer;
	CKPinnedConversationActivityItemViewShadowLayer* _tightShadowLayer;
	CGSize _parentAvatarViewSize;
	CGPoint _originationPoint;

}

@property (nonatomic,retain) CKAcknowledgmentGlyphView * tapbackGlyph;                                                      //@synthesize tapbackGlyph=_tapbackGlyph - In the implementation block
@property (nonatomic,retain) CKPinnedConversationActivityItemViewBackdropLayer * backdropLayer;                             //@synthesize backdropLayer=_backdropLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * backdropMaskShapeLayer;                                                         //@synthesize backdropMaskShapeLayer=_backdropMaskShapeLayer - In the implementation block
@property (nonatomic,retain) CKPinnedConversationActivityItemViewShadowLayer * broadShadowLayer;                            //@synthesize broadShadowLayer=_broadShadowLayer - In the implementation block
@property (nonatomic,retain) CKPinnedConversationActivityItemViewShadowLayer * tightShadowLayer;                            //@synthesize tightShadowLayer=_tightShadowLayer - In the implementation block
@property (nonatomic,readonly) CKPinnedConversationTapbackBubbleActivityItem * tapbackActivityItem;                         //@synthesize tapbackActivityItem=_tapbackActivityItem - In the implementation block
@property (assign,nonatomic) long long originationDirection;                                                                //@synthesize originationDirection=_originationDirection - In the implementation block
@property (assign,nonatomic) CGPoint originationPoint;                                                                      //@synthesize originationPoint=_originationPoint - In the implementation block
@property (assign,nonatomic) double preferredTailAttachmentPointXCoordinate;                                                //@synthesize preferredTailAttachmentPointXCoordinate=_preferredTailAttachmentPointXCoordinate - In the implementation block
@property (assign,nonatomic) long long acknowledgmentType; 
@property (nonatomic,retain) id<CKPinnedConversationActivityItem> activityItem; 
@property (assign,nonatomic) long long originationHorizontalDirection;                                                      //@synthesize originationHorizontalDirection=_originationHorizontalDirection - In the implementation block
@property (nonatomic,readonly) CGPoint tailAttachmentPoint; 
@property (assign,nonatomic) CGSize parentAvatarViewSize;                                                                   //@synthesize parentAvatarViewSize=_parentAvatarViewSize - In the implementation block
@property (nonatomic,readonly) BOOL supportsActivityItemViewContentScale; 
@property (assign,nonatomic) long long activityItemViewContentScale;                                                        //@synthesize activityItemViewContentScale=_activityItemViewContentScale - In the implementation block
@property (nonatomic,readonly) BOOL supportsAlignmentWithOriginationSubAvatarFrame; 
@property (assign,nonatomic,__weak) id<CKPinnedConversationActivityItemViewDelegate> activityItemViewDelegate;              //@synthesize activityItemViewDelegate=_activityItemViewDelegate - In the implementation block
-(BOOL)flipVertically;
-(CKAcknowledgmentGlyphView *)tapbackGlyph;
-(void)_updateUserInterfaceStyles;
-(long long)acknowledgmentType;
-(void)_updateAcknowledgmentType;
-(CGRect)tapbackBalloonFrameForSize:(CGSize)arg1 ;
-(CGRect)largeTailBalloonFrameForSize:(CGSize)arg1 ;
-(char)colorTypeForTapBack:(long long)arg1 ;
-(CGRect)smallTailBalloonFrameForSize:(CGSize)arg1 ;
-(void)setTapbackGlyph:(CKAcknowledgmentGlyphView *)arg1 ;
-(CGSize)tapbackBalloonSizeForSize:(CGSize)arg1 ;
-(CGSize)largeTailBalloonSizeForSize:(CGSize)arg1 ;
-(BOOL)flipHorizontally;
-(CGSize)smallTailBalloonSizeForSize:(CGSize)arg1 ;
-(void)setAcknowledgmentType:(long long)arg1 ;
-(double)activityItemToContactItemVerticalOverlap;
-(id<CKPinnedConversationActivityItem>)activityItem;
-(void)setActivityItem:(id<CKPinnedConversationActivityItem>)arg1 ;
-(long long)originationDirection;
-(void)setOriginationDirection:(long long)arg1 ;
-(long long)originationHorizontalDirection;
-(CGPoint)originationPoint;
-(void)setOriginationHorizontalDirection:(long long)arg1 ;
-(void)setOriginationPoint:(CGPoint)arg1 ;
-(double)preferredTailAttachmentPointXCoordinate;
-(void)setPreferredTailAttachmentPointXCoordinate:(double)arg1 ;
-(CGPoint)tailAttachmentPoint;
-(CGSize)parentAvatarViewSize;
-(id)initWithActivityItem:(id)arg1 ;
-(void)setParentAvatarViewSize:(CGSize)arg1 ;
-(BOOL)supportsActivityItemViewContentScale;
-(long long)activityItemViewContentScale;
-(void)setActivityItemViewContentScale:(long long)arg1 ;
-(BOOL)supportsAlignmentWithOriginationSubAvatarFrame;
-(id<CKPinnedConversationActivityItemViewDelegate>)activityItemViewDelegate;
-(void)setActivityItemViewDelegate:(id<CKPinnedConversationActivityItemViewDelegate>)arg1 ;
-(CKPinnedConversationTapbackBubbleActivityItem *)tapbackActivityItem;
-(CAShapeLayer *)backdropMaskShapeLayer;
-(void)setBackdropMaskShapeLayer:(CAShapeLayer *)arg1 ;
-(CKPinnedConversationActivityItemViewShadowLayer *)broadShadowLayer;
-(void)setBroadShadowLayer:(CKPinnedConversationActivityItemViewShadowLayer *)arg1 ;
-(CKPinnedConversationActivityItemViewShadowLayer *)tightShadowLayer;
-(void)setTightShadowLayer:(CKPinnedConversationActivityItemViewShadowLayer *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(CKPinnedConversationActivityItemViewBackdropLayer *)backdropLayer;
-(void)setBackdropLayer:(CKPinnedConversationActivityItemViewBackdropLayer *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

