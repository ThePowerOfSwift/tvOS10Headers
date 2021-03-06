/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <TVKit/TVMainVideoViewControllerDelegate.h>
#import <TVKit/TVRelatedContentLoaderDelegate.h>
#import <TVKit/TVRelatedContentViewControllerDelegate.h>
#import <TVKit/TVSPlaybackInterruptable.h>
#import <TVKit/TVSMediaCacheManagerResponder.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <TVKit/TVSPlayerItemMetadataPopulator.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>
#import <libobjc.A.dylib/AVPlayerViewControllerPlaybackDelegate.h>
#import <libobjc.A.dylib/AVScanningDelegate.h>

@protocol TVSAVFPlayback, TVVideoPlayerViewControllerDelegate;
@class NSObject, TVSStateMachine, UIButton, AVPlayerViewController, UIAlertController, TVRestrictionsPasscodeEntryViewController, TVRelatedContentViewController, TVMainVideoViewController, TVRelatedContentLoader, UILabel, UIActivityIndicatorView, UIView, NSDictionary, TVTransportBarView, AVTransportBarViewController, NSDate, UITapGestureRecognizer, TVInteractionGestureRecognizer, NSTimer, TVSPlaybackInterruption, TVSPlayer, NSMutableDictionary, NSString;

@interface TVVideoPlayerViewController : UIViewController <TVMainVideoViewControllerDelegate, TVRelatedContentLoaderDelegate, TVRelatedContentViewControllerDelegate, TVSPlaybackInterruptable, TVSMediaCacheManagerResponder, UIViewControllerTransitioningDelegate, TVSPlayerItemMetadataPopulator, AVPlayerViewControllerDelegate, AVPlayerViewControllerPlaybackDelegate, AVScanningDelegate> {

	BOOL _showsTitleWhileLoading;
	BOOL _suppressErrorAlerts;
	BOOL _allowDefaultMenuButtonBehavior;
	BOOL _allowsVideoPlaybackWithoutVisuals;
	BOOL _presentsNowPlayingVideoWithoutAnimations;
	BOOL _invalidatePlayerWhenDone;
	BOOL _dismissed;
	BOOL _loadingInitialItem;
	BOOL _startOrResumeButtonHasGottenInitialFocus;
	BOOL _shouldPlayAfterAppBecomesActive;
	BOOL _shouldPlayAfterLoadingCompletes;
	BOOL _modifyingCacheManager;
	BOOL _playerDurationAndBufferingObserversAdded;
	BOOL _deactivatedBySomethingOtherThanSiri;
	BOOL _playbackIsPasscodeRestricted;
	BOOL _playbackIsPasscodeRestrictedButPreviouslyUnlocked;
	BOOL _hasBeenShown;
	BOOL _hasReceivedWillMoveToParentViewControllerNil;
	BOOL _limitingRemoteInput;
	BOOL _userIsActivelyScrubbing;
	BOOL _useAVKit;
	BOOL _originalPausesOnRouteChangeValue;
	BOOL _initialMediaItemLoadedObserverAdded;
	NSObject*<TVSAVFPlayback> _player;
	id<TVVideoPlayerViewControllerDelegate> _delegate;
	long long _resumeMenuOption;
	double _startTime;
	TVSStateMachine* _stateMachine;
	UIButton* _resumePlayingButton;
	UIButton* _startFromBeginningButton;
	AVPlayerViewController* _avPlayerViewController;
	UIAlertController* _errorAlertController;
	TVRestrictionsPasscodeEntryViewController* _restrictionsPasscodeViewController;
	TVRelatedContentViewController* _relatedContentViewController;
	TVMainVideoViewController* _mainVideoViewController;
	TVRelatedContentLoader* _relatedContentLoader;
	UILabel* _titleTextLabel;
	UIActivityIndicatorView* _spinnerView;
	UIView* _titleAndSpinnerContainerView;
	NSDictionary* _playerErrorDictionary;
	TVTransportBarView* _transportBarView;
	AVTransportBarViewController* _avTransportBarViewController;
	UIView* _overlayContainerView;
	UILabel* _timeUntilReadyToPlayLabel;
	NSDate* _dateOfLastTimeUntilReadyToPlayUpdate;
	NSDate* _dateOfUsersLastInteractionDuringLoading;
	UITapGestureRecognizer* _selectButtonRecognizer;
	TVInteractionGestureRecognizer* _playPauseButtonRecognizer;
	NSTimer* _spinnerDelayTimer;
	unsigned long long _deactivationReasons;
	NSDate* _passcodeRestrictedPlaybackBackgroundedDate;
	TVSPlaybackInterruption* _deactivationInterruption;
	NSTimer* _backgroundStopTimer;
	TVSPlayer* _playerUsedForPreparation;
	NSMutableDictionary* _dynamicChapterArtwork;

}

