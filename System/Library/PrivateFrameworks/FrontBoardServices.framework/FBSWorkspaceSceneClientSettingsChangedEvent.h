/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSSceneClientSettingsDiff, FBSSceneTransitionContext;

@interface FBSWorkspaceSceneClientSettingsChangedEvent : FBSWorkspaceSceneEvent {

	FBSSceneClientSettingsDiff* _clientSettings;
	FBSSceneTransitionContext* _transition;

}

@property (nonatomic,retain) FBSSceneClientSettingsDiff * clientSettingsDiff;              //@synthesize clientSettings=_clientSettings - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transitionContext;                //@synthesize transition=_transition - In the implementation block
-(void)dealloc;
-(void)setTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(FBSSceneTransitionContext *)transitionContext;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(FBSSceneClientSettingsDiff *)clientSettingsDiff;
-(void)setClientSettingsDiff:(FBSSceneClientSettingsDiff *)arg1 ;
@end

