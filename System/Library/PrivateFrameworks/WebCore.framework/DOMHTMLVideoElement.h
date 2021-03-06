/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMHTMLMediaElement.h>

@class NSString;

@interface DOMHTMLVideoElement : DOMHTMLMediaElement

@property (assign) unsigned width; 
@property (assign) unsigned height; 
@property (readonly) unsigned videoWidth; 
@property (readonly) unsigned videoHeight; 
@property (copy) NSString * poster; 
@property (assign) BOOL playsInline; 
@property (readonly) BOOL webkitSupportsFullscreen; 
@property (readonly) BOOL webkitDisplayingFullscreen; 
-(unsigned)videoWidth;
-(unsigned)videoHeight;
-(BOOL)playsInline;
-(void)setPlaysInline:(BOOL)arg1 ;
-(BOOL)webkitSupportsFullscreen;
-(BOOL)webkitDisplayingFullscreen;
-(void)webkitEnterFullscreen;
-(void)webkitExitFullscreen;
-(void)webkitEnterFullScreen;
-(void)webkitExitFullScreen;
-(unsigned)width;
-(unsigned)height;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(void)setPoster:(NSString *)arg1 ;
-(NSString *)poster;
@end

