/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol LSOpenResourceOperationDelegate;
@class NSURL, NSString, NSDictionary, NSError, NSXPCConnection;

@interface LSOpenOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	BOOL _sourceIsManaged;
	BOOL _userSpecifiedApp;
	NSURL* _resourceURL;
	NSString* _applicationIdentifier;
	NSString* _documentIdentifier;
	NSDictionary* _userInfoPlist;
	NSDictionary* _options;
	id<LSOpenResourceOperationDelegate> _delegate;
	BOOL _didSucceed;
	NSError* _error;
	NSXPCConnection* _XPCConnection;

}

@property (assign,nonatomic) BOOL didSucceed;                              //@synthesize didSucceed=_didSucceed - In the implementation block
@property (nonatomic,copy) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSXPCConnection * XPCConnection;              //@synthesize XPCConnection=_XPCConnection - In the implementation block
+(id)queue;
-(id)initForOpeningResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(BOOL)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7 ;
-(NSXPCConnection *)XPCConnection;
-(void)completeOperation;
-(BOOL)performAppLinkOpen;
-(void)setXPCConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
-(void)start;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isConcurrent;
-(BOOL)didSucceed;
-(void)setDidSucceed:(BOOL)arg1 ;
@end

