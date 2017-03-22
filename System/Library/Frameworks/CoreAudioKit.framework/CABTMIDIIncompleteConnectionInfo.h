/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSBTLEPeripheral;

@interface CABTMIDIIncompleteConnectionInfo : NSObject {

	BOOL _connecting;
	unsigned long long _timeOutInterval;
	AMSBTLEPeripheral* _peripheral;

}

@property (getter=isConnecting) BOOL connecting;                          //@synthesize connecting=_connecting - In the implementation block
@property (assign) unsigned long long timeOutInterval;                    //@synthesize timeOutInterval=_timeOutInterval - In the implementation block
@property (nonatomic,retain) AMSBTLEPeripheral * peripheral;              //@synthesize peripheral=_peripheral - In the implementation block
-(void)setConnecting:(BOOL)arg1 ;
-(BOOL)isConnecting;
-(AMSBTLEPeripheral *)peripheral;
-(void)setPeripheral:(AMSBTLEPeripheral *)arg1 ;
-(void)setTimeOutInterval:(unsigned long long)arg1 ;
-(id)initWithPeripheral:(id)arg1 isConnecting:(BOOL)arg2 ;
-(unsigned long long)timeOutInterval;
@end
