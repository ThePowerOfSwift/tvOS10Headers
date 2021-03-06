/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface IFCentroidScoringParameters : NSObject {

	NSDictionary* _scale;
	long long _divergence;

}

@property (copy) NSDictionary * scale;                //@synthesize scale=_scale - In the implementation block
@property (assign) long long divergence;              //@synthesize divergence=_divergence - In the implementation block
+(id)defaultParameters;
-(void)setScale:(NSDictionary *)arg1 ;
-(NSDictionary *)scale;
-(long long)divergence;
-(void)setDivergence:(long long)arg1 ;
@end

