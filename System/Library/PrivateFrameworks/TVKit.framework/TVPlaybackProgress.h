/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVPlaybackProgress : NSObject {

	NSString* _firstTitle;
	NSString* _currentTitle;
	NSString* _lastTitle;
	double _progress;

}

@property (nonatomic,copy) NSString * firstTitle;                //@synthesize firstTitle=_firstTitle - In the implementation block
@property (nonatomic,copy) NSString * currentTitle;              //@synthesize currentTitle=_currentTitle - In the implementation block
@property (nonatomic,copy) NSString * lastTitle;                 //@synthesize lastTitle=_lastTitle - In the implementation block
@property (assign,nonatomic) double progress;                    //@synthesize progress=_progress - In the implementation block
-(id)init;
-(void)setProgress:(double)arg1 ;
-(NSString *)currentTitle;
-(double)progress;
-(NSString *)firstTitle;
-(void)setFirstTitle:(NSString *)arg1 ;
-(void)setCurrentTitle:(NSString *)arg1 ;
-(NSString *)lastTitle;
-(void)setLastTitle:(NSString *)arg1 ;
@end

