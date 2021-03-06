/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class IKViewElement, UIView;

@interface _TVDeckViewController : UIViewController {

	IKViewElement* _deckElement;
	UIView* _pendingView;
	UIView* _currentView;

}

@property (nonatomic,retain) IKViewElement * deckElement;              //@synthesize deckElement=_deckElement - In the implementation block
@property (nonatomic,retain) UIView * pendingView;                     //@synthesize pendingView=_pendingView - In the implementation block
@property (nonatomic,retain) UIView * currentView;                     //@synthesize currentView=_currentView - In the implementation block
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_dissolveToPendingView;
-(void)setCurrentView:(UIView *)arg1 ;
-(UIView *)currentView;
-(void)updateWithDeckElement:(id)arg1 ;
-(void)_scrollingGridViewReady:(id)arg1 ;
-(UIView *)pendingView;
-(void)setPendingView:(UIView *)arg1 ;
-(void)_deckImageViewReady:(id)arg1 ;
-(void)_resumePreview;
-(IKViewElement *)deckElement;
-(void)setDeckElement:(IKViewElement *)arg1 ;
-(void)_pausePreview;
@end

