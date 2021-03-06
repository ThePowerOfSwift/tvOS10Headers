/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebMediaSessionHelper : NSObject {

	MediaSessionManageriOS* _callback;
	RetainPtr<MPVolumeView>* _volumeView;
	RetainPtr<MPAVRoutingController>* _airPlayPresenceRoutingController;

}
-(id)initWithCallback:(MediaSessionManageriOS*)arg1 ;
-(void)clearCallback;
-(BOOL)hasWirelessTargetsAvailable;
-(void)startMonitoringAirPlayRoutes;
-(void)stopMonitoringAirPlayRoutes;
-(void)setVolumeView:(RetainPtr<MPVolumeView>*)arg1 ;
-(void)wirelessRoutesAvailableDidChange:(id)arg1 ;
-(void)interruption:(id)arg1 ;
-(void)allocateVolumeView;
-(void)dealloc;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
@end

