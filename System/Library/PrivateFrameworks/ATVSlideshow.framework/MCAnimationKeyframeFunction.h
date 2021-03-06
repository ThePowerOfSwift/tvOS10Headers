/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAnimationKeyframe.h>

@class NSString, NSDictionary;

@interface MCAnimationKeyframeFunction : MCAnimationKeyframe {

	float mInnerEaseInControl;
	float mInnerEaseOutControl;
	double mDuration;
	NSString* mFunction;
	NSDictionary* mFunctionParameters;
	double mFunctionTimeOffset;
	double mFunctionTimeFactor;

}

@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * function; 
@property (nonatomic,retain) NSDictionary * functionParameters; 
@property (assign,nonatomic) double functionTimeOffset; 
@property (assign,nonatomic) double functionTimeFactor; 
@property (assign,nonatomic) float innerEaseInControl; 
@property (assign,nonatomic) float innerEaseOutControl; 
+(id)keyframeWithFunction:(id)arg1 atTime:(double)arg2 offsetKind:(int)arg3 forDuration:(double)arg4 ;
-(id)init;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setFunction:(NSString *)arg1 ;
-(void)setFunctionTimeOffset:(double)arg1 ;
-(void)setFunctionTimeFactor:(double)arg1 ;
-(void)setInnerEaseInControl:(float)arg1 ;
-(void)setInnerEaseOutControl:(float)arg1 ;
-(void)setFunctionParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)functionParameters;
-(double)functionTimeOffset;
-(double)functionTimeFactor;
-(float)innerEaseInControl;
-(float)innerEaseOutControl;
-(void)demolish;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(NSString *)function;
@end

