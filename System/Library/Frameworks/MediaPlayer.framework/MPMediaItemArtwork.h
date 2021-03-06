/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface MPMediaItemArtwork : NSObject {

	CGSize _bounds;
	/*^block*/id _requestHandler;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGRect imageCropRect; 
-(CGRect)bounds;
-(id)init;
-(id)initWithImage:(id)arg1 ;
-(id)initWithBoundsSize:(CGSize)arg1 requestHandler:(/*^block*/id)arg2 ;
-(id)imageWithSize:(CGSize)arg1 ;
-(CGRect)imageCropRect;
-(id)jpegDataWithSize:(CGSize)arg1 ;
-(id)pngDataWithSize:(CGSize)arg1 ;
@end

