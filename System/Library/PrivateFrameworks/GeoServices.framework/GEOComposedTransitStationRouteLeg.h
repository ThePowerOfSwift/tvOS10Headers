/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitBaseRouteLeg.h>

@interface GEOComposedTransitStationRouteLeg : GEOComposedTransitBaseRouteLeg
-(BOOL)isTransfer;
-(id)initWithComposedRoute:(id)arg1 stepRange:(NSRange)arg2 transitStepRange:(NSRange)arg3 pointRange:(NSRange)arg4 ;
-(BOOL)hasEnterStationManeuver;
-(BOOL)hasExitStationManeuver;
@end

