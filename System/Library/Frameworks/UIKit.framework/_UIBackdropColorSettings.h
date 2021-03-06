/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIBackdropViewSettings, UIColor;

@interface _UIBackdropColorSettings : NSObject {

	BOOL _hasObservedValues;
	double _averageHue;
	double _averageSaturation;
	double _averageBrightness;
	double _contrast;
	_UIBackdropViewSettings* _parentSettings;
	double _previousAverageHue;
	double _previousAverageSaturation;
	double _previousAverageBrightness;
	double _previousContrast;

}

@property (assign,nonatomic) _UIBackdropViewSettings * parentSettings;              //@synthesize parentSettings=_parentSettings - In the implementation block
@property (assign,nonatomic) double previousAverageHue;                             //@synthesize previousAverageHue=_previousAverageHue - In the implementation block
@property (assign,nonatomic) double previousAverageSaturation;                      //@synthesize previousAverageSaturation=_previousAverageSaturation - In the implementation block
@property (assign,nonatomic) double previousAverageBrightness;                      //@synthesize previousAverageBrightness=_previousAverageBrightness - In the implementation block
@property (assign,nonatomic) double previousContrast;                               //@synthesize previousContrast=_previousContrast - In the implementation block
@property (assign,nonatomic) BOOL hasObservedValues;                                //@synthesize hasObservedValues=_hasObservedValues - In the implementation block
@property (assign,nonatomic) double averageHue;                                     //@synthesize averageHue=_averageHue - In the implementation block
@property (assign,nonatomic) double averageSaturation;                              //@synthesize averageSaturation=_averageSaturation - In the implementation block
@property (assign,nonatomic) double averageBrightness;                              //@synthesize averageBrightness=_averageBrightness - In the implementation block
@property (assign,nonatomic) double contrast;                                       //@synthesize contrast=_contrast - In the implementation block
@property (nonatomic,readonly) UIColor * color; 
-(void)setDefaultValues;
-(void)setValuesFromModel:(id)arg1 ;
-(void)setAverageHue:(double)arg1 ;
-(void)setAverageSaturation:(double)arg1 ;
-(void)setAverageBrightness:(double)arg1 ;
-(void)setContrast:(double)arg1 ;
-(UIColor *)color;
-(double)averageBrightness;
-(void)setParentSettings:(_UIBackdropViewSettings *)arg1 ;
-(double)averageHue;
-(double)averageSaturation;
-(double)contrast;
-(BOOL)applyCABackdropLayerStatistics:(id)arg1 ;
-(_UIBackdropViewSettings *)parentSettings;
-(double)previousAverageHue;
-(void)setPreviousAverageHue:(double)arg1 ;
-(double)previousAverageSaturation;
-(void)setPreviousAverageSaturation:(double)arg1 ;
-(double)previousAverageBrightness;
-(void)setPreviousAverageBrightness:(double)arg1 ;
-(double)previousContrast;
-(void)setPreviousContrast:(double)arg1 ;
-(BOOL)hasObservedValues;
-(void)setHasObservedValues:(BOOL)arg1 ;
@end

