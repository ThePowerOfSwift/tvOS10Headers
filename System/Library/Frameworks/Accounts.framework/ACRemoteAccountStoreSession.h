/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@class NSXPCConnection, NSString;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {

	NSXPCConnection* _connection;
	BOOL _hasConfiguredRemoteAccountStore;
	BOOL _xpcConnectionHasBeenInvalidated;
	BOOL _notificationsEnabled;
	NSString* _spoofedBundleID;

}

@property (nonatomic,copy) NSString * spoofedBundleID;               //@synthesize spoofedBundleID=_spoofedBundleID - In the implementation block
@property (assign,nonatomic) BOOL notificationsEnabled;              //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
-(void)setSpoofedBundleID:(NSString *)arg1 ;
-(void)_configureConnection;
-(void)_configureRemoteAccountStoreIfNecessary;
-(NSString *)spoofedBundleID;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)connect;
-(id)remoteObjectProxy;
-(void)disconnect;
-(id)_connection;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)notificationsEnabled;
@end

