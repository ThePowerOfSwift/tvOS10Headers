/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAVCore/IMAVConferenceInterface.h>

@interface IMAVEmbeddedInterface : IMAVConferenceInterface
+(void)updateCriticalState;
-(void)chatStateUpdated;
-(void)_conferenceWillStart:(id)arg1 ;
-(void)_conferenceEnded:(id)arg1 ;
-(long long)_checkNetworkForChat:(id)arg1 requiresWifi:(BOOL)arg2 ;
-(long long)_runPingTestForChat:(id)arg1 ;
@end
