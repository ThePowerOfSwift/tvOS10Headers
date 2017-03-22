/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWebSelectionView.h>

@protocol UIWKInteractionViewProtocol;
@class UIView, UIWebSelectionHandle;

@interface UIWKSelectionView : UIWebSelectionView {

	UIView*<UIWKInteractionViewProtocol> _interactionView;
	UIWebSelectionHandle* _handle;
	BOOL _selectionIsBlock;
	BOOL _thresholdIsValid;
	BOOL _usingGesture;
	CGPoint _lastTouchPoint;

}
-(id)initWithView:(id)arg1 ;
-(void)updateSelectionRects;
-(void)selectionChanged;
-(CGRect)visibleRect;
-(void)clearSelection;
-(void)showControls;
-(id)scroller;
-(id)selectionRects;
-(void)startSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)updateSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)endSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)resetSelection;
-(CGRect)selectionBoundingRect;
-(void)showRangeSelection;
-(void)updateFrameAndHandlesWithAnimation:(BOOL)arg1 ;
-(id)tintView;
-(BOOL)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2 ;
-(void)onBeforeScrollOrZoomHidingSelection:(BOOL)arg1 ;
-(void)onAfterScrollOrZoomShowingSelection:(BOOL)arg1 ;
-(void)updateTextRangeViewSelectionRects;
-(void)showCopyCalloutWithAnimation:(BOOL)arg1 ;
-(void)setHandleCenters;
-(CGRect)fetchSelectionBoundingRect;
-(BOOL)shouldExpandForActiveHandle;
-(BOOL)shouldContractForActiveHandle;
-(void)switchToTextModeForHandle:(id)arg1 ;
-(BOOL)shouldSwitchToBlockModeForHandle:(id)arg1 ;
-(void)switchToBlockModeForHandle:(id)arg1 ;
-(BOOL)isHorizontalWritingMode;
-(void)touchChanged:(id)arg1 forHandle:(id)arg2 ;
-(void)touchChanged:(id)arg1 forHandleInText:(id)arg2 ;
-(void)setSelectionMode:(BOOL)arg1 ;
-(void)selectionCreationStartedWithPoint:(CGPoint)arg1 ;
-(void)selectionCreationUpdatedWithPoint:(CGPoint)arg1 ;
-(void)selectionCreationEndedWithPoint:(CGPoint)arg1 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3 ;
-(void)blockSelectionChangedWithTouch:(long long)arg1 withFlags:(long long)arg2 growThreshold:(double)arg3 shrinkThreshold:(double)arg4 ;
-(CGRect)unobscuredRect;
-(double)handleOffsetForPoint:(CGPoint)arg1 handlePosition:(int)arg2 ;
-(void)updateRangedSelectionData:(id)arg1 ;
@end
