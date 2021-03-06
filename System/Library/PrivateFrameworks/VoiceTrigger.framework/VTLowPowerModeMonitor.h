/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLowPowerModeMonitor : VTEventMonitor {

	unsigned char _powerMode;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceiveLowPowerModeChanged;
-(unsigned char)_checkPowerMode;
-(void)_didReceiveLowPowerModeChangedInQueue:(unsigned char)arg1 ;
-(void)_notifyObserver:(id)arg1 withPowerMode:(unsigned char)arg2 ;
-(unsigned char)powerMode;
-(BOOL)isLowPowerMode;
@end

