/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMDHTTPDevice, HMFHTTPClientConnection, NSOperationQueue, NSMutableArray, NSMutableDictionary, HMFTimer;

@interface _HMDHTTPServerClientConnection : NSObject {

	HMDHTTPDevice* _device;
	HMFHTTPClientConnection* _connection;
	NSOperationQueue* _requestOperationQueue;
	NSMutableArray* _receiveMessageRequests;
	NSMutableDictionary* _pendingTransactionCompletionHandlers;
	NSOperationQueue* _transactionOperationQueue;
	HMFTimer* _lostConnectionTimer;

}

@property (nonatomic,readonly) HMDHTTPDevice * device;                                                  //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) HMFHTTPClientConnection * connection;                                      //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * requestOperationQueue;                                //@synthesize requestOperationQueue=_requestOperationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * receiveMessageRequests;                                 //@synthesize receiveMessageRequests=_receiveMessageRequests - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingTransactionCompletionHandlers;              //@synthesize pendingTransactionCompletionHandlers=_pendingTransactionCompletionHandlers - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * transactionOperationQueue;                            //@synthesize transactionOperationQueue=_transactionOperationQueue - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) HMFTimer * lostConnectionTimer;                                          //@synthesize lostConnectionTimer=_lostConnectionTimer - In the implementation block
+(id)shortDescription;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)shortDescription;
-(HMFHTTPClientConnection *)connection;
-(void)setConnection:(HMFHTTPClientConnection *)arg1 ;
-(BOOL)isConnected;
-(HMDHTTPDevice *)device;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableArray *)receiveMessageRequests;
-(NSOperationQueue *)requestOperationQueue;
-(HMFTimer *)lostConnectionTimer;
-(void)_reallySendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)pendingTransactionCompletionHandlers;
-(NSOperationQueue *)transactionOperationQueue;
-(id)initWithDevice:(id)arg1 ;
-(void)queueRequest:(id)arg1 ;
-(id)dequeueRequest;
@end

