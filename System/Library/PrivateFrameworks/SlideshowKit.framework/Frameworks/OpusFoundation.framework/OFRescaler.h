/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface OFRescaler : NSObject {

	NSArray* _segments;
	double _sharedCompressibility1;
	double _sharedCompressibility2;
	double _sharedExpandability1;
	double _sharedExpandability2;
	double _compressibility1Weight;
	double _compressibility2Weight;
	double _expandability1Weight;
	double _expandability2Weight;
	double _defaultDuration;
	double _minimumDuration;
	double _maximumDuration;

}

@property (readonly) double defaultDuration;              //@synthesize defaultDuration=_defaultDuration - In the implementation block
@property (readonly) double minimumDuration;              //@synthesize minimumDuration=_minimumDuration - In the implementation block
@property (readonly) double maximumDuration;              //@synthesize maximumDuration=_maximumDuration - In the implementation block
-(void)dealloc;
-(double)maximumDuration;
-(double)minimumDuration;
-(id)initWithSegments:(id)arg1 ;
-(double)computeSegmentDurations:(double*)arg1 forTotalDuration:(double)arg2 ;
-(double)computeSegmentDurations:(double*)arg1 forSpeedFactor:(double)arg2 ;
-(double)defaultDuration;
@end

