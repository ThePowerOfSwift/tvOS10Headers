/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNLocationTracker.h>
#import <libobjc.A.dylib/GEOMapAccessRestrictions.h>

@protocol GEODirectionServiceTicket;
@class GEONavigationMapMatcher, GEOMapAccess, NSData, NSTimer, MNLocation, NSString;

@interface MNTurnByTurnLocationTracker : MNLocationTracker <GEOMapAccessRestrictions> {

	GEONavigationMapMatcher* _mapMatcher;
	GEOMapAccess* _mapAccess;
	double _startTime;
	id<GEODirectionServiceTicket> _rerouteTicket;
	NSData* _serverSessionState;
	unsigned long long _rerouteReason;
	BOOL _localizeRoadNames;
	long long _responseErrorCode;
	unsigned long long _responseErrorCount;
	unsigned long long _recalculationNetworkUnreachableCount;
	NSTimer* _recalculationRetryTimer;
	unsigned long long _reroutesOnFeature;
	MNLocation* _lastLocationUsedForReroute;
	unsigned long long _consecutiveOffRouteCount;

}

@property (nonatomic,retain) NSData * serverSessionState;               //@synthesize serverSessionState=_serverSessionState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL allowsNetworkTileLoad; 
-(void)dealloc;
-(void)stopTracking;
-(BOOL)allowsNetworkTileLoad;
-(id)initWithNavigationSession:(id)arg1 ;
-(void)startTracking;
-(void)updateDestination:(id)arg1 finishedHandler:(/*^block*/id)arg2 ;
-(void)reroute:(id)arg1 reason:(unsigned long long)arg2 ;
-(void)updateLocation:(id)arg1 ;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(id)_newMapMatcherForRoute:(id)arg1 ;
-(id)_overrideLocationForLocation:(id)arg1 ;
-(void)_updateForLocation:(id)arg1 ;
-(void)_updateForReroute:(id)arg1 ;
-(void)_updateForArrival;
-(int)_detectedMotionForLocation:(id)arg1 ;
-(BOOL)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2 ;
-(id)_lazyContingentRouteForRouteSet:(id)arg1 forLocation:(id)arg2 ;
-(id)_contingentRouteForRouteSet:(id)arg1 forLocation:(id)arg2 ;
-(void)_updateStateForLocation:(id)arg1 ;
-(void)_updateSwitchTransportTypeForLocation:(id)arg1 ;
-(id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2 ;
-(void)_roadFeaturesForFeature:(SCD_Struct_MN11*)arg1 outRoadName:(id*)arg2 outShieldText:(id*)arg3 outShieldType:(long long*)arg4 ;
-(void)_updateShouldLocalizeRoadNames;
-(void)_defaultsDidChange;
-(BOOL)_isRerouting;
-(BOOL)_isCameraTestMode;
-(id)_rerouteTicketForLocation:(id)arg1 transportType:(int)arg2 stepIndex:(unsigned long long)arg3 ;
-(id)_ticketForNewDestination:(id)arg1 fromLocation:(id)arg2 transportType:(int)arg3 ;
-(void)_submitRerouteTicketWithHandler:(/*^block*/id)arg1 ;
-(void)_handleOffRouteForLocation:(id)arg1 ;
-(void)_requestDirectionsForLocation:(id)arg1 destination:(id)arg2 transportType:(int)arg3 handler:(/*^block*/id)arg4 ;
-(void)_reroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4 ;
-(void)_retryLastRouteRecalculation;
-(void)_recalculationRetryTimerFired:(id)arg1 ;
-(void)_failedToRecalculateRouteWithError:(id)arg1 ;
-(BOOL)_shouldThrottleRerouteForLocation:(id)arg1 lastRerouteLocation:(id)arg2 ;
-(NSData *)serverSessionState;
-(void)setServerSessionState:(NSData *)arg1 ;
@end

