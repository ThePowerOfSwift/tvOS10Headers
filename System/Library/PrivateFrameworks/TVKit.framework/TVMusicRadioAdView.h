/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol TVSPlayback;
@class NSURL, TVImageView, TVMusicRoundProgressView, NSTimer;

@interface TVMusicRadioAdView : UIView {

	NSURL* _adImageURL;
	id<TVSPlayback> _player;
	TVImageView* _adImageView;
	TVMusicRoundProgressView* _progressView;
	NSTimer* _timer;

}

@property (nonatomic,retain) id<TVSPlayback> player;                               //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) TVImageView * adImageView;                            //@synthesize adImageView=_adImageView - In the implementation block
@property (nonatomic,retain) TVMusicRoundProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                      //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy,readonly) NSURL * adImageURL;                            //@synthesize adImageURL=_adImageURL - In the implementation block
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)setPlayer:(id<TVSPlayback>)arg1 ;
-(id<TVSPlayback>)player;
-(void)setAdImageProxy:(id)arg1 ;
-(void)progressTimerFireMethod:(id)arg1 ;
-(void)_updateProgressView;
-(TVImageView *)adImageView;
-(id)initWithAdImageURL:(id)arg1 player:(id)arg2 ;
-(NSURL *)adImageURL;
-(void)setAdImageView:(TVImageView *)arg1 ;
-(void)setProgressView:(TVMusicRoundProgressView *)arg1 ;
-(TVMusicRoundProgressView *)progressView;
@end
