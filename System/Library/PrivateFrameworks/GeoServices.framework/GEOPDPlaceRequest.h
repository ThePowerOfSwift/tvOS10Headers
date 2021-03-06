/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDAnalyticMetadata, GEOPDClientMetadata, NSMutableArray, NSString, GEOPDPlaceRequestParameters;

@interface GEOPDPlaceRequest : PBRequest <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDAnalyticMetadata* _analyticMetadata;
	GEOPDClientMetadata* _clientMetadata;
	NSMutableArray* _displayLanguages;
	NSString* _displayRegion;
	GEOPDPlaceRequestParameters* _placeRequestParameters;
	int _requestType;
	NSMutableArray* _requestedComponents;
	NSMutableArray* _spokenLanguages;
	BOOL _needLatency;
	BOOL _suppressResultsRequiringAttribution;
	SCD_Struct_GE20 _has;

}

@property (assign,nonatomic) BOOL hasNeedLatency; 
@property (assign,nonatomic) BOOL needLatency; 
@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata;                          //@synthesize analyticMetadata=_analyticMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata;                              //@synthesize clientMetadata=_clientMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayLanguages;                                 //@synthesize displayLanguages=_displayLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion;                                          //@synthesize displayRegion=_displayRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenLanguages;                                  //@synthesize spokenLanguages=_spokenLanguages - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestedComponents;                              //@synthesize requestedComponents=_requestedComponents - In the implementation block
@property (assign,nonatomic) BOOL hasSuppressResultsRequiringAttribution; 
@property (assign,nonatomic) BOOL suppressResultsRequiringAttribution;                          //@synthesize suppressResultsRequiringAttribution=_suppressResultsRequiringAttribution - In the implementation block
@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                                                   //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceRequestParameters; 
@property (nonatomic,retain) GEOPDPlaceRequestParameters * placeRequestParameters;              //@synthesize placeRequestParameters=_placeRequestParameters - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)displayLanguageType;
+(Class)spokenLanguageType;
+(Class)requestedComponentType;
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
-(int)requestType;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(id)requestTypeAsString:(int)arg1 ;
-(int)StringAsRequestType:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)needLatency;
-(void)setNeedLatency:(BOOL)arg1 ;
-(void)setHasNeedLatency:(BOOL)arg1 ;
-(BOOL)hasNeedLatency;
-(BOOL)hasAnalyticMetadata;
-(BOOL)hasClientMetadata;
-(void)clearDisplayLanguages;
-(void)addDisplayLanguage:(id)arg1 ;
-(unsigned long long)displayLanguagesCount;
-(id)displayLanguageAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDisplayRegion;
-(void)clearSpokenLanguages;
-(void)addSpokenLanguage:(id)arg1 ;
-(unsigned long long)spokenLanguagesCount;
-(id)spokenLanguageAtIndex:(unsigned long long)arg1 ;
-(void)clearRequestedComponents;
-(void)addRequestedComponent:(id)arg1 ;
-(unsigned long long)requestedComponentsCount;
-(id)requestedComponentAtIndex:(unsigned long long)arg1 ;
-(void)setSuppressResultsRequiringAttribution:(BOOL)arg1 ;
-(void)setHasSuppressResultsRequiringAttribution:(BOOL)arg1 ;
-(BOOL)hasSuppressResultsRequiringAttribution;
-(BOOL)hasPlaceRequestParameters;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(GEOPDClientMetadata *)clientMetadata;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(NSMutableArray *)displayLanguages;
-(void)setDisplayLanguages:(NSMutableArray *)arg1 ;
-(NSString *)displayRegion;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(NSMutableArray *)spokenLanguages;
-(void)setSpokenLanguages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)requestedComponents;
-(void)setRequestedComponents:(NSMutableArray *)arg1 ;
-(BOOL)suppressResultsRequiringAttribution;
-(GEOPDPlaceRequestParameters *)placeRequestParameters;
-(void)setPlaceRequestParameters:(GEOPDPlaceRequestParameters *)arg1 ;
-(id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE26)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)initWithMapItemToRefine:(id)arg1 coordinate:(SCD_Struct_GE26)arg2 traits:(id)arg3 ;
-(id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2 ;
-(id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2 ;
-(id)_initWithTraits:(id)arg1 ;
-(id)initWithTraits:(id)arg1 count:(unsigned)arg2 includeETA:(BOOL)arg3 includeEntryPoints:(BOOL)arg4 ;
-(id)initForAutocompleteWithTraits:(id)arg1 count:(unsigned)arg2 ;
-(int)geoUserPreferredTransportType;
-(BOOL)isForwardGeocoderRequest;
-(BOOL)isCanonicalLocationSearchRequest;
-(BOOL)isMerchantRequest;
-(id)initWithComponents:(id)arg1 muid:(unsigned long long)arg2 resultProviderID:(int)arg3 traits:(id)arg4 ;
-(id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 ;
-(id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 ;
-(id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6 ;
-(id)initWithExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5 ;
-(id)initWithReverseGeocodeCoordinate:(SCD_Struct_GE26)arg1 includeEntryPoints:(BOOL)arg2 includeETA:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5 ;
-(id)initWithCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2 ;
-(id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned)arg5 suppressResultsRequiringAttribution:(BOOL)arg6 includeETA:(BOOL)arg7 traits:(id)arg8 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE26)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 maxResults:(unsigned)arg6 traits:(id)arg7 ;
-(id)initWithAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 categoryFilter:(id)arg4 ;
-(id)initForCategoryListWithTraits:(id)arg1 ;
-(id)initForSpotlightCategoryListWithTraits:(id)arg1 ;
-(id)initWithCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithCategory:(id)arg1 routeInfo:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)initWithSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)initWithPopularNearbySearchCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithBatchPopularNearbySearchCategories:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initForSearchFieldPlaceholderWithTraits:(id)arg1 ;
-(id)initForNearestTransitStationWithLine:(unsigned long long)arg1 coordinate:(SCD_Struct_GE26)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 ;
-(BOOL)shouldConsiderCaching;
@end

