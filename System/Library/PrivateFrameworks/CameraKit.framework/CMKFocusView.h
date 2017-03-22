/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, CAKeyframeAnimation, UIColor;

@interface CMKFocusView : UIView {

	NSArray* _images;
	CAKeyframeAnimation* _contentsAnimation;
	CAKeyframeAnimation* _boundsAnimation;
	double _animationStartTime;
	double _lastInteractionTime;
	BOOL _fadingOut;
	long long _suspendCount;
	BOOL _shouldFadeOut;
	BOOL _fadeOutStarted;
	double _lastFadeOutTime;
	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) double lastFadeOutTime;              //@synthesize lastFadeOutTime=_lastFadeOutTime - In the implementation block
+(double)minimumTimeBeforeFadeOut;
-(void)dealloc;
-(id)init;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
-(id)initWithColor:(id)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)_fadeOut;
-(id)nameForLightImage;
-(id)nameForDarkImage;
-(double)dimAfterInteractionDelay;
-(void)_loadImagesWithColor:(id)arg1 imageSize:(CGSize*)arg2 ;
-(void)startAnimatingContents:(BOOL)arg1 bounds:(BOOL)arg2 fadeIn:(BOOL)arg3 ;
-(void)_cancelDelayedFadeOut;
-(void)updateLastInteractionTime;
-(id)_createContentsAnimation;
-(id)_createBoundsAnimation;
-(void)_cancelDelayedDim;
-(void)_fadeOutDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)resetFadeOutSuspension;
-(void)_cancelDelayedPauseContentsAnimation;
-(void)_fadeOutIfNeeded;
-(void)_pauseContentsAnimation;
-(void)_dimForInactivity;
-(BOOL)_cancelFadeOutForSuspend;
-(void)_scheduleDelayedDim;
-(void)_animateAlpha:(double)arg1 withDuration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopContentsAnimation;
-(void)setDefaultContents;
-(void)focusDidEnd;
-(void)cancelFadeOut;
-(void)suspendFadeOut;
-(void)resumeFadeOutResetPending:(BOOL)arg1 ;
-(double)lastFadeOutTime;
@end
