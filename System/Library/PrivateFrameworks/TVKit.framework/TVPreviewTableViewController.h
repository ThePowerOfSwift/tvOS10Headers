/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UITableViewController.h>
#import <TVKit/TVTableViewDelegate.h>

@class UIVisualEffectView, UIView, TVFocusRedirectView, NSIndexPath, UIViewController, TVTableView, NSString;

@interface TVPreviewTableViewController : UITableViewController <TVTableViewDelegate> {

	UIVisualEffectView* _backdropView;
	UIView* _tableContainingView;
	TVFocusRedirectView* _previewContainerView;
	NSIndexPath* _lastAutoUpdatePreviewIndexPath;
	double _lastAutoUpdatePreviewDelay;
	NSIndexPath* _pendingAutoUpdatePreviewIndexPath;
	BOOL _previewOnRightSide;
	BOOL _fadeThroughPreviews;
	UIViewController* _previewViewController;
	double _tableViewWidth;
	unsigned long long _backdropViewMode;
	UIView* _bannerView;
	UIView* _headerView;
	UIView* _previewView;
	/*^block*/id _autoUpdatePreviewViewControllerBlock;
	UIEdgeInsets _tableViewPadding;
	UIEdgeInsets _previewViewPadding;

}

@property (nonatomic,retain) UIView * previewView;                                  //@synthesize previewView=_previewView - In the implementation block
@property (assign,nonatomic) BOOL fadeThroughPreviews;                              //@synthesize fadeThroughPreviews=_fadeThroughPreviews - In the implementation block
@property (nonatomic,copy) id autoUpdatePreviewViewControllerBlock;                 //@synthesize autoUpdatePreviewViewControllerBlock=_autoUpdatePreviewViewControllerBlock - In the implementation block
@property (nonatomic,retain) UIViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (assign,nonatomic) double tableViewWidth;                                 //@synthesize tableViewWidth=_tableViewWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tableViewPadding;                         //@synthesize tableViewPadding=_tableViewPadding - In the implementation block
@property (assign,nonatomic) UIEdgeInsets previewViewPadding;                       //@synthesize previewViewPadding=_previewViewPadding - In the implementation block
@property (assign,nonatomic) BOOL previewOnRightSide;                               //@synthesize previewOnRightSide=_previewOnRightSide - In the implementation block
@property (assign,nonatomic) unsigned long long backdropViewMode;                   //@synthesize backdropViewMode=_backdropViewMode - In the implementation block
@property (nonatomic,retain) UIView * bannerView;                                   //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) TVTableView * tableView; 
@property (nonatomic,retain) UIView * headerView;                                   //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultSectionHeaderHeight;
+(double)defaultRowHeight;
-(void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(id)preferredFocusedItem;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(TVTableView *)tableView;
-(id)initWithStyle:(long long)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)setBackdropViewMode:(unsigned long long)arg1 ;
-(void)setTableViewWidth:(double)arg1 ;
-(void)setBackdropViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_addBackdropView;
-(void)_applicationDidFinishSuspension:(id)arg1 ;
-(void)_setPreviewPaused:(BOOL)arg1 ;
-(CGRect)_frameForHeaderView;
-(CGRect)_frameForTable;
-(CGRect)_frameForPreview;
-(CGRect)adjustedFrameForPreviewFrame:(CGRect)arg1 ;
-(BOOL)_isAutoUpdatingPreviewViewController;
-(void)_cancelDelayedAutoUpdateOfPreviewViewController;
-(void)_delayedAutoUpdatePreviewViewController;
-(void)_unregisterForBackdropViewHideStateUpdates;
-(void)_registerForBackdropViewHideStateUpdates;
-(void)_updateBackdropViewAfterSettingPreviewViewIfNessecary;
-(void)_updateBackdropViewBeforeSettingPreviewViewIfNessecary;
-(void)_setPreviewView:(id)arg1 forced:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setPreviewView:(UIView *)arg1 ;
-(void)_cancelAutoUpdatingPreviewViewController;
-(BOOL)fadeThroughPreviews;
-(void)setPreviewViewController:(id)arg1 forced:(BOOL)arg2 ;
-(void)_removeBackdropView;
-(id)autoUpdatePreviewViewControllerBlock;
-(void)_resetAutoUpdatePreviewViewControllerState;
-(unsigned long long)backdropViewMode;
-(BOOL)_isBackdropViewVisible;
-(double)tableViewWidth;
-(void)setAutoUpdatePreviewViewControllerBlock:(id)arg1 ;
-(void)setBannerView:(UIView *)arg1 ;
-(void)setPreviewOnRightSide:(BOOL)arg1 ;
-(UIEdgeInsets)tableViewPadding;
-(void)setTableViewPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)previewViewPadding;
-(void)setPreviewViewPadding:(UIEdgeInsets)arg1 ;
-(BOOL)previewOnRightSide;
-(UIView *)bannerView;
-(UIView *)previewView;
-(void)setFadeThroughPreviews:(BOOL)arg1 ;
-(UIViewController *)previewViewController;
-(void)setPreviewViewController:(UIViewController *)arg1 ;
@end
