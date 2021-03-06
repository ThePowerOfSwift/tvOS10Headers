/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSAbstractSystemService.h>

@class NSMutableArray;

@interface SBSHardwareButtonService : SBSAbstractSystemService {

	NSMutableArray* _consumers;
	unsigned long long _eventMask;
	long long _maximumPriority;

}

@property (nonatomic,retain) NSMutableArray * consumers;                //@synthesize consumers=_consumers - In the implementation block
@property (assign,nonatomic) unsigned long long eventMask;              //@synthesize eventMask=_eventMask - In the implementation block
@property (assign,nonatomic) long long maximumPriority;                 //@synthesize maximumPriority=_maximumPriority - In the implementation block
+(id)sharedInstance;
-(void)consumerInfoWillInvalidate:(id)arg1 ;
-(void)_setApplicationClientEventMask:(unsigned long long)arg1 priority:(long long)arg2 ;
-(void)_resetEventMask;
-(id)_viableConsumerForEvent:(long long)arg1 priority:(long long)arg2 ;
-(void)_addEventConsumerInfo:(id)arg1 ;
-(void)setHapticType:(long long)arg1 forButtonKind:(long long)arg2 ;
-(void)fetchHapticTypeForButtonKind:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_mainQueue_handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3 ;
-(void)acquireHomeHardwareButtonHintSuppressionAssertionForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)beginConsumingPressesForButtonKind:(long long)arg1 eventConsumer:(id)arg2 priority:(long long)arg3 ;
-(void)handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3 ;
-(void)setConsumers:(NSMutableArray *)arg1 ;
-(long long)maximumPriority;
-(void)setMaximumPriority:(long long)arg1 ;
-(id)description;
-(unsigned long long)eventMask;
-(void)setEventMask:(unsigned long long)arg1 ;
-(NSMutableArray *)consumers;
@end

