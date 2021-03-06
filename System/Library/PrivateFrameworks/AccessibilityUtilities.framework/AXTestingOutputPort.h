/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioSessionPortDescription.h>

@class NSString, NSArray;

@interface AXTestingOutputPort : AVAudioSessionPortDescription {

	NSString* portType;
	NSString* portName;
	NSString* UID;
	NSArray* _ttsChannels;

}

@property (retain) NSString * portType; 
@property (retain) NSString * portName; 
@property (retain) NSString * UID; 
@property (retain) NSArray * ttsChannels;              //@synthesize ttsChannels=_ttsChannels - In the implementation block
-(void)dealloc;
-(NSString *)portType;
-(void)setUID:(NSString *)arg1 ;
-(id)channels;
-(void)setPortName:(NSString *)arg1 ;
-(void)setPortType:(NSString *)arg1 ;
-(void)setTtsChannels:(NSArray *)arg1 ;
-(NSArray *)ttsChannels;
-(NSString *)portName;
-(NSString *)UID;
@end

