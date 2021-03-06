/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <Foundation/NSThread.h>

@protocol OS_dispatch_semaphore;
@class NSXPCConnection, BrightnessSystemClientExportedObj, NSTimer, NSArray, NSObject;

@interface BrightnessSystemClientInternal : NSThread {

	NSXPCConnection* _connection;
	id _remote;
	BrightnessSystemClientExportedObj* exportedObj;
	BOOL _initializationComplete;
	NSTimer* _timer;
	NSArray* clientProperties;
	BOOL shouldKeepRunning;
	CFRunLoopRef _rl;
	NSObject*<OS_dispatch_semaphore> _initSemaphore;

}
-(void)dealloc;
-(id)init;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)main;
-(void)waitForInitialization;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)timerFire:(id)arg1 ;
-(void)initializationCompleted;
-(void)destroyClient;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 forProperties:(id)arg2 ;
@end

