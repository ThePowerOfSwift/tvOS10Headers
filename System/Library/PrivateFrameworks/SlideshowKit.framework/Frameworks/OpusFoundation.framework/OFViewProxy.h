/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, OFUIViewController;

@interface OFViewProxy : UIView {

	NSMutableArray* _layoutSteps;
	SCD_Struct_OF6* _layoutInfo;
	OFUIViewController* _viewControllerProxy;
	BOOL _magicLayoutEnabled;

}

@property (assign,nonatomic) OFUIViewController * viewControllerProxy;                         //@synthesize viewControllerProxy=_viewControllerProxy - In the implementation block
@property (assign,getter=isMagicLayoutEnabled,nonatomic) BOOL magicLayoutEnabled;              //@synthesize magicLayoutEnabled=_magicLayoutEnabled - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)commonInit;
-(void)setViewControllerProxy:(OFUIViewController *)arg1 ;
-(void)runMagicLayout;
-(void)addLayoutStep:(id)arg1 ;
-(BOOL)isMagicLayoutEnabled;
-(void)addLayoutSteps:(id)arg1 ;
-(OFUIViewController *)viewControllerProxy;
-(void)setMagicLayoutEnabled:(BOOL)arg1 ;
@end
