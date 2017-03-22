/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NRDevice.h>

@protocol NRFrameworkDeviceDelegate;
@class NSUUID;

@interface NRFrameworkDevice : NRDevice {

	NSUUID* _deviceID;
	id<NRFrameworkDeviceDelegate> _syncDevicesDelegate;

}

@property (nonatomic,retain) NSUUID * deviceID;                                                     //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic,__weak) id<NRFrameworkDeviceDelegate> syncDevicesDelegate;              //@synthesize syncDevicesDelegate=_syncDevicesDelegate - In the implementation block
-(id)_valueForProperty:(id)arg1 ;
-(BOOL)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)valueForProperty:(id)arg1 ;
-(void)setSyncDevicesDelegate:(id<NRFrameworkDeviceDelegate>)arg1 ;
-(id)initWithDevice:(id)arg1 deviceID:(id)arg2 queue:(id)arg3 ;
-(id<NRFrameworkDeviceDelegate>)syncDevicesDelegate;
-(NSUUID *)deviceID;
-(void)setDeviceID:(NSUUID *)arg1 ;
@end
