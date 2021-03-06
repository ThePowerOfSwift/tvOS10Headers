/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapItem.h>

@class GEOPDPlace, GEOPlace, NSMapTable, GEOPDMultiLocalizedString, GEOMapItemDetourInfo, _GEOEncyclopedicInfo, GEOAddressObject, NSString, NSData, GEOMapRegion, GEOAddress, NSDictionary, NSArray, NSTimeZone, NSDate, GEOMapItemClientAttributes, GEOPDFlyover, NSURL, GEOMapItemPlaceAttribution, GEOMapItemPhotosAttribution, GEOMapItemReviewsAttribution, GEOFeatureStyleAttributes, GEOPDBusinessClaim, GEORestaurantFeaturesLink;

@interface _GEOPlaceDataItem : NSObject <GEOMapItem> {

	GEOPDPlace* _placeData;
	GEOPlace* _place;
	NSMapTable* _attributionMap;
	GEOPDMultiLocalizedString* _disambiguationLabel;
	GEOMapItemDetourInfo* _detourInfo;
	_GEOEncyclopedicInfo* _encyclopedicInfo;
	GEOAddressObject* _addressObject;
	NSString* _name;
	NSData* _externalTransitStationCode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSData * encodedData; 
@property (getter=isDisputed,nonatomic,readonly) BOOL disputed; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) SCD_Struct_GE26 coordinate; 
@property (nonatomic,readonly) SCD_Struct_GE26 centerCoordinate; 
@property (nonatomic,readonly) int referenceFrame; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegion; 
@property (nonatomic,readonly) GEOMapRegion * geoFenceMapRegion; 
@property (nonatomic,readonly) GEOAddress * geoAddress; 
@property (nonatomic,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,readonly) NSArray * areasOfInterest; 
@property (nonatomic,readonly) NSTimeZone * timezone; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegionOrNil; 
@property (nonatomic,readonly) int contactAddressType; 
@property (nonatomic,readonly) NSString * contactName; 
@property (nonatomic,readonly) NSString * contactSpokenName; 
@property (nonatomic,readonly) BOOL contactIsMe; 
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) BOOL isEventAllDay; 
@property (getter=_reviews,nonatomic,readonly) NSArray * reviews; 
@property (getter=_tips,nonatomic,readonly) NSArray * tips; 
@property (getter=_photos,nonatomic,readonly) NSArray * photos; 
@property (getter=_clientAttributes,nonatomic,readonly) GEOMapItemClientAttributes * clientAttributes; 
@property (getter=_place,nonatomic,readonly) GEOPlace * place; 
@property (getter=_placeData,nonatomic,readonly) GEOPDPlace * placeData; 
@property (getter=_placeType,nonatomic,readonly) int placeType; 
@property (getter=_placeDataAsData,nonatomic,readonly) NSData * placeDataAsData; 
@property (getter=_hasResolvablePartialInformation,nonatomic,readonly) BOOL hasResolvablePartialInformation; 
@property (getter=_addressGeocodeAccuracy,nonatomic,readonly) int addressGeocodeAccuracy; 
@property (getter=_roadAccessPoints,nonatomic,readonly) NSArray * roadAccessPoints; 
@property (getter=_hasResultProviderID,nonatomic,readonly) BOOL hasResultProviderID; 
@property (getter=_resultProviderID,nonatomic,readonly) int resultProviderID; 
@property (getter=_hasTransit,nonatomic,readonly) BOOL hasTransit; 
@property (getter=_transitInfo,nonatomic,readonly) id<GEOMapItemTransitInfo> transitInfo; 
@property (getter=_transitAttribution,nonatomic,readonly) id<GEOTransitAttribution> transitAttribution; 
@property (getter=_hasFlyover,nonatomic,readonly) BOOL hasFlyover; 
@property (getter=_flyover,nonatomic,readonly) GEOPDFlyover * flyover; 
@property (getter=_flyoverAnnouncementMessage,nonatomic,readonly) NSString * flyoverAnnouncementMessage; 
@property (getter=_hasMUID,nonatomic,readonly) BOOL hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_hasAreaInMeters,nonatomic,readonly) BOOL hasAreaInMeters; 
@property (getter=_areaInMeters,nonatomic,readonly) double areaInMeters; 
@property (getter=_businessURL,nonatomic,readonly) NSString * businessURL; 
@property (getter=_hasUserRatingScore,nonatomic,readonly) BOOL hasUserRatingScore; 
@property (getter=_sampleSizeForUserRatingScore,nonatomic,readonly) unsigned sampleSizeForUserRatingScore; 
@property (getter=_normalizedUserRatingScore,nonatomic,readonly) float normalizedUserRatingScore; 
@property (getter=_hasPriceRange,nonatomic,readonly) BOOL hasPriceRange; 
@property (getter=_priceRange,nonatomic,readonly) unsigned priceRange; 
@property (getter=_resultSnippetLocationString,nonatomic,readonly) NSString * resultSnippetLocationString; 
@property (getter=_resultSnippetDistanceDisplayThreshold,nonatomic,readonly) unsigned resultSnippetDistanceDisplayThreshold; 
@property (getter=_hasAnyAmenities,nonatomic,readonly) BOOL hasAnyAmenities; 
@property (getter=_hasDeliveryAmenity,nonatomic,readonly) BOOL hasDeliveryAmenity; 
@property (getter=_hasDelivery,nonatomic,readonly) BOOL hasDelivery; 
@property (getter=_hasGoodForKidsAmenity,nonatomic,readonly) BOOL hasGoodForKidsAmenity; 
@property (getter=_goodForKids,nonatomic,readonly) BOOL goodForKids; 
@property (getter=_hasTakesReservationsAmenity,nonatomic,readonly) BOOL hasTakesReservationsAmenity; 
@property (getter=_takesReservations,nonatomic,readonly) BOOL takesReservations; 
@property (getter=_hasAcceptsApplePayAmenity,nonatomic,readonly) BOOL hasAcceptsApplePayAmenity; 
@property (getter=_acceptsApplePay,nonatomic,readonly) BOOL acceptsApplePay; 
@property (getter=_hasOperatingHours,nonatomic,readonly) BOOL hasOperatingHours; 
@property (getter=_hasCurrentOperatingHours,nonatomic,readonly) BOOL hasCurrentOperatingHours; 
@property (getter=_operatingHours,nonatomic,readonly) NSArray * operatingHours; 
@property (getter=_completeOperatingHours,nonatomic,readonly) NSArray * completeOperatingHours; 
@property (getter=_hasEncyclopedicInfo,nonatomic,readonly) BOOL hasEncyclopedicInfo; 
@property (getter=_encyclopedicInfo,nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
@property (getter=_hasTelephone,nonatomic,readonly) BOOL hasTelephone; 
@property (getter=_telephone,nonatomic,readonly) NSString * telephone; 
@property (getter=_optsOutOfTelephoneAds,nonatomic,readonly) BOOL optsOutOfTelephoneAds; 
@property (getter=_disambiguationName,nonatomic,readonly) NSString * disambiguationName; 
@property (getter=_openingHoursOptions,nonatomic,readonly) unsigned long long openingHoursOptions; 
@property (getter=_needsAttribution,nonatomic,readonly) BOOL needsAttribution; 
@property (getter=_webURL,nonatomic,copy,readonly) NSURL * webURL; 
@property (getter=_providerURL,nonatomic,copy,readonly) NSURL * providerURL; 
@property (getter=_vendorID,nonatomic,copy,readonly) NSString * vendorID; 
@property (getter=_poiSurveyURLString,nonatomic,readonly) NSString * poiSurveyURLString; 
@property (getter=_poiPinpointURLString,nonatomic,readonly) NSString * poiPinpointURLString; 
@property (getter=_attribution,nonatomic,readonly) GEOMapItemPlaceAttribution * attribution; 
@property (getter=_photosAttribution,nonatomic,readonly) GEOMapItemPhotosAttribution * photosAttribution; 
@property (getter=_reviewsAttribution,nonatomic,readonly) GEOMapItemReviewsAttribution * reviewsAttribution; 
@property (getter=_styleAttributes,nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (getter=_customIconID,nonatomic,readonly) unsigned long long customIconID; 
@property (getter=_additionalPlaceInfos,nonatomic,readonly) NSArray * additionalPlaceInfos; 
@property (getter=_hasBusinessClaim,nonatomic,readonly) BOOL hasBusinessClaim; 
@property (getter=_businessClaim,nonatomic,readonly) GEOPDBusinessClaim * businessClaim; 
@property (nonatomic,readonly) NSArray * spatialMappedCategories; 
@property (getter=_hasFeatureLink,nonatomic,readonly) BOOL hasFeatureLink; 
@property (getter=_featureLink,nonatomic,readonly) GEORestaurantFeaturesLink * featureLink; 
@property (nonatomic,readonly) GEOMapItemDetourInfo * detourInfo; 
@property (nonatomic,readonly) BOOL hasExpiredComponents; 
@property (nonatomic,readonly) NSData * externalTransitStationCode; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(BOOL)isValid;
-(id)_roadAccessPoints;
-(NSTimeZone *)timezone;
-(GEOMapRegion *)displayMapRegion;
-(unsigned long long)_muid;
-(int)referenceFrame;
-(SCD_Struct_GE26)coordinate;
-(id)_photos;
-(id)_telephone;
-(id)_styleAttributes;
-(int)_addressGeocodeAccuracy;
-(BOOL)isDisputed;
-(id)_place;
-(NSString *)eventName;
-(NSDate *)eventDate;
-(BOOL)isEventAllDay;
-(SCD_Struct_GE26)centerCoordinate;
-(id)_placeData;
-(id)_operatingHours;
-(id)_reviews;
-(id)spokenNameForLocale:(id)arg1 ;
-(id)_spokenAddressForLocale:(id)arg1 ;
-(int)_recommendedTransportType;
-(BOOL)_hasTravelTimeForTransportType:(int)arg1 ;
-(unsigned)_travelTimeForTransportType:(int)arg1 ;
-(unsigned)_travelDistanceForTransportType:(int)arg1 ;
-(id)_arrivalMapRegionForTransportType:(int)arg1 ;
-(id)_localizedCategoryNamesForType:(unsigned)arg1 ;
-(BOOL)_hasLocalizedCategoryNamesForType:(unsigned)arg1 ;
-(id)_asPlaceInfo;
-(id)_mapItemByStrippingOptionalData;
-(id)addressObject;
-(id)weatherDisplayName;
-(BOOL)isEqualToMapItem:(id)arg1 ;
-(NSData *)encodedData;
-(GEOMapRegion *)geoFenceMapRegion;
-(GEOAddress *)geoAddress;
-(NSDictionary *)addressDictionary;
-(NSArray *)areasOfInterest;
-(GEOMapRegion *)displayMapRegionOrNil;
-(int)contactAddressType;
-(NSString *)contactName;
-(NSString *)contactSpokenName;
-(BOOL)contactIsMe;
-(id)_tips;
-(id)_clientAttributes;
-(int)_placeType;
-(id)_placeDataAsData;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_hasResultProviderID;
-(int)_resultProviderID;
-(BOOL)_hasTransit;
-(id)_transitInfo;
-(id)_transitAttribution;
-(BOOL)_hasFlyover;
-(id)_flyover;
-(id)_flyoverAnnouncementMessage;
-(BOOL)_hasMUID;
-(BOOL)_hasAreaInMeters;
-(double)_areaInMeters;
-(id)_businessURL;
-(BOOL)_hasUserRatingScore;
-(unsigned)_sampleSizeForUserRatingScore;
-(float)_normalizedUserRatingScore;
-(BOOL)_hasPriceRange;
-(unsigned)_priceRange;
-(id)_resultSnippetLocationString;
-(unsigned)_resultSnippetDistanceDisplayThreshold;
-(BOOL)_hasAnyAmenities;
-(BOOL)_hasDeliveryAmenity;
-(BOOL)_hasDelivery;
-(BOOL)_hasGoodForKidsAmenity;
-(BOOL)_goodForKids;
-(BOOL)_hasTakesReservationsAmenity;
-(BOOL)_takesReservations;
-(BOOL)_hasAcceptsApplePayAmenity;
-(BOOL)_acceptsApplePay;
-(BOOL)_hasOperatingHours;
-(BOOL)_hasCurrentOperatingHours;
-(id)_completeOperatingHours;
-(BOOL)_hasEncyclopedicInfo;
-(id)_encyclopedicInfo;
-(BOOL)_hasTelephone;
-(BOOL)_optsOutOfTelephoneAds;
-(id)_disambiguationName;
-(unsigned long long)_openingHoursOptions;
-(BOOL)_needsAttribution;
-(id)_webURL;
-(id)_providerURL;
-(id)_vendorID;
-(id)_poiSurveyURLString;
-(id)_poiPinpointURLString;
-(id)_attribution;
-(id)_photosAttribution;
-(id)_reviewsAttribution;
-(unsigned long long)_customIconID;
-(id)_additionalPlaceInfos;
-(BOOL)_hasBusinessClaim;
-(id)_businessClaim;
-(NSArray *)spatialMappedCategories;
-(BOOL)_hasFeatureLink;
-(id)_featureLink;
-(GEOMapItemDetourInfo *)detourInfo;
-(BOOL)hasExpiredComponents;
-(NSData *)externalTransitStationCode;
-(id)initWithPlaceData:(id)arg1 attributionMap:(id)arg2 disambiguationLabel:(id)arg3 detourInfo:(id)arg4 externalTransitStationCode:(id)arg5 ;
-(id)initWithPlaceData:(id)arg1 ;
-(id)initWithPlaceData:(id)arg1 detourInfo:(id)arg2 ;
-(id)_attributionInfoForAttribution:(id)arg1 requirement:(int)arg2 ;
-(BOOL)_showAttributionForAttribution:(id)arg1 requirement:(int)arg2 ;
-(BOOL)_hasMoreForAttribution:(id)arg1 requirement:(int)arg2 ;
-(BOOL)_showAddForAttribution:(id)arg1 requirement:(int)arg2 ;
-(id)_displayNameForAttribution:(id)arg1 requirement:(int)arg2 ;
-(id)_logoPathForAttribution:(id)arg1 requirement:(int)arg2 scale:(double)arg3 ;
-(id)_placeDataStyleAttributes;
@end

