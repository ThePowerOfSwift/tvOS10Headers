/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVControlServices.framework/TVControlServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVControlServices/TVCSEndpointServiceClientProtocol.h>

@protocol TVCSEndpointServiceConnectionDelegate;
@class NSXPCConnection, NSString;

@interface TVCSEndpointServiceConnection : NSObject <TVCSEndpointServiceClientProtocol> {

	id<TVCSEndpointServiceConnectionDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                                         //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<TVCSEndpointServiceConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<TVCSEndpointServiceConnectionDelegate>)arg1 ;
-(id)init;
-(id<TVCSEndpointServiceConnectionDelegate>)delegate;
-(NSXPCConnection *)connection;
-(id)serviceProxy;
-(void)_handleConnectionInvalidation;
-(void)_handleConnectionInterruption;
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)pairedEndpointsDidChange:(id)arg1 ;
-(void)pairableEndpointsDidChange:(id)arg1 ;
@end

