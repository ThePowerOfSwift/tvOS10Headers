/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUITabularDataCellItem.h>

@class NSDictionary;

@interface SiriTVUITabularDataTextCellItem : SiriTVUITabularDataCellItem {

	BOOL _highlighted;
	NSDictionary* _attributedTexts;
	NSDictionary* _imageURLs;
	CGSize _imageSize;

}

@property (nonatomic,copy) NSDictionary * attributedTexts;                       //@synthesize attributedTexts=_attributedTexts - In the implementation block
@property (nonatomic,copy) NSDictionary * imageURLs;                             //@synthesize imageURLs=_imageURLs - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                   //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(id)init;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)imageSize;
-(BOOL)isHighlighted;
-(void)setImageSize:(CGSize)arg1 ;
-(id)initWithAttributedTexts:(id)arg1 ;
-(void)setAttributedTexts:(NSDictionary *)arg1 ;
-(void)setImageURLs:(NSDictionary *)arg1 ;
-(id)initWithAttributedTexts:(id)arg1 imageURLs:(id)arg2 imageSize:(CGSize)arg3 highlighted:(BOOL)arg4 ;
-(id)initWithAttributedTexts:(id)arg1 imageURLs:(id)arg2 imageSize:(CGSize)arg3 ;
-(NSDictionary *)attributedTexts;
-(NSDictionary *)imageURLs;
@end
