/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVSAudioRoutingControllerDelegate;
@class TVSAudioRoute, NSArray, TVSAudioRouteVolume, NSMutableArray;

@interface TVSAudioRoutingController : NSObject {

	BOOL _volumeControlAvailable;
	BOOL _alternateRoutesAvailable;
	BOOL _fetchingRoutes;
	TVSAudioRoute* _defaultRouteOrNull;
	TVSAudioRoute* _selectedRouteOrNull;
	NSArray* _availableRoutes;
	NSArray* _knownRoutes;
	NSArray* _otherRoutes;
	id<TVSAudioRoutingControllerDelegate> _delegate;
	unsigned long long _discoveryMode;
	TVSAudioRouteVolume* _selectedRouteVolume;
	NSMutableArray* _fetchCompletionHandlers;

}

@property (nonatomic,retain) TVSAudioRouteVolume * selectedRouteVolume;                          //@synthesize selectedRouteVolume=_selectedRouteVolume - In the implementation block
@property (assign,nonatomic) BOOL volumeControlAvailable;                                        //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,nonatomic) BOOL alternateRoutesAvailable;                                      //@synthesize alternateRoutesAvailable=_alternateRoutesAvailable - In the implementation block
@property (assign,nonatomic) BOOL fetchingRoutes;                                                //@synthesize fetchingRoutes=_fetchingRoutes - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchCompletionHandlers;                           //@synthesize fetchCompletionHandlers=_fetchCompletionHandlers - In the implementation block
@property (assign,nonatomic,__weak) id<TVSAudioRoutingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long discoveryMode;                                   //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableRoutes;                                   //@synthesize availableRoutes=_availableRoutes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * knownRoutes;                                       //@synthesize knownRoutes=_knownRoutes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * otherRoutes;                                       //@synthesize otherRoutes=_otherRoutes - In the implementation block
@property (nonatomic,readonly) TVSAudioRoute * defaultRoute;                                     //@synthesize defaultRouteOrNull=_defaultRouteOrNull - In the implementation block
@property (nonatomic,readonly) TVSAudioRoute * selectedRoute;                                    //@synthesize selectedRouteOrNull=_selectedRouteOrNull - In the implementation block
+(void)_updateEffectiveDiscoveryMode;
+(id)_sharedSelectedRouteVolume;
+(unsigned)_MRDiscoveryModeForDiscoveryMode:(unsigned long long)arg1 ;
+(BOOL)automaticallyNotifiesObserversOfSelectedRouteVolume;
-(void)setDelegate:(id<TVSAudioRoutingControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<TVSAudioRoutingControllerDelegate>)delegate;
-(void)setDiscoveryMode:(unsigned long long)arg1 ;
-(unsigned long long)discoveryMode;
-(NSArray *)availableRoutes;
-(void)fetchAvailableRoutesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_registerForNotifications;
-(void)_deregisterForNotifications;
-(NSArray *)knownRoutes;
-(void)_updateAudioRoutesFromRouteDescriptions:(id)arg1 ;
-(TVSAudioRoute *)selectedRoute;
-(id)_knownRoutesFromAvailableRoutes:(id)arg1 ;
-(void)_updateKnownRoutesWithRoute:(id)arg1 ;
-(void)serverDied:(id)arg1 ;
-(void)routesChanged:(id)arg1 ;
-(void)setAlternateRoutesAvailable:(BOOL)arg1 ;
-(void)_updateVolumeControl;
-(TVSAudioRouteVolume *)selectedRouteVolume;
-(void)setSelectedRouteVolume:(TVSAudioRouteVolume *)arg1 ;
-(void)setVolumeControlAvailable:(BOOL)arg1 ;
-(TVSAudioRoute *)defaultRoute;
-(NSArray *)otherRoutes;
-(BOOL)selectRoute:(id)arg1 withPassword:(id)arg2 ;
-(BOOL)volumeControlAvailable;
-(BOOL)alternateRoutesAvailable;
-(BOOL)fetchingRoutes;
-(void)setFetchingRoutes:(BOOL)arg1 ;
-(NSMutableArray *)fetchCompletionHandlers;
-(void)setFetchCompletionHandlers:(NSMutableArray *)arg1 ;
@end
