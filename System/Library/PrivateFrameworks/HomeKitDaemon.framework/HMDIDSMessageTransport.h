/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteMessageTransport.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, NSMutableDictionary, NSString;

@interface HMDIDSMessageTransport : HMDRemoteMessageTransport <IDSServiceDelegate> {

	IDSService* _service;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _pendingResponses;
	NSMutableDictionary* _receivedResponses;
	NSMutableDictionary* _requestedCapabilities;
	NSMutableDictionary* _destinationAddress;
	NSMutableDictionary* _pendingSentMessages;
	NSMutableDictionary* _pendingResponseTimers;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                   //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingResponses;                   //@synthesize pendingResponses=_pendingResponses - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * receivedResponses;                  //@synthesize receivedResponses=_receivedResponses - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * requestedCapabilities;              //@synthesize requestedCapabilities=_requestedCapabilities - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * destinationAddress;                 //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingSentMessages;                //@synthesize pendingSentMessages=_pendingSentMessages - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingResponseTimers;              //@synthesize pendingResponseTimers=_pendingResponseTimers - In the implementation block
@property (nonatomic,readonly) int awdTransportType; 
@property (nonatomic,readonly) IDSService * service;                                     //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)restriction;
-(void)start;
-(long long)qualityOfService;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(IDSService *)service;
-(id)initWithAccountRegistry:(id)arg1 ;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canSendMessage:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(int)awdTransportType;
-(id)sendMessage:(id)arg1 destination:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(NSMutableDictionary *)pendingSentMessages;
-(NSMutableDictionary *)pendingResponses;
-(NSMutableDictionary *)requestedCapabilities;
-(NSMutableDictionary *)destinationAddress;
-(void)_startPendingResponseTimer:(id)arg1 responseTimeout:(double)arg2 identifier:(id)arg3 ;
-(NSMutableDictionary *)pendingResponseTimers;
-(NSMutableDictionary *)receivedResponses;
-(void)_removePendingResponseTransaction:(id)arg1 ;
-(void)_pendingResponseTimeoutFor:(id)arg1 ;
-(void)_removePendingResponseTimerForTransaction:(id)arg1 ;
-(void)_restartPendingResponseTimerFor:(id)arg1 withReducedFactor:(unsigned long long)arg2 ;
@end