@property (nonatomic,retain) TVSStateMachine * stateMachine;                                                              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) UIButton * resumePlayingButton;                                                              //@synthesize resumePlayingButton=_resumePlayingButton - In the implementation block
@property (nonatomic,retain) UIButton * startFromBeginningButton;                                                         //@synthesize startFromBeginningButton=_startFromBeginningButton - In the implementation block
@property (assign,nonatomic) BOOL invalidatePlayerWhenDone;                                                               //@synthesize invalidatePlayerWhenDone=_invalidatePlayerWhenDone - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * avPlayerViewController;                                             //@synthesize avPlayerViewController=_avPlayerViewController - In the implementation block
@property (nonatomic,retain) UIAlertController * errorAlertController;                                                    //@synthesize errorAlertController=_errorAlertController - In the implementation block
@property (nonatomic,retain) TVRestrictionsPasscodeEntryViewController * restrictionsPasscodeViewController;              //@synthesize restrictionsPasscodeViewController=_restrictionsPasscodeViewController - In the implementation block
@property (nonatomic,retain) TVRelatedContentViewController * relatedContentViewController;                               //@synthesize relatedContentViewController=_relatedContentViewController - In the implementation block
@property (nonatomic,retain) TVMainVideoViewController * mainVideoViewController;                                         //@synthesize mainVideoViewController=_mainVideoViewController - In the implementation block
@property (nonatomic,retain) TVRelatedContentLoader * relatedContentLoader;                                               //@synthesize relatedContentLoader=_relatedContentLoader - In the implementation block
@property (nonatomic,retain) UILabel * titleTextLabel;                                                                    //@synthesize titleTextLabel=_titleTextLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;                                                       //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) UIView * titleAndSpinnerContainerView;                                                       //@synthesize titleAndSpinnerContainerView=_titleAndSpinnerContainerView - In the implementation block
@property (nonatomic,retain) NSDictionary * playerErrorDictionary;                                                        //@synthesize playerErrorDictionary=_playerErrorDictionary - In the implementation block
@property (assign,getter=isDismissed,nonatomic) BOOL dismissed;                                                           //@synthesize dismissed=_dismissed - In the implementation block
@property (assign,nonatomic) BOOL loadingInitialItem;                                                                     //@synthesize loadingInitialItem=_loadingInitialItem - In the implementation block
@property (nonatomic,retain) TVTransportBarView * transportBarView;                                                       //@synthesize transportBarView=_transportBarView - In the implementation block
@property (nonatomic,retain) AVTransportBarViewController * avTransportBarViewController;                                 //@synthesize avTransportBarViewController=_avTransportBarViewController - In the implementation block
@property (nonatomic,retain) UIView * overlayContainerView;                                                               //@synthesize overlayContainerView=_overlayContainerView - In the implementation block
@property (assign,nonatomic) BOOL startOrResumeButtonHasGottenInitialFocus;                                               //@synthesize startOrResumeButtonHasGottenInitialFocus=_startOrResumeButtonHasGottenInitialFocus - In the implementation block
@property (nonatomic,retain) UILabel * timeUntilReadyToPlayLabel;                                                         //@synthesize timeUntilReadyToPlayLabel=_timeUntilReadyToPlayLabel - In the implementation block
@property (nonatomic,retain) NSDate * dateOfLastTimeUntilReadyToPlayUpdate;                                               //@synthesize dateOfLastTimeUntilReadyToPlayUpdate=_dateOfLastTimeUntilReadyToPlayUpdate - In the implementation block
@property (nonatomic,retain) NSDate * dateOfUsersLastInteractionDuringLoading;                                            //@synthesize dateOfUsersLastInteractionDuringLoading=_dateOfUsersLastInteractionDuringLoading - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * selectButtonRecognizer;                                             //@synthesize selectButtonRecognizer=_selectButtonRecognizer - In the implementation block
@property (nonatomic,retain) TVInteractionGestureRecognizer * playPauseButtonRecognizer;                                  //@synthesize playPauseButtonRecognizer=_playPauseButtonRecognizer - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayAfterAppBecomesActive;                                                        //@synthesize shouldPlayAfterAppBecomesActive=_shouldPlayAfterAppBecomesActive - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayAfterLoadingCompletes;                                                        //@synthesize shouldPlayAfterLoadingCompletes=_shouldPlayAfterLoadingCompletes - In the implementation block
@property (assign,nonatomic) BOOL modifyingCacheManager;                                                                  //@synthesize modifyingCacheManager=_modifyingCacheManager - In the implementation block
@property (assign,nonatomic) BOOL playerDurationAndBufferingObserversAdded;                                               //@synthesize playerDurationAndBufferingObserversAdded=_playerDurationAndBufferingObserversAdded - In the implementation block
@property (nonatomic,retain) NSTimer * spinnerDelayTimer;                                                                 //@synthesize spinnerDelayTimer=_spinnerDelayTimer - In the implementation block
@property (assign,nonatomic) BOOL deactivatedBySomethingOtherThanSiri;                                                    //@synthesize deactivatedBySomethingOtherThanSiri=_deactivatedBySomethingOtherThanSiri - In the implementation block
@property (assign,nonatomic) unsigned long long deactivationReasons;                                                      //@synthesize deactivationReasons=_deactivationReasons - In the implementation block
@property (assign,nonatomic) BOOL playbackIsPasscodeRestricted;                                                           //@synthesize playbackIsPasscodeRestricted=_playbackIsPasscodeRestricted - In the implementation block
@property (assign,nonatomic) BOOL playbackIsPasscodeRestrictedButPreviouslyUnlocked;                                      //@synthesize playbackIsPasscodeRestrictedButPreviouslyUnlocked=_playbackIsPasscodeRestrictedButPreviouslyUnlocked - In the implementation block
@property (nonatomic,copy) NSDate * passcodeRestrictedPlaybackBackgroundedDate;                                           //@synthesize passcodeRestrictedPlaybackBackgroundedDate=_passcodeRestrictedPlaybackBackgroundedDate - In the implementation block
@property (assign,nonatomic) BOOL hasBeenShown;                                                                           //@synthesize hasBeenShown=_hasBeenShown - In the implementation block
@property (nonatomic,retain) TVSPlaybackInterruption * deactivationInterruption;                                          //@synthesize deactivationInterruption=_deactivationInterruption - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedWillMoveToParentViewControllerNil;                                           //@synthesize hasReceivedWillMoveToParentViewControllerNil=_hasReceivedWillMoveToParentViewControllerNil - In the implementation block
@property (assign,getter=isLimitingRemoteInput,nonatomic) BOOL limitingRemoteInput;                                       //@synthesize limitingRemoteInput=_limitingRemoteInput - In the implementation block
@property (assign,nonatomic) BOOL userIsActivelyScrubbing;                                                                //@synthesize userIsActivelyScrubbing=_userIsActivelyScrubbing - In the implementation block
@property (nonatomic,retain) NSTimer * backgroundStopTimer;                                                               //@synthesize backgroundStopTimer=_backgroundStopTimer - In the implementation block
@property (nonatomic,retain) TVSPlayer * playerUsedForPreparation;                                                        //@synthesize playerUsedForPreparation=_playerUsedForPreparation - In the implementation block
@property (assign,nonatomic) BOOL useAVKit;                                                                               //@synthesize useAVKit=_useAVKit - In the implementation block
@property (assign,nonatomic) BOOL originalPausesOnRouteChangeValue;                                                       //@synthesize originalPausesOnRouteChangeValue=_originalPausesOnRouteChangeValue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dynamicChapterArtwork;                                                 //@synthesize dynamicChapterArtwork=_dynamicChapterArtwork - In the implementation block
@property (assign,nonatomic) BOOL initialMediaItemLoadedObserverAdded;                                                    //@synthesize initialMediaItemLoadedObserverAdded=_initialMediaItemLoadedObserverAdded - In the implementation block
@property (nonatomic,readonly) NSObject*<TVSAVFPlayback> player;                                                          //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<TVVideoPlayerViewControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long resumeMenuOption;                                                                  //@synthesize resumeMenuOption=_resumeMenuOption - In the implementation block
@property (assign,nonatomic) double startTime;                                                                            //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL showsTitleWhileLoading;                                                                 //@synthesize showsTitleWhileLoading=_showsTitleWhileLoading - In the implementation block
@property (assign,nonatomic) BOOL suppressErrorAlerts;                                                                    //@synthesize suppressErrorAlerts=_suppressErrorAlerts - In the implementation block
@property (assign,nonatomic) BOOL allowDefaultMenuButtonBehavior;                                                         //@synthesize allowDefaultMenuButtonBehavior=_allowDefaultMenuButtonBehavior - In the implementation block
@property (assign,nonatomic) BOOL allowsVideoPlaybackWithoutVisuals;                                                      //@synthesize allowsVideoPlaybackWithoutVisuals=_allowsVideoPlaybackWithoutVisuals - In the implementation block
@property (assign,nonatomic) BOOL presentsNowPlayingVideoWithoutAnimations;                                               //@synthesize presentsNowPlayingVideoWithoutAnimations=_presentsNowPlayingVideoWithoutAnimations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setDelegate:(id<TVVideoPlayerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<TVVideoPlayerViewControllerDelegate>)delegate;
-(unsigned long long)deactivationReasons;
-(void)setStartTime:(double)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(BOOL)shouldUpdateFocusFromView:(id)arg1 toView:(id)arg2 heading:(unsigned long long)arg3 ;
-(void)willUpdateFocusToView:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(double)startTime;
-(void)dismiss;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setDeactivationReasons:(unsigned long long)arg1 ;
-(NSObject*<TVSAVFPlayback>)player;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(TVSStateMachine *)stateMachine;
-(void)setStateMachine:(TVSStateMachine *)arg1 ;
-(void)_currentMediaItemDidChange:(id)arg1 ;
-(BOOL)mediaCacheManagerItemDidBecomeLikelyToKeepUp:(id)arg1 ;
-(void)interruptionWillBegin;
-(void)interruptionDidEnd;
-(void)_registerStateMachineHandlers;
-(void)populatePlayerItem:(id)arg1 withMetadataFromMediaItem:(id)arg2 ;
-(void)populatePlayerItem:(id)arg1 withUpNextInfoFromCurrentMediaItem:(id)arg2 nextMediaItem:(id)arg3 playlist:(id)arg4 ;
-(void)_handleMenuButton:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 invalidateWhenDone:(BOOL)arg2 ;
-(void)setAllowDefaultMenuButtonBehavior:(BOOL)arg1 ;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2 ;
-(TVTransportBarView *)transportBarView;
-(void)setInitialMediaItemLoadedObserverAdded:(BOOL)arg1 ;
-(void)_addPlayerBufferingAndDurationObservers;
-(void)_handlePlaybackStateChangeNotification:(id)arg1 ;
-(void)_handlePlaybackErrorNotification:(id)arg1 ;
-(void)_handleMainPlayerMediaItemPreparedNotification:(id)arg1 ;
-(void)_handlePrepPlayerMediaItemPreparedNotification:(id)arg1 ;
-(void)_handleMediaCacheManagerErrorNotification:(id)arg1 ;
-(void)_handleMediaCacheManagerWillStopNotification:(id)arg1 ;
-(void)_stateMachineStateChanged:(id)arg1 ;
-(void)_removePlayerBufferingAndDurationObservers;
-(id)_normalizedBufferedRangeFromPlayer;
-(id)_normalizedBufferedRangeFromCacheManager;
-(AVPlayerViewController *)avPlayerViewController;
-(void)setDynamicChapterArtwork:(NSMutableDictionary *)arg1 ;
-(void)_updateAVChapterNavigationMarkers;
-(void)setPlaybackIsPasscodeRestricted:(BOOL)arg1 ;
-(void)setPlaybackIsPasscodeRestrictedButPreviouslyUnlocked:(BOOL)arg1 ;
-(BOOL)useAVKit;
-(BOOL)hasReceivedWillMoveToParentViewControllerNil;
-(BOOL)isLimitingRemoteInput;
-(void)setLimitingRemoteInput:(BOOL)arg1 ;
-(NSTimer *)backgroundStopTimer;
-(void)setBackgroundStopTimer:(NSTimer *)arg1 ;
-(BOOL)hasBeenShown;
-(BOOL)allowsVideoPlaybackWithoutVisuals;
-(TVMainVideoViewController *)mainVideoViewController;
-(void)_modifyCacheManagerWithBlock:(/*^block*/id)arg1 ;
-(void)setAvPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)setErrorAlertController:(UIAlertController *)arg1 ;
-(void)_removeRestrictionsPasscodeViewController;
-(void)_cleanUpCachingListeners;
-(void)setHasReceivedWillMoveToParentViewControllerNil:(BOOL)arg1 ;
-(AVTransportBarViewController *)avTransportBarViewController;
-(UIButton *)resumePlayingButton;
-(UIButton *)startFromBeginningButton;
-(BOOL)startOrResumeButtonHasGottenInitialFocus;
-(double)_currentMediaItemNetBookmarkTime;
-(double)_currentMediaItemNetDuration;
-(void)setStartOrResumeButtonHasGottenInitialFocus:(BOOL)arg1 ;
-(void)setUseAVKit:(BOOL)arg1 ;
-(void)_updateAVPlayerViewControllerSkippingBehavior;
-(void)setMainVideoViewController:(TVMainVideoViewController *)arg1 ;
-(void)setRelatedContentViewController:(TVRelatedContentViewController *)arg1 ;
-(void)setRelatedContentLoader:(TVRelatedContentLoader *)arg1 ;
-(BOOL)showsTitleWhileLoading;
-(void)_addAVTransportBarViewController;
-(BOOL)allowDefaultMenuButtonBehavior;
-(void)setHasBeenShown:(BOOL)arg1 ;
-(TVRelatedContentViewController *)relatedContentViewController;
-(void)_dismissRelatedContent;
-(BOOL)deactivatedBySomethingOtherThanSiri;
-(BOOL)_getStringForTitleLabel:(id*)arg1 subtitleLabel:(id*)arg2 forMediaItem:(id)arg3 ;
-(void)_configurePlayerItemForExternalImageScrubbing:(id)arg1 ;
-(id)_avContentProposalForProposal:(id)arg1 previewImage:(id)arg2 ;
-(NSMutableDictionary *)dynamicChapterArtwork;
-(BOOL)modifyingCacheManager;
-(TVSPlaybackInterruption *)deactivationInterruption;
-(BOOL)isDismissed;
-(void)setDismissed:(BOOL)arg1 ;
-(void)_createAVTransportBarViewControllerAndConfigureNotifications;
-(void)_removeAVTransportBarViewController;
-(void)setTransportBarView:(TVTransportBarView *)arg1 ;
-(NSTimer *)spinnerDelayTimer;
-(void)setSpinnerDelayTimer:(NSTimer *)arg1 ;
-(UILabel *)titleTextLabel;
-(void)setTitleTextLabel:(UILabel *)arg1 ;
-(void)setResumePlayingButton:(UIButton *)arg1 ;
-(void)setStartFromBeginningButton:(UIButton *)arg1 ;
-(UILabel *)timeUntilReadyToPlayLabel;
-(void)setTimeUntilReadyToPlayLabel:(UILabel *)arg1 ;
-(void)_removeRelatedContentViewController;
-(BOOL)suppressErrorAlerts;
-(TVInteractionGestureRecognizer *)playPauseButtonRecognizer;
-(void)_handlePlayPauseButton;
-(void)setPlayPauseButtonRecognizer:(TVInteractionGestureRecognizer *)arg1 ;
-(void)setModifyingCacheManager:(BOOL)arg1 ;
-(BOOL)playerDurationAndBufferingObserversAdded;
-(void)setPlayerDurationAndBufferingObserversAdded:(BOOL)arg1 ;
-(long long)resumeMenuOption;
-(double)_currentMediaItemGrossBookmarkTime;
-(BOOL)_restrictionsEnabled;
-(BOOL)playbackIsPasscodeRestrictedButPreviouslyUnlocked;
-(BOOL)loadingInitialItem;
-(BOOL)shouldPlayAfterLoadingCompletes;
-(void)_resumePlayingButtonSelected:(id)arg1 ;
-(void)_startFromBeginningButtonSelected:(id)arg1 ;
-(UIView *)titleAndSpinnerContainerView;
-(TVRestrictionsPasscodeEntryViewController *)restrictionsPasscodeViewController;
-(void)setRestrictionsPasscodeViewController:(TVRestrictionsPasscodeEntryViewController *)arg1 ;
-(void)setLoadingInitialItem:(BOOL)arg1 ;
-(void)setTitleAndSpinnerContainerView:(UIView *)arg1 ;
-(BOOL)presentsNowPlayingVideoWithoutAnimations;
-(void)_spinnerDelayTimerFired:(id)arg1 ;
-(TVSPlayer *)playerUsedForPreparation;
-(void)_configureCachingListeners;
-(void)setDateOfUsersLastInteractionDuringLoading:(NSDate *)arg1 ;
-(NSDictionary *)playerErrorDictionary;
-(void)_addErrorViewControllerWithErrorIfAppropriate:(id)arg1 ;
-(void)_updateTitleText;
-(double)_startTimeWhenResumeMenuIsNotShown;
-(NSDate *)dateOfUsersLastInteractionDuringLoading;
-(void)_handleSelectButton:(id)arg1 ;
-(void)setSelectButtonRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_setPlayPauseButtonEnabled:(BOOL)arg1 ;
-(void)setPlayerErrorDictionary:(NSDictionary *)arg1 ;
-(NSDate *)dateOfLastTimeUntilReadyToPlayUpdate;
-(void)setDateOfLastTimeUntilReadyToPlayUpdate:(NSDate *)arg1 ;
-(void)_updateTimeUntilReadyToPlay;
-(UITapGestureRecognizer *)selectButtonRecognizer;
-(void)setShouldPlayAfterAppBecomesActive:(BOOL)arg1 ;
-(void)setShouldPlayAfterLoadingCompletes:(BOOL)arg1 ;
-(BOOL)shouldPlayAfterAppBecomesActive;
-(void)_backgroundStopTimerFired:(id)arg1 ;
-(void)didSelectMainVideoViewController:(id)arg1 ;
-(void)loadRelatedContentForMediaItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)relatedContentLoader:(id)arg1 shouldShowRelatedContent:(id)arg2 ;
-(void)didDismissRelatedContentViewController:(id)arg1 ;
-(void)userInteractionBeganWithRelatedContentViewController:(id)arg1 ;
-(void)relatedContentViewController:(id)arg1 willTransitionToDisplayMode:(unsigned long long)arg2 ;
-(void)relatedContentViewController:(id)arg1 didTransitionToDisplayMode:(unsigned long long)arg2 ;
-(void)playerViewController:(id)arg1 willResumePlaybackAfterUserNavigatedFromTime:(SCD_Struct_TV6)arg2 toTime:(SCD_Struct_TV6)arg3 ;
-(void)skipToNextItemForPlayerViewController:(id)arg1 ;
-(void)skipToPreviousItemForPlayerViewController:(id)arg1 ;
-(void)playerViewController:(id)arg1 didAcceptContentProposal:(id)arg2 ;
-(void)playerViewController:(id)arg1 shouldSeekToTime:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)playerViewController:(id)arg1 shouldSeekToDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)playerViewController:(id)arg1 shouldPlayFromTime:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)playerViewController:(id)arg1 shouldPauseWithCompletion:(/*^block*/id)arg2 ;
-(void)playerViewController:(id)arg1 shouldScanAtRate:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)didFinishScanningForPlayerViewController:(id)arg1 ;
-(long long)playerViewController:(id)arg1 scanFromElapsedTime:(SCD_Struct_TV6)arg2 rate:(double)arg3 imageBlock:(/*^block*/id)arg4 ;
-(void)stopScanningPlayerViewController:(id)arg1 ;
-(BOOL)playerViewController:(id)arg1 shouldHandleScanningForPlayerItem:(id)arg2 ;
-(void)insertOverlaySubview:(id)arg1 ;
-(void)insertOverlayViewController:(id)arg1 ;
-(void)loadCurrentMediaItem;
-(void)restrictedPlaybackPreviouslyUnlocked;
-(void)_useNowPlayingVideoViewController:(id)arg1 ;
-(void)playerViewController:(id)arg1 willResumePlaybackAfterUserNavigatedFromDate:(id)arg2 toDate:(id)arg3 ;
-(void)dismissWithErrorText:(id)arg1 ;
-(void)setResumeMenuOption:(long long)arg1 ;
-(void)setShowsTitleWhileLoading:(BOOL)arg1 ;
-(void)setSuppressErrorAlerts:(BOOL)arg1 ;
-(void)setAllowsVideoPlaybackWithoutVisuals:(BOOL)arg1 ;
-(void)setPresentsNowPlayingVideoWithoutAnimations:(BOOL)arg1 ;
-(BOOL)invalidatePlayerWhenDone;
-(void)setInvalidatePlayerWhenDone:(BOOL)arg1 ;
-(UIAlertController *)errorAlertController;
-(TVRelatedContentLoader *)relatedContentLoader;
-(void)setAvTransportBarViewController:(AVTransportBarViewController *)arg1 ;
-(void)setDeactivatedBySomethingOtherThanSiri:(BOOL)arg1 ;
-(BOOL)playbackIsPasscodeRestricted;
-(NSDate *)passcodeRestrictedPlaybackBackgroundedDate;
-(void)setPasscodeRestrictedPlaybackBackgroundedDate:(NSDate *)arg1 ;
-(void)setDeactivationInterruption:(TVSPlaybackInterruption *)arg1 ;
-(BOOL)userIsActivelyScrubbing;
-(void)setUserIsActivelyScrubbing:(BOOL)arg1 ;
-(void)setPlayerUsedForPreparation:(TVSPlayer *)arg1 ;
-(BOOL)originalPausesOnRouteChangeValue;
-(void)setOriginalPausesOnRouteChangeValue:(BOOL)arg1 ;
-(BOOL)initialMediaItemLoadedObserverAdded;
-(UIActivityIndicatorView *)spinnerView;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(void)setOverlayContainerView:(UIView *)arg1 ;
-(UIView *)overlayContainerView;
@end

