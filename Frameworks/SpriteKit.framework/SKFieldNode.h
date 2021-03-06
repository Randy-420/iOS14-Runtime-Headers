/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class PKPhysicsField, SKTexture, SKRegion;

@interface SKFieldNode : SKNode {

	PKPhysicsField* _field;
	BOOL _exclusive;
	float _animationSpeed;
	float _smoothness;
	SKTexture* _texture;
	SKRegion* _region;

}

@property (nonatomic,retain) SKRegion * region;                              //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) float strength; 
@property (assign,nonatomic) float falloff; 
@property (assign,nonatomic) float minimumRadius; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isExclusive,nonatomic) BOOL exclusive;              //@synthesize exclusive=_exclusive - In the implementation block
@property (assign,nonatomic) unsigned categoryBitMask; 
@property (assign,nonatomic)  direction; 
@property (assign,nonatomic) float smoothness;                               //@synthesize smoothness=_smoothness - In the implementation block
@property (assign,nonatomic) float animationSpeed;                           //@synthesize animationSpeed=_animationSpeed - In the implementation block
@property (nonatomic,retain) SKTexture * texture;                            //@synthesize texture=_texture - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)magneticField;
+(id)dragField;
+(id)linearGravityFieldWithVector:;
+(id)velocityFieldWithVector:;
+(id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)vortexField;
+(id)springField;
+(id)electricField;
+(id)customFieldWithEvaluationBlock:(/*^block*/id)arg1 ;
+(id)radialGravityField;
+(id)velocityFieldWithTexture:(id)arg1 ;
-()direction;
-(SKTexture *)texture;
-(id)field;
-(float)falloff;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExclusive:(BOOL)arg1 ;
-(SKRegion *)region;
-(void)setMinimumRadius:(float)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isExclusive;
-(unsigned)categoryBitMask;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(void)setRegion:(SKRegion *)arg1 ;
-(void)setDirection:;
-(id)init;
-(void)setAnimationSpeed:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)smoothness;
-(void)setFalloff:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(float)minimumRadius;
-(float)strength;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setStrength:(float)arg1 ;
-(void)setTexture:(SKTexture *)arg1 ;
-(void)setSmoothness:(float)arg1 ;
-(float)animationSpeed;
-(void)setPhysicsField:(id)arg1 ;
-(id)_descriptionClassName;
-(id)initWithCoder:(id)arg1 field:(id)arg2 ;
@end

