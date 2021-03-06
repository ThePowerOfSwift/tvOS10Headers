/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MKTransitSectionPagingFilter : NSObject {

	BOOL _limitNumLines;
	unsigned long long _numLinesFallbackThreshold;
	unsigned long long _numLinesFallbackValue;

}

@property (assign,nonatomic) BOOL limitNumLines;                                        //@synthesize limitNumLines=_limitNumLines - In the implementation block
@property (assign,nonatomic) unsigned long long numLinesFallbackThreshold;              //@synthesize numLinesFallbackThreshold=_numLinesFallbackThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long numLinesFallbackValue;                  //@synthesize numLinesFallbackValue=_numLinesFallbackValue - In the implementation block
+(id)defaultFilterForDepartures;
+(id)defaultFilterForInactiveLines;
-(BOOL)limitNumLines;
-(void)setLimitNumLines:(BOOL)arg1 ;
-(unsigned long long)numLinesFallbackThreshold;
-(void)setNumLinesFallbackThreshold:(unsigned long long)arg1 ;
-(unsigned long long)numLinesFallbackValue;
-(void)setNumLinesFallbackValue:(unsigned long long)arg1 ;
@end

