/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVSMediaRemoteCommandHandling.h>

@protocol TVSPlayback;
@class TVSMediaRemoteCommandProxyTarget, NSString;

@interface TVSMediaRemoteCommandHandler : NSObject <TVSMediaRemoteCommandHandling> {

	BOOL _repeatEnabled;
	BOOL _shuffleEnabled;
	BOOL _skipEnabled;
	BOOL _respondingToRemoteControlEvents;
	TVSMediaRemoteCommandProxyTarget* _remoteCommandTarget;
	id<TVSPlayback> _player;

}

@property (nonatomic,retain) TVSMediaRemoteCommandProxyTarget * remoteCommandTarget;                                     //@synthesize remoteCommandTarget=_remoteCommandTarget - In the implementation block
@property (assign,nonatomic,__weak) id<TVSPlayback> player;                                                              //@synthesize player=_player - In the implementation block
@property (assign,getter=isRespondingToRemoteControlEvents,nonatomic) BOOL respondingToRemoteControlEvents;              //@synthesize respondingToRemoteControlEvents=_respondingToRemoteControlEvents - In the implementation block
@property (assign,nonatomic) BOOL repeatEnabled;                                                                         //@synthesize repeatEnabled=_repeatEnabled - In the implementation block
@property (assign,nonatomic) BOOL shuffleEnabled;                                                                        //@synthesize shuffleEnabled=_shuffleEnabled - In the implementation block
@property (assign,nonatomic) BOOL skipEnabled;                                                                           //@synthesize skipEnabled=_skipEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPlayer:(id<TVSPlayback>)arg1 ;
-(id<TVSPlayback>)player;
-(void)_currentMediaItemDidChange:(id)arg1 ;
-(void)_startRespondingToRemoteControlEvents;
-(void)_stopRespondingToRemoteControlEvents;
-(BOOL)shuffleEnabled;
-(void)_updateSupportedCommandsForPlayer:(id)arg1 ;
-(long long)_handleEnableLanguageOptionCommandWithAudibleOption:(id)arg1 ;
-(long long)_handleEnableLanguageOptionCommandWithLegibleOption:(id)arg1 ;
-(long long)_handleDisableAudibleLanguageOptionCommand;
-(long long)_handleDisableLegibleLanguageOptionCommand;
-(long long)_statusByAdvancingInDirection:(long long)arg1 ;
-(id)_allAudioMediaTypes;
-(TVSMediaRemoteCommandProxyTarget *)remoteCommandTarget;
-(long long)_handlePauseCommand:(id)arg1 ;
-(long long)_handlePlayCommand:(id)arg1 ;
-(long long)_handleStopCommand:(id)arg1 ;
-(long long)_handleTogglePlayPauseCommand:(id)arg1 ;
-(long long)_handleEnableLanguageOptionCommand:(id)arg1 ;
-(long long)_handleDisableLanguageOptionCommand:(id)arg1 ;
-(long long)_handleNextTrackCommand:(id)arg1 ;
-(long long)_handlePreviousTrackCommand:(id)arg1 ;
-(long long)_handleSeekForwardCommand:(id)arg1 ;
-(long long)_handleSeekBackwardCommand:(id)arg1 ;
-(long long)_handleSkipForwardCommand:(id)arg1 ;
-(long long)_handleSkipBackwardCommand:(id)arg1 ;
-(long long)_handleChangePlaybackRateCommand:(id)arg1 ;
-(long long)_handleChangePlaybackPositionCommand:(id)arg1 ;
-(long long)_handleChangeRepeatModeCommand:(id)arg1 ;
-(long long)_handleChangeShuffleModeCommand:(id)arg1 ;
-(long long)_handleSpecialSeekForwardCommand:(id)arg1 ;
-(long long)_handleSpecialSeekBackwardCommand:(id)arg1 ;
-(long long)_handleAdvanceShuffleModeCommand:(id)arg1 ;
-(long long)_handleAdvanceRepeatModeCommand:(id)arg1 ;
-(BOOL)isRespondingToRemoteControlEvents;
-(void)_registerPublicCommands;
-(void)_registerPrivateCommands;
-(void)setRespondingToRemoteControlEvents:(BOOL)arg1 ;
-(void)_unregisterPublicCommands;
-(void)_unregisterPrivateCommands;
-(void)_unregisterPlayerNotifications;
-(void)_registerPlayerNotifications;
-(long long)_selectDefaultAudioOption;
-(BOOL)repeatEnabled;
-(void)setRepeatEnabled:(BOOL)arg1 ;
-(void)setShuffleEnabled:(BOOL)arg1 ;
-(BOOL)skipEnabled;
-(void)setSkipEnabled:(BOOL)arg1 ;
-(void)setRemoteCommandTarget:(TVSMediaRemoteCommandProxyTarget *)arg1 ;
@end

