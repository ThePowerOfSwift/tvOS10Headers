/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface MiroCircularProgressLayer : CALayer {

	float _progress;
	UIColor* _progressColor;
	double _animationDuration;

}

@property (assign,nonatomic) float progress;                        //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;               //@synthesize progressColor=_progressColor - In the implementation block
@property (assign,nonatomic) double animationDuration;              //@synthesize animationDuration=_animationDuration - In the implementation block
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setProgress:(float)arg1 ;
-(double)animationDuration;
-(float)progress;
-(id)initWithLayer:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(UIColor *)progressColor;
-(void)setProgressColor:(UIColor *)arg1 ;
@end

