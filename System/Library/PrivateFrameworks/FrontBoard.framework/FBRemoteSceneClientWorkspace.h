/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBApplicationProcessLaunchTransactionObserver.h>
#import <libobjc.A.dylib/FBUISceneClientDelegate.h>
#import <libobjc.A.dylib/FBUISceneClientWorkspace.h>
#import <libobjc.A.dylib/FBSceneClientProvider.h>

@class FBUISceneClientIdentity, FBWorkspace, NSMutableDictionary, FBApplicationProcessLaunchTransaction, FBSceneClientProviderInvalidationAction, NSString;

@interface FBRemoteSceneClientWorkspace : NSObject <FBApplicationProcessLaunchTransactionObserver, FBUISceneClientDelegate, FBUISceneClientWorkspace, FBSceneClientProvider> {

	FBUISceneClientIdentity* _clientIdentity;
	FBWorkspace* _processWorkspace;
	NSMutableDictionary* _hostsByIdentifer;
	NSMutableDictionary* _clientsByIdentity;
	NSMutableDictionary* _handlerByIdentity;
	FBApplicationProcessLaunchTransaction* _launchTransaction;
	FBSceneClientProviderInvalidationAction* _invalidationAction;
	BOOL _invalidated;

}

@property (nonatomic,copy,readonly) FBUISceneClientIdentity * clientIdentity;              //@synthesize clientIdentity=_clientIdentity - In the implementation block
@property (nonatomic,retain) FBWorkspace * processWorkspace;                               //@synthesize processWorkspace=_processWorkspace - In the implementation block
@property (nonatomic,retain,readonly) FBProcess*<FBUIProcess> clientProcess; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginTransaction;
-(void)endTransaction;
-(void)dealloc;
-(void)initialize;
-(NSString *)description;
-(void)invalidate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2 ;
-(void)transactionDidComplete:(id)arg1 ;
-(void)registerInvalidationAction:(id)arg1 ;
-(id)registerHost:(id)arg1 ;
-(void)unregisterHost:(id)arg1 ;
-(void)didInvalidateSceneClient:(id)arg1 ;
-(FBProcess*<FBUIProcess>)clientProcess;
-(FBUISceneClientIdentity *)clientIdentity;
-(id)createHostForSceneWithIdentity:(id)arg1 initialParameters:(id)arg2 ;
-(void)registerSceneWithIdentity:(id)arg1 acquisitionHandler:(/*^block*/id)arg2 ;
-(id)initWithClientIdentity:(id)arg1 ;
-(id)_createSceneClientForIdentity:(id)arg1 ;
-(FBWorkspace *)processWorkspace;
-(id)clientForSceneIdentity:(id)arg1 ;
-(id)_processWorkspace;
-(void)_processLaunched:(id)arg1 ;
-(id)_sceneClientForIdentity:(id)arg1 ;
-(void)setProcessWorkspace:(FBWorkspace *)arg1 ;
@end

