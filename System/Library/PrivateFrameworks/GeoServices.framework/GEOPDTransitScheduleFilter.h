/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDDeparturePredicate;

@interface GEOPDTransitScheduleFilter : PBCodable <NSCopying> {

	GEOPDTimeRange _operatingHoursRange;
	GEOPDDeparturePredicate* _departurePredicateCountdown;
	GEOPDDeparturePredicate* _departurePredicateStamp;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) BOOL hasDeparturePredicateCountdown; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateCountdown;              //@synthesize departurePredicateCountdown=_departurePredicateCountdown - In the implementation block
@property (nonatomic,readonly) BOOL hasDeparturePredicateStamp; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateStamp;                  //@synthesize departurePredicateStamp=_departurePredicateStamp - In the implementation block
@property (assign,nonatomic) BOOL hasOperatingHoursRange; 
@property (assign,nonatomic) GEOPDTimeRange operatingHoursRange;                                 //@synthesize operatingHoursRange=_operatingHoursRange - In the implementation block
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
-(BOOL)hasDeparturePredicateCountdown;
-(BOOL)hasDeparturePredicateStamp;
-(void)setOperatingHoursRange:(GEOPDTimeRange)arg1 ;
-(void)setHasOperatingHoursRange:(BOOL)arg1 ;
-(BOOL)hasOperatingHoursRange;
-(GEOPDDeparturePredicate *)departurePredicateCountdown;
-(void)setDeparturePredicateCountdown:(GEOPDDeparturePredicate *)arg1 ;
-(GEOPDDeparturePredicate *)departurePredicateStamp;
-(void)setDeparturePredicateStamp:(GEOPDDeparturePredicate *)arg1 ;
-(GEOPDTimeRange)operatingHoursRange;
@end

