/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLImageElement, NSArray;

@interface TVLImageWithLabelsElement : TVLElement {

	TVLImageElement* _image;
	NSArray* _labels;

}

@property (nonatomic,retain) TVLImageElement * image;              //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSArray * labels;                       //@synthesize labels=_labels - In the implementation block
-(void)setImage:(TVLImageElement *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(TVLImageElement *)image;
-(void)setLabels:(NSArray *)arg1 ;
-(NSArray *)labels;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
@end
