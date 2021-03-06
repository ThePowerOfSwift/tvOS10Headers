/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class GEODirectionsRequest, GEODirectionsResponse, NSObject;

@interface GEORouteGenerator : NSObject {

	GEODirectionsRequest* _request;
	GEODirectionsResponse* _response;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain,readonly) GEODirectionsRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain,readonly) GEODirectionsResponse * response;              //@synthesize response=_response - In the implementation block
+(unsigned long long)routingSharedLibraryCodeVersion;
+(unsigned long long)routingSubgraphDataVersion;
-(void)dealloc;
-(GEODirectionsResponse *)response;
-(GEODirectionsRequest *)request;
-(id)initWithRequest:(id)arg1 response:(id)arg2 ;
-(void)decompressResponse;
-(id)lookupHubStationOrStopFromMuid:(unsigned long long)arg1 ;
-(void)rerouteFromWaypoint:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

