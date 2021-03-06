/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UIView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLPosterOverlayElement, UILabel, TVImageView;

@interface TVLImageStackPosterOverlayView : UIView <ATVUpdatable> {

	TVLPosterOverlayElement* _overlayElement;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	TVImageView* _badgeImageView;
	TVImageView* _backgroundImageView;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,retain) TVLPosterOverlayElement * overlayElement;              //@synthesize overlayElement=_overlayElement - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * subtitleLabel;                        //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic,__weak) TVImageView * badgeImageView;                   //@synthesize badgeImageView=_badgeImageView - In the implementation block
@property (assign,nonatomic,__weak) TVImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                             //@synthesize contentInset=_contentInset - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(TVImageView *)backgroundImageView;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(TVImageView *)badgeImageView;
-(void)setBadgeImageView:(TVImageView *)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(id)initWithOverlayElement:(id)arg1 ;
-(TVLPosterOverlayElement *)overlayElement;
-(void)setOverlayElement:(TVLPosterOverlayElement *)arg1 ;
-(void)setBackgroundImageView:(TVImageView *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
@end

