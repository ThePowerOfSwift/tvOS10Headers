/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTraitsTransitScheduleTimeRange;

@interface GEOTraitsTransitScheduleModeFilter : PBCodable <NSCopying> {

	unsigned _numAdditionalDepartures;
	GEOTraitsTransitScheduleTimeRange* _timeRange;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) BOOL hasTimeRange; 
@property (nonatomic,retain) GEOTraitsTransitScheduleTimeRange * timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) BOOL hasNumAdditionalDepartures; 
@property (assign,nonatomic) unsigned numAdditionalDepartures;                           //@synthesize numAdditionalDepartures=_numAdditionalDepartures - In the implementation block
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
-(void)configureWithDefaultStartTime:(double)arg1 duration:(double)arg2 numAdditionalDepartures:(unsigned)arg3 ;
-(void)setTimeRange:(GEOTraitsTransitScheduleTimeRange *)arg1 ;
-(BOOL)hasTimeRange;
-(void)setNumAdditionalDepartures:(unsigned)arg1 ;
-(void)setHasNumAdditionalDepartures:(BOOL)arg1 ;
-(BOOL)hasNumAdditionalDepartures;
-(GEOTraitsTransitScheduleTimeRange *)timeRange;
-(unsigned)numAdditionalDepartures;
@end
