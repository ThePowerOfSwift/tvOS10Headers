/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIControl.h>

@class _UIFloatingContentView, UIVisualEffectView, UIView, UIColor, NSString, _TVImageView, UILabel, IKViewElement;

@interface _TVButton : UIControl {

	_UIFloatingContentView* _floatingView;
	UIVisualEffectView* _backdropView;
	UIView* _overlayView;
	UIColor* __backgroundColor;
	BOOL _blurEnabled;
	BOOL _imageTrailsTextContent;
	long long _backdropStyle;
	double _cornerRadius;
	NSString* _groupName;
	_TVImageView* _imageView;
	UILabel* _textContentView;
	_TVImageView* _accessoryView;
	UIColor* _highlightColor;
	IKViewElement* _viewElement;

}

@property (nonatomic,readonly) long long backdropStyle;                    //@synthesize backdropStyle=_backdropStyle - In the implementation block
@property (nonatomic,readonly) BOOL blurEnabled;                           //@synthesize blurEnabled=_blurEnabled - In the implementation block
@property (assign,nonatomic) double cornerRadius;                          //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (nonatomic,retain) NSString * groupName;                         //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic) BOOL imageTrailsTextContent;                  //@synthesize imageTrailsTextContent=_imageTrailsTextContent - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * textContentView;                    //@synthesize textContentView=_textContentView - In the implementation block
@property (nonatomic,retain) _TVImageView * accessoryView;                 //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,copy) UIColor * highlightColor;                       //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                  //@synthesize viewElement=_viewElement - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(BOOL)canBecomeFocused;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(_TVImageView *)imageView;
-(long long)backdropStyle;
-(void)setDisabled:(BOOL)arg1 ;
-(_TVImageView *)accessoryView;
-(void)setAccessoryView:(_TVImageView *)arg1 ;
-(void)setContentMotionRotation:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(void)_selectButtonAction:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(BOOL)isDisabled;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)_updateBackgroundColorForState:(unsigned long long)arg1 ;
-(double)_imageMarginFromText;
-(UILabel *)textContentView;
-(BOOL)imageTrailsTextContent;
-(void)_setFocused:(BOOL)arg1 animationCoordinator:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(BOOL)arg3 ;
-(void)setTextContentView:(UILabel *)arg1 ;
-(BOOL)blurEnabled;
-(void)setImageTrailsTextContent:(BOOL)arg1 ;
@end
