/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@class NSArray;

@interface UIGravityBehavior : UIDynamicBehavior {

	CGPoint _gravity;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (assign,nonatomic) CGVector gravityDirection; 
@property (assign,nonatomic) double angle; 
@property (assign,nonatomic) double magnitude; 
+(BOOL)_isPrimitiveBehavior;
-(id)init;
-(id)description;
-(NSArray *)items;
-(void)removeItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)setGravityDirection:(CGVector)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)setAngle:(double)arg1 ;
-(double)angle;
-(void)_addGravityItem:(id)arg1 ;
-(void)setXComponent:(double)arg1 yComponent:(double)arg2 ;
-(CGPoint)gravity;
-(double)magnitude;
-(void)setAngle:(double)arg1 magnitude:(double)arg2 ;
-(double)yComponent;
-(void)setGravity:(CGPoint)arg1 ;
-(double)xComponent;
-(CGVector)gravityDirection;
-(CGPoint)denormalizedGravity;
-(void)setMagnitude:(double)arg1 ;
-(void)setXComponent:(double)arg1 ;
-(void)setYComponent:(double)arg1 ;
-(void)_setAngle:(double)arg1 magnitude:(double)arg2 ;
@end
