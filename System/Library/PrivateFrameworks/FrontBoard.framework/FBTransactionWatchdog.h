/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSWatchdog.h>

@class FBTransaction;

@interface FBTransactionWatchdog : BSWatchdog {

	FBTransaction* _transaction;

}

@property (nonatomic,retain,readonly) FBTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)_watchdogTimerFired;
-(void)_dumpDebugInfo;
-(id)initWithTransaction:(id)arg1 ;
-(FBTransaction *)transaction;
@end
