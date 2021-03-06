/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ISGeneratedImageData : NSObject <NSCopying> {

	CVBufferRef _imageBuffer;
	CGImageRef _imageRef;
	id _contents;
	CGAffineTransform _preferredTransform;

}

@property (nonatomic,readonly) CVBufferRef imageBuffer;                         //@synthesize imageBuffer=_imageBuffer - In the implementation block
@property (nonatomic,readonly) CGImageRef imageRef;                             //@synthesize imageRef=_imageRef - In the implementation block
@property (nonatomic,readonly) id contents;                                     //@synthesize contents=_contents - In the implementation block
@property (assign,nonatomic) CGAffineTransform preferredTransform;              //@synthesize preferredTransform=_preferredTransform - In the implementation block
-(id)initWithCGImageRef:(CGImageRef)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)imageRef;
-(id)contents;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)preferredTransform;
-(id)initWithImageBuffer:(CVBufferRef)arg1 ;
-(id)_initWithImageContent:(id)arg1 ;
-(CVBufferRef)imageBuffer;
@end

