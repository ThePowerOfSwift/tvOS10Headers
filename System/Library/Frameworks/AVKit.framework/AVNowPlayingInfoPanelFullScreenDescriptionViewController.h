/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class AVFocusableScrollView, UILabel, UIVisualEffectView, NSString, AVPlayerController;

@interface AVNowPlayingInfoPanelFullScreenDescriptionViewController : UIViewController {

	AVFocusableScrollView* _scrollView;
	UILabel* _textLabel;
	UIVisualEffectView* _backdropView;
	BOOL _shouldResumePlayback;
	NSString* _text;
	AVPlayerController* _playerController;

}

@property (nonatomic,copy) NSString * text;                                             //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL shouldResumePlayback;                                 //@synthesize shouldResumePlayback=_shouldResumePlayback - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerController * playerController;              //@synthesize playerController=_playerController - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)shouldResumePlayback;
-(void)setShouldResumePlayback:(BOOL)arg1 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
@end

