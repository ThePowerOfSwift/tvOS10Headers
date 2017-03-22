/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUILabelComponentView.h>

@class UILabel;

@interface SiriUIDetailLabelComponentView : SiriUILabelComponentView {

	UILabel* _mainLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,retain) UILabel * mainLabel;                //@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;              //@synthesize detailLabel=_detailLabel - In the implementation block
+(id)viewForComponent:(id)arg1 ;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(UILabel *)detailLabel;
-(UILabel *)mainLabel;
-(void)setMainLabel:(UILabel *)arg1 ;
-(void)addSubviewsForComponentModel:(id)arg1 ;
-(void)setDetailLabel:(UILabel *)arg1 ;
@end
