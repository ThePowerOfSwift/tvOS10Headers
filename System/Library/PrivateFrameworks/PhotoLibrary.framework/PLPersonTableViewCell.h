/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImage, NSString, UIImageView;

@interface PLPersonTableViewCell : UITableViewCell {

	UIImage* _personIcon;
	NSString* _personFirstName;
	NSString* _personLastName;
	UIImageView* __personIconImageView;
	UIImage* __personMonogramImage;

}

@property (setter=_setPersonIconImageView:,nonatomic,retain) UIImageView * _personIconImageView;              //@synthesize _personIconImageView=__personIconImageView - In the implementation block
@property (setter=_setPersonMonogramImage:,nonatomic,retain) UIImage * _personMonogramImage;                  //@synthesize _personMonogramImage=__personMonogramImage - In the implementation block
@property (nonatomic,retain) UIImage * personIcon;                                                            //@synthesize personIcon=_personIcon - In the implementation block
@property (nonatomic,copy) NSString * personFirstName;                                                        //@synthesize personFirstName=_personFirstName - In the implementation block
@property (nonatomic,copy) NSString * personLastName;                                                         //@synthesize personLastName=_personLastName - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)_updatePersonIconImageView;
-(void)_setPersonMonogramImage:(id)arg1 ;
-(UIImage *)personIcon;
-(NSString *)personFirstName;
-(NSString *)personLastName;
-(UIImageView *)_personIconImageView;
-(void)_setPersonIconImageView:(id)arg1 ;
-(void)setPersonIcon:(UIImage *)arg1 ;
-(void)setPersonFirstName:(NSString *)arg1 ;
-(void)setPersonLastName:(NSString *)arg1 ;
-(UIImage *)_personMonogramImage;
@end
