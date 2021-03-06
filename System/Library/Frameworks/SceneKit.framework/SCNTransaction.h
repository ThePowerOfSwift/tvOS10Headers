/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCNTransaction : NSObject
+(id)valueForKey:(id)arg1 ;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(/*^block*/id)completionBlock;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(void)flush;
+(void)setAnimationDuration:(double)arg1 ;
+(unsigned)currentState;
+(BOOL)disableActions;
+(void)setDisableActions:(BOOL)arg1 ;
+(void)lock;
+(void)unlock;
+(void)commit;
+(void)begin;
+(double)animationDuration;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(id)animationTimingFunction;
+(void)postCommandWithContext:(void*)arg1 object:(id)arg2 applyBlock:(/*^block*/id)arg3 ;
+(BOOL)immediateMode;
+(void)setImmediateMode:(BOOL)arg1 ;
+(void)postCommandWithContext:(void*)arg1 object:(id)arg2 keyPath:(id)arg3 applyBlock:(/*^block*/id)arg4 ;
+(void)commitImmediate;
-(void)flush;
-(void)setAnimationDuration:(double)arg1 ;
-(BOOL)disableActions;
-(void)setDisableActions:(BOOL)arg1 ;
-(void)lock;
-(void)unlock;
-(void)commit;
-(void)begin;
-(double)animationDuration;
-(void)setAnimationTimingFunction:(id)arg1 ;
-(id)animationTimingFunction;
@end

