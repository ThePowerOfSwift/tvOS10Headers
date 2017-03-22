/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface NWPHContext : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _request;
	NSObject*<OS_xpc_object> _reply;

}

@property (retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_xpc_object> request;                 //@synthesize request=_request - In the implementation block
@property (retain) NSObject*<OS_xpc_object> reply;                   //@synthesize reply=_reply - In the implementation block
@property (nonatomic,readonly) int pid; 
-(NSObject*<OS_xpc_object>)request;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setRequest:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)reply;
-(id)initWithRequest:(id)arg1 onConnection:(id)arg2 ;
-(void)setReply:(NSObject*<OS_xpc_object>)arg1 ;
-(int)pid;
@end
