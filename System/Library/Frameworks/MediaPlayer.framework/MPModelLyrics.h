/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelLyrics : MPModelObject {

	BOOL _hasStoreLyrics;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL hasStoreLyrics;              //@synthesize hasStoreLyrics=_hasStoreLyrics - In the implementation block
+(id)__text__KEY;
+(id)__MPModelPropertyLyricsText__PROPERTY;
+(id)__hasStoreLyrics__KEY;
+(id)__MPModelPropertyLyricsHasStoreLyrics__PROPERTY;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)descriptionWithType:(long long)arg1 ;
-(BOOL)hasStoreLyrics;
-(void)setHasStoreLyrics:(BOOL)arg1 ;
@end
