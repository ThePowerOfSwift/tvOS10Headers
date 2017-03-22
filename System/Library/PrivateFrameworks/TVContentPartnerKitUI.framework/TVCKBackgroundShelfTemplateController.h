/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <TVMLKit/_TVStackTemplateController.h>
#import <TVContentPartnerKitUI/TVCKBackgroundShelfViewControllerDelegate.h>
#import <TVContentPartnerKitUI/TVAppTemplateController.h>

@class _TVImageView, UIImageView, UIView, TVCKBackgroundShelfViewController, UIFocusGuide, NSString;

@interface TVCKBackgroundShelfTemplateController : _TVStackTemplateController <TVCKBackgroundShelfViewControllerDelegate, TVAppTemplateController> {

	_TVImageView* _backgroundImageView;
	BOOL _isFocusInUpNext;
	_TVImageView* _loadingBackgroundImageView;
	UIImageView* _materialImageView;
	BOOL _materialIsVisible;
	double _maxMaterialBlurRadius;
	BOOL _nextFocusUpdateShouldFocusUpNext;
	UIView* _relatedOverlayView;
	TVCKBackgroundShelfViewController* _backgroundShelfVC;
	UIFocusGuide* _onboardingFocusGuide;
	BOOL _imageViewOverridden;

}

@property (getter=isFocusInUpNext,nonatomic,readonly) BOOL isFocusInUpNext; 
@property (getter=isUpNextEmpty,nonatomic,readonly) BOOL isUpNextEmpty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)viewDidLayoutSubviews;
-(BOOL)supportsIdleModeVisualEffects;
-(void)updateWithViewElement:(id)arg1 ;
-(id)_yOffsetForView:(id)arg1 withScrollView:(id)arg2 targetYOffset:(double)arg3 ;
-(void)_updateMaterialInBackgroundForImage:(id)arg1 userInterfaceStyle:(long long)arg2 ;
-(void)_setRelateOverlayView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setBackgroundImageView:(id)arg1 animated:(BOOL)arg2 ;
-(void)moveFocusToUpNextAnimated:(BOOL)arg1 ;
-(void)_transitionFromView:(id)arg1 toView:(id)arg2 crossfade:(BOOL)arg3 toViewAtBottom:(BOOL)arg4 ;
-(void)backgroundShelfViewController:(id)arg1 didUpdateRelatedContentImage:(id)arg2 withRelatedView:(id)arg3 withOverrideImageView:(id)arg4 ;
-(BOOL)isFocusInUpNext;
-(BOOL)isUpNextEmpty;
-(void)moveFocusToUpNext;
@end
