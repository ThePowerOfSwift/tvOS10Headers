/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _GEOThrottleState : NSObject {

	unsigned long long _requestCount;
	double _lastResetTime;

}

@property (assign,nonatomic) unsigned long long requestCount;              //@synthesize requestCount=_requestCount - In the implementation block
@property (assign,nonatomic) double lastResetTime;                         //@synthesize lastResetTime=_lastResetTime - In the implementation block
-(id)description;
-(unsigned long long)requestCount;
-(double)lastResetTime;
-(void)setLastResetTime:(double)arg1 ;
-(void)setRequestCount:(unsigned long long)arg1 ;
@end
