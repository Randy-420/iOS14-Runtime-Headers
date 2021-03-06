/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNActionTargetState : NSObject {

	BOOL usesEuler;
	float opacity;
	SCNVector3 position;
	SCNVector3 euler;
	SCNVector3 scale;
	SCNVector4 rotation;

}

@property (assign,nonatomic) SCNVector3 position; 
@property (assign,nonatomic) SCNVector3 euler; 
@property (assign,nonatomic) SCNVector3 scale; 
@property (assign,nonatomic) SCNVector4 rotation; 
@property (assign,nonatomic) BOOL usesEuler; 
@property (assign,nonatomic) float opacity; 
-(void)setRotation:(SCNVector4)arg1 ;
-(void)setPosition:(SCNVector3)arg1 ;
-(SCNVector4)rotation;
-(SCNVector3)scale;
-(void)setScale:(SCNVector3)arg1 ;
-(SCNVector3)euler;
-(SCNVector3)position;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setEuler:(SCNVector3)arg1 ;
-(BOOL)usesEuler;
-(void)setUsesEuler:(BOOL)arg1 ;
@end

