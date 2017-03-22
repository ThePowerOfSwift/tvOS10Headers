/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSResetServerProtocolDelegate.h>

@class NSString, MSResetServerProtocol, MSMediaStreamDaemon;

@interface MSResetServer : NSObject <MSResetServerProtocolDelegate> {

	NSString* _personID;
	MSResetServerProtocol* _protocol;
	MSMediaStreamDaemon* _daemon;
	id _selfReference;

}

@property (nonatomic,readonly) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) MSMediaStreamDaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resetServerObjectWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(NSString *)personID;
-(void)setDaemon:(MSMediaStreamDaemon *)arg1 ;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(MSMediaStreamDaemon *)daemon;
-(void)resetServerProtocol:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)resetServerProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(void)resetServer;
@end
