/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCObject.h>
#import <libobjc.A.dylib/MCAnimationPathSupport.h>
#import <libobjc.A.dylib/MCActionSupport.h>

@class NSMutableSet, NSMutableDictionary, MCContainer, NSSet, NSDictionary;

@interface MCPlug : MCObject <MCAnimationPathSupport, MCActionSupport> {

	unsigned mFlags;
	NSMutableSet* mAnimationPaths;
	NSMutableDictionary* mActions;
	MCContainer* mContainer;
	double mPhaseInDuration;
	double mLoopDuration;
	double mPhaseOutDuration;
	double mNumberOfLoops;

}

@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned long long countOfAnimationPaths; 
@property (readonly) NSDictionary * actions; 
@property (nonatomic,readonly) unsigned long long countOfActions; 
@property (retain) MCContainer * container; 
@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double loopDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (nonatomic,readonly) double fullDuration; 
@property (assign,nonatomic) double numberOfLoops; 
@property (assign,nonatomic) BOOL startsPaused; 
@property (assign,nonatomic) BOOL preactivatesWithParent; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)init;
-(NSDictionary *)actions;
-(id)actionForKey:(id)arg1 ;
-(MCContainer *)container;
-(void)setContainer:(MCContainer *)arg1 ;
-(void)removeAllActions;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeActionForKey:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setLoopDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(void)addAnimationPath:(id)arg1 ;
-(void)removeAllAnimationPaths;
-(double)fullDuration;
-(NSSet *)animationPaths;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(double)numberOfLoops;
-(void)setNumberOfLoops:(double)arg1 ;
-(void)demolish;
-(double)loopDuration;
-(void)setStartsPaused:(BOOL)arg1 ;
-(BOOL)startsPaused;
-(BOOL)preactivatesWithParent;
-(unsigned long long)countOfAnimationPaths;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(unsigned long long)countOfActions;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)initActionsWithImprints:(id)arg1 ;
-(void)demolishActions;
-(id)imprintsForActions;
-(void)setPreactivatesWithParent:(BOOL)arg1 ;
@end

