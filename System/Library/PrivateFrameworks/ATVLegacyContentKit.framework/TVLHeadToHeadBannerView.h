/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UIView.h>

@class TVLHeadToHeadBannerElement, TVImageView, UILabel;

@interface TVLHeadToHeadBannerView : UIView {

	double _imageHeight;
	BOOL _alignLogosToEdges;
	TVLHeadToHeadBannerElement* _bannerElement;
	TVImageView* _backgroundImageView;
	TVImageView* _leftImageView;
	TVImageView* _rightImageView;
	UILabel* _separatorLabel;

}

@property (nonatomic,retain) TVLHeadToHeadBannerElement * bannerElement;              //@synthesize bannerElement=_bannerElement - In the implementation block
@property (nonatomic,retain) TVImageView * backgroundImageView;                       //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) TVImageView * leftImageView;                             //@synthesize leftImageView=_leftImageView - In the implementation block
@property (nonatomic,retain) TVImageView * rightImageView;                            //@synthesize rightImageView=_rightImageView - In the implementation block
@property (nonatomic,retain) UILabel * separatorLabel;                                //@synthesize separatorLabel=_separatorLabel - In the implementation block
@property (assign,nonatomic) BOOL alignLogosToEdges;                                  //@synthesize alignLogosToEdges=_alignLogosToEdges - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(TVImageView *)backgroundImageView;
-(TVImageView *)rightImageView;
-(void)setRightImageView:(TVImageView *)arg1 ;
-(id)initWithHeadToHeadBannerElement:(id)arg1 ;
-(TVImageView *)leftImageView;
-(void)setLeftImageView:(TVImageView *)arg1 ;
-(UILabel *)separatorLabel;
-(void)setSeparatorLabel:(UILabel *)arg1 ;
-(void)setAlignLogosToEdges:(BOOL)arg1 ;
-(BOOL)alignLogosToEdges;
-(void)setBackgroundImageView:(TVImageView *)arg1 ;
-(void)setBannerElement:(TVLHeadToHeadBannerElement *)arg1 ;
-(TVLHeadToHeadBannerElement *)bannerElement;
@end
