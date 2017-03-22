/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder;

@interface GEOMapTransitGeometryFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	unsigned long long _transitID;

}
-(void)cancel;
-(void)dealloc;
-(id)initWithMap:(id)arg1 transitID:(unsigned long long)arg2 coordinate:(SCD_Struct_GE26)arg3 ;
-(void)findTransitGeometryWithHandler:(/*^block*/id)arg1 ;
@end
