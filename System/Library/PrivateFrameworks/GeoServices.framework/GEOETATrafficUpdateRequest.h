/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOCommonOptions, GEOLocation, NSMutableArray, NSData, GEORouteAttributes, GEOTFTrafficSnapshot;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying> {

	GEOSessionID _sessionID;
	GEOTimepoint _clientTimepoint;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOClientCapabilities* _clientCapabilities;
	GEOCommonOptions* _commonOptions;
	GEOLocation* _currentUserLocation;
	NSMutableArray* _destinationWaypointTypeds;
	NSData* _directionsResponseID;
	unsigned _previouslyRejectedRerouteSavings;
	int _rerouteStatus;
	GEORouteAttributes* _routeAttributes;
	NSMutableArray* _routes;
	NSMutableArray* _serviceTags;
	NSData* _sessionState;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	BOOL _includeBetterRouteSuggestion;
	BOOL _needServerLatency;
	BOOL _useClientTimepointAsNow;
	BOOL _useLiveTrafficAsFallback;
	SCD_Struct_GE82 _has;

}

@property (nonatomic,readonly) BOOL hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) BOOL hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL useLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL hasClientTimepoint; 
@property (assign,nonatomic) GEOTimepoint clientTimepoint; 
@property (assign,nonatomic) BOOL hasUseClientTimepointAsNow; 
@property (assign,nonatomic) BOOL useClientTimepointAsNow; 
@property (assign,nonatomic) BOOL hasNeedServerLatency; 
@property (assign,nonatomic) BOOL needServerLatency; 
@property (nonatomic,readonly) BOOL hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation;                                   //@synthesize currentUserLocation=_currentUserLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                                //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeBetterRouteSuggestion; 
@property (assign,nonatomic) BOOL includeBetterRouteSuggestion;                                   //@synthesize includeBetterRouteSuggestion=_includeBetterRouteSuggestion - In the implementation block
@property (nonatomic,retain) NSMutableArray * routes;                                             //@synthesize routes=_routes - In the implementation block
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;                          //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID;                                       //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID;                                              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets;              //@synthesize additionalEnabledMarkets=_additionalEnabledMarkets - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinationWaypointTypeds;                          //@synthesize destinationWaypointTypeds=_destinationWaypointTypeds - In the implementation block
@property (assign,nonatomic) BOOL hasPreviouslyRejectedRerouteSavings; 
@property (assign,nonatomic) unsigned previouslyRejectedRerouteSavings;                           //@synthesize previouslyRejectedRerouteSavings=_previouslyRejectedRerouteSavings - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState;                                               //@synthesize sessionState=_sessionState - In the implementation block
@property (assign,nonatomic) BOOL hasRerouteStatus; 
@property (assign,nonatomic) int rerouteStatus;                                                   //@synthesize rerouteStatus=_rerouteStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasCommonOptions; 
@property (nonatomic,retain) GEOCommonOptions * commonOptions;                                    //@synthesize commonOptions=_commonOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                                        //@synthesize serviceTags=_serviceTags - In the implementation block
+(Class)serviceTagType;
+(Class)routeType;
+(Class)destinationWaypointTypedType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDirectionsResponseID;
-(NSData *)directionsResponseID;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(GEOSessionID)sessionID;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasRouteAttributes;
-(BOOL)hasCurrentUserLocation;
-(BOOL)hasClientCapabilities;
-(BOOL)hasAdditionalEnabledMarkets;
-(BOOL)hasSessionState;
-(BOOL)hasCommonOptions;
-(void)clearServiceTags;
-(void)addServiceTag:(id)arg1 ;
-(unsigned long long)serviceTagsCount;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(GEOLocation *)currentUserLocation;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(GEOClientCapabilities *)clientCapabilities;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(NSData *)sessionState;
-(void)setSessionState:(NSData *)arg1 ;
-(GEOCommonOptions *)commonOptions;
-(void)setCommonOptions:(GEOCommonOptions *)arg1 ;
-(NSMutableArray *)serviceTags;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(BOOL)hasTrafficSnapshot;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(BOOL)useLiveTrafficAsFallback;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(BOOL)hasUseLiveTrafficAsFallback;
-(void)clearRoutes;
-(void)addRoute:(id)arg1 ;
-(unsigned long long)routesCount;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)routes;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(void)clearDestinationWaypointTypeds;
-(void)addDestinationWaypointTyped:(id)arg1 ;
-(unsigned long long)destinationWaypointTypedsCount;
-(id)destinationWaypointTypedAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)destinationWaypointTypeds;
-(void)setDestinationWaypointTypeds:(NSMutableArray *)arg1 ;
-(BOOL)needServerLatency;
-(void)setNeedServerLatency:(BOOL)arg1 ;
-(void)setHasNeedServerLatency:(BOOL)arg1 ;
-(BOOL)hasNeedServerLatency;
-(BOOL)includeBetterRouteSuggestion;
-(void)setIncludeBetterRouteSuggestion:(BOOL)arg1 ;
-(void)setHasIncludeBetterRouteSuggestion:(BOOL)arg1 ;
-(BOOL)hasIncludeBetterRouteSuggestion;
-(void)setPreviouslyRejectedRerouteSavings:(unsigned)arg1 ;
-(void)setHasPreviouslyRejectedRerouteSavings:(BOOL)arg1 ;
-(BOOL)hasPreviouslyRejectedRerouteSavings;
-(int)rerouteStatus;
-(void)setRerouteStatus:(int)arg1 ;
-(void)setHasRerouteStatus:(BOOL)arg1 ;
-(BOOL)hasRerouteStatus;
-(id)rerouteStatusAsString:(int)arg1 ;
-(int)StringAsRerouteStatus:(id)arg1 ;
-(unsigned)previouslyRejectedRerouteSavings;
-(GEOTimepoint)clientTimepoint;
-(void)setClientTimepoint:(GEOTimepoint)arg1 ;
-(void)setHasClientTimepoint:(BOOL)arg1 ;
-(BOOL)hasClientTimepoint;
-(BOOL)useClientTimepointAsNow;
-(void)setUseClientTimepointAsNow:(BOOL)arg1 ;
-(void)setHasUseClientTimepointAsNow:(BOOL)arg1 ;
-(BOOL)hasUseClientTimepointAsNow;
@end
