/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIView.h>

@class AVPlayer;

@interface _AVPlayerLayerThumbnailView : UIView

@property (nonatomic,retain) AVPlayer * player; 
+(Class)layerClass;
-(void)dealloc;
-(id)init;
-(CGSize)intrinsicContentSize;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
@end
