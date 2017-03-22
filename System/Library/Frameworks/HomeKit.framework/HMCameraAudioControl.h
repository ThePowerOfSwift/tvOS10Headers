/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMCameraControl.h>

@class _HMCameraAudioControl, HMCharacteristic;

@interface HMCameraAudioControl : HMCameraControl {

	_HMCameraAudioControl* _audioControl;

}

@property (nonatomic,retain) _HMCameraAudioControl * audioControl;              //@synthesize audioControl=_audioControl - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * mute; 
@property (nonatomic,readonly) HMCharacteristic * volume; 
-(HMCharacteristic *)volume;
-(id)initWithAudioControl:(id)arg1 ;
-(_HMCameraAudioControl *)audioControl;
-(void)setAudioControl:(_HMCameraAudioControl *)arg1 ;
-(HMCharacteristic *)mute;
@end
