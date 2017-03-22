/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointDistance : PKPhysicsJoint {

	unsigned* _jointDef : 2DistanceJointDef;
	unsigned* _joint : 2DistanceJoint;
	CGPoint _anchorA;
	CGPoint _anchorB;

}

@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double frequency; 
@property (assign,nonatomic) double length; 
@property (assign,nonatomic) BOOL collideConnected; 
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(CGPoint)arg3 localAnchorB:(CGPoint)arg4 ;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
-(unsigned*)_joint;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(CGPoint)arg3 localAnchorB:(CGPoint)arg4 ;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
-(BOOL)collideConnected;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDamping:(double)arg1 ;
-(double)length;
-(void)setLength:(double)arg1 ;
-(double)damping;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(void)setCollideConnected:(BOOL)arg1 ;
-(void)create;
@end
