/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIControl, UIView;

@interface _MKSmallCalloutPassthroughButton : UIControl {

	UIControl* _targetControl;
	UIView* _highlightView;

}

@property (nonatomic,retain) UIControl * targetControl;              //@synthesize targetControl=_targetControl - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)handleTap:(id)arg1 ;
-(void)setTargetControl:(UIControl *)arg1 ;
-(UIControl *)targetControl;
@end

