/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface BLPerceptualBlendFilter : CIFilter {

	CIImage* _inputImage;
	CIImage* _inputBackgroundImage;
	CIImage* _inputMaskImage;

}

@property (retain) CIImage * inputImage;                        //@synthesize inputImage=_inputImage - In the implementation block
@property (retain) CIImage * inputBackgroundImage;              //@synthesize inputBackgroundImage=_inputBackgroundImage - In the implementation block
@property (retain) CIImage * inputMaskImage;                    //@synthesize inputMaskImage=_inputMaskImage - In the implementation block
-(CIImage *)inputBackgroundImage;
-(void)setInputBackgroundImage:(CIImage *)arg1 ;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
@end
