/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient <NSObject>
@property (nonatomic,readonly) BOOL delaysContentTouches; 
@property (getter=_touchDelayForScrollDetection,nonatomic,readonly) double touchDelayForScrollDetection; 
@property (getter=_scrollHysteresis,nonatomic,readonly) double scrollHysteresis; 
@property (getter=_canScrollX,nonatomic,readonly) BOOL canScrollX; 
@property (getter=_canScrollY,nonatomic,readonly) BOOL canScrollY; 
@required
-(BOOL)_canScrollX;
-(BOOL)_canScrollY;
-(BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
-(BOOL)delaysContentTouches;
-(double)_touchDelayForScrollDetection;
-(double)_scrollHysteresis;

@end

