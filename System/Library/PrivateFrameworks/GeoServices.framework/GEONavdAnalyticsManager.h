/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEONavdAnalyticsReporter;
@interface GEONavdAnalyticsManager : NSObject {

	id<GEONavdAnalyticsReporter> _analyticsReporter;

}

@property (nonatomic,retain) id<GEONavdAnalyticsReporter> analyticsReporter;              //@synthesize analyticsReporter=_analyticsReporter - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(id<GEONavdAnalyticsReporter>)analyticsReporter;
-(void)setAnalyticsReporter:(id<GEONavdAnalyticsReporter>)arg1 ;
@end

