/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerVehicleDelegate.h>
#import <libobjc.A.dylib/MKLocationProvider.h>

@protocol MKLocationProviderDelegate;
@class NSBundle, NSString, CLLocation, CLLocationManager, NSLock;

@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MKLocationProvider> {

	CLLocationManager* _clLocationManager;
	id<MKLocationProviderDelegate> _delegate;
	BOOL _locationServicesPreferencesDialogEnabled;
	int _authorizationStatus;
	NSBundle* _effectiveBundle;
	NSString* _effectiveBundleIdentifier;
	/*^block*/id _authorizationRequestBlock;
	BOOL _waitingForAuthorization;
	BOOL _hasQueriedAuthorization;
	NSLock* _authorizationLock;
	BOOL _alternate;

}

@property (nonatomic,readonly) CLLocationManager * _clLocationManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MKLocationProviderDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL shouldShiftIfNecessary; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) double timeScale; 
@property (nonatomic,readonly) CLLocation * lastLocation; 
-(void)setDelegate:(id<MKLocationProviderDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MKLocationProviderDelegate>)delegate;
-(long long)activityType;
-(NSBundle *)effectiveBundle;
-(int)authorizationStatus;
-(CLLocation *)lastLocation;
-(void)startUpdatingHeading;
-(void)stopUpdatingHeading;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2 ;
-(BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(CLLocationManager *)_clLocationManager;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)dismissHeadingCalibrationDisplay;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(double)desiredAccuracy;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(double)distanceFilter;
-(BOOL)matchInfoEnabled;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(int)headingOrientation;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(double)expectedGpsUpdateInterval;
-(void)setActivityType:(long long)arg1 ;
-(BOOL)usesCLMapCorrection;
-(BOOL)shouldShiftIfNecessary;
-(BOOL)isTracePlayer;
-(double)timeScale;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2 ;
-(void)_createCLLocationManager;
-(void)_updateAuthorizationStatus;
-(void)_resetForNewEffectiveBundle;
-(void)requestWhenInUseAuthorization;
@end

