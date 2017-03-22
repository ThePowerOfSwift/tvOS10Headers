/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMConnectionMonitorDelegate;
@class NSString;

@interface IMConnectionMonitor : NSObject {

	NSString* _remoteHost;
	id<IMConnectionMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL isImmediatelyReachable; 
@property (nonatomic,readonly) BOOL requiresDataConnectionActivation; 
@property (assign,setter=setDataConnectionActive:,nonatomic) BOOL isDataConnectionActive; 
@property (assign,nonatomic) id<IMConnectionMonitorDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) NSString * remoteHost;                                           //@synthesize remoteHost=_remoteHost - In the implementation block
+(id)alloc;
-(void)setDelegate:(id<IMConnectionMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id<IMConnectionMonitorDelegate>)delegate;
-(void)clear;
-(void)setDataConnectionActive:(BOOL)arg1 ;
-(void)_setup;
-(id)initWithRemoteHost:(id)arg1 delegate:(id)arg2 ;
-(NSString *)remoteHost;
-(void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(BOOL)isImmediatelyReachable;
-(void)goDisconnected;
-(BOOL)isDataConnectionActive;
-(BOOL)requiresDataConnectionActivation;
@end
