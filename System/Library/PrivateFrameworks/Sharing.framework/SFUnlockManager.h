/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface SFUnlockManager : NSObject {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_source> _stateRequestTimer;

}
+(id)sharedUnlockManager;
-(id)init;
-(void)enableUnlockWithDevice:(id)arg1 fromKey:(BOOL)arg2 withPasscode:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)unlockEnabledWithDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)establishStashBagWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelStateRequestTimer;
-(id)timerWithBlock:(/*^block*/id)arg1 ;
-(void)unlockStateForDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)disableUnlockWithDevice:(id)arg1 ;
@end

