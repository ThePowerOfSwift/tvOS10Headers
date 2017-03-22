/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDRequest.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, ASDClaimApplicationsRequestOptions, NSString;

@interface ASDClaimApplicationsRequest : ASDRequest <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSXPCConnection* _connection;
	ASDClaimApplicationsRequestOptions* _options;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOptions:(id)arg1 ;
-(void)_setupConnection;
-(void)_sendRequestWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sendRequestWithCompletionBlock:(/*^block*/id)arg1 ;
@end
