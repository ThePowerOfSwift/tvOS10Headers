/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLTimerScheduler;
@class CLSilo;

@interface CLTimer : NSObject {

	CLSilo* _silo;
	id<CLTimerScheduler> _scheduler;
	/*^block*/id _handler;
	double _nextFireTime;
	double _fireInterval;

}

@property (nonatomic,copy) id handler;                         //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) double nextFireTime;              //@synthesize nextFireTime=_nextFireTime - In the implementation block
@property (assign,nonatomic) double fireInterval;              //@synthesize fireInterval=_fireInterval - In the implementation block
-(double)fireInterval;
-(void)invalidate;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)shouldFire;
-(id)initInSilo:(id)arg1 withScheduler:(id)arg2 ;
-(void)updateScheduler;
-(void)setNextFireAfterDelay:(double)arg1 ;
-(void)setNextFireTime:(double)arg1 ;
-(void)setFireInterval:(double)arg1 ;
-(void)setNextFireAfterDelay:(double)arg1 interval:(double)arg2 ;
-(void)setNextFireTime:(double)arg1 interval:(double)arg2 ;
-(double)nextFireTime;
@end
