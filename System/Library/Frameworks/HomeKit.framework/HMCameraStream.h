/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMCameraSource.h>

@class _HMCameraStream;

@interface HMCameraStream : HMCameraSource {

	_HMCameraStream* _stream;

}

@property (nonatomic,retain) _HMCameraStream * stream;                             //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) unsigned long long audioStreamSetting; 
-(_HMCameraStream *)stream;
-(void)setStream:(_HMCameraStream *)arg1 ;
-(void)updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)audioStreamSetting;
-(void)setAudioStreamSetting:(unsigned long long)arg1 ;
-(id)initWithStream:(id)arg1 ;
@end
