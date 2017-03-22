/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSLock, NSXPCListenerEndpoint, AKDevice;

@interface AKAnisetteProvisioningController : NSObject {

	NSXPCConnection* _anisetteServiceConnection;
	NSObject*<OS_dispatch_queue> _replyHandlingQueue;
	NSLock* _connectionLock;
	NSXPCListenerEndpoint* _daemonXPCEndpoint;
	AKDevice* _targetDevice;

}
-(void)dealloc;
-(id)init;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)anisetteDataForURLRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)syncWithSIMData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)eraseWithCompletion:(/*^block*/id)arg1 ;
-(id)initForDevice:(id)arg1 ;
-(id)_initForDevice:(id)arg1 daemonXPCEndpoint:(id)arg2 ;
-(id)_anisetteServiceConnection;
-(id)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 error:(id*)arg2 ;
-(id)anisetteDataWithError:(id*)arg1 ;
-(void)anisetteDataWithCompletion:(/*^block*/id)arg1 ;
-(void)provisionWithCompletion:(/*^block*/id)arg1 ;
@end
