/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBSystemServiceFacility.h>

@class FBServiceClientAuthenticator;

@interface FBSystemAppProxyServiceServer : FBSystemServiceFacility {

	FBServiceClientAuthenticator* _badgeValueAuthenticator;
	FBServiceClientAuthenticator* _deleteSnapshotsAuthenticator;
	FBServiceClientAuthenticator* _shutdownAuthenticator;
	FBServiceClientAuthenticator* _keyboardFocusAuthenticator;
	FBServiceClientAuthenticator* _dataResetAuthenticator;

}
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 clientAuthenticator:(id)arg3 ;
-(void)_handleUIAppCheckIn:(id)arg1 forClient:(id)arg2 ;
-(void)_handleGetActiveInterfaceOrientation:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSetBadgeValue:(id)arg1 forClient:(id)arg2 ;
-(void)_handleGetBadgeValue:(id)arg1 forClient:(id)arg2 ;
-(void)_handleAppRequestBrightness:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSetNextWakeInterval:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSystemApplicationBundleIdentifier:(id)arg1 ;
-(void)_handleGetPasscodeLockedOrBlockedStatus:(id)arg1 forClient:(id)arg2 ;
-(void)_handlePidForApplication:(id)arg1 ;
-(void)_handleCanActivateApplication:(id)arg1 ;
-(void)_handleActivateApplication:(id)arg1 forClient:(id)arg2 ;
-(void)_handleGetProcessHandle:(id)arg1 forClient:(id)arg2 ;
-(void)_handleActions:(id)arg1 ;
-(void)_handleTerminateApplication:(id)arg1 ;
-(void)_handleTerminateApplicationGroup:(id)arg1 ;
-(void)_handleShutdown:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSetKeyboardFocusApplication:(id)arg1 forClient:(id)arg2 ;
-(void)_handleDeleteAllApplicationSnapshots:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSuspendApplication:(id)arg1 forClient:(id)arg2 ;
-(void)_handleDataReset:(id)arg1 forClient:(id)arg2 ;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
@end

