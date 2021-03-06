/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIPickerViewScrollTesting.h>
#import <libobjc.A.dylib/NSCoding.h>

@class _UIDatePickerView, NSDate, UIColor, NSLocale, NSCalendar, NSTimeZone;

@interface UIDatePicker : UIControl <UIPickerViewScrollTesting, NSCoding> {

	_UIDatePickerView* _pickerView;
	BOOL _useCurrentDateDuringDecoding;
	BOOL shouldAnimateSetDateCall;

}

@property (assign,setter=_setUsesBlackChrome:,getter=_usesBlackChrome,nonatomic) BOOL usesBlackChrome; 
@property (assign,setter=_setDrawsBackground:,getter=_drawsBackground,nonatomic) BOOL drawsBackground; 
@property (assign,setter=_setAllowsZeroCountDownDuration:,getter=_allowsZeroCountDownDuration,nonatomic) BOOL allowsZeroCountDownDuration; 
@property (assign,setter=_setAllowsZeroTimeInterval:,getter=_allowsZeroTimeInterval,nonatomic) BOOL allowsZeroTimeInterval; 
@property (getter=_dateUnderSelectionBar,nonatomic,readonly) NSDate * dateUnderSelectionBar; 
@property (getter=_contentWidth,nonatomic,readonly) double contentWidth; 
@property (getter=_isTimeIntervalMode,nonatomic,readonly) BOOL isTimeIntervalMode; 
@property (assign,setter=_setUseCurrentDateDuringDecoding:,getter=_useCurrentDateDuringDecoding,nonatomic) BOOL useCurrentDateDuringDecoding; 
@property (assign,setter=_setUsesModernStyle:,getter=_usesModernStyle,nonatomic) BOOL _usesModernStyle; 
@property (setter=_setHighlightColor:,getter=_highlightColor,nonatomic,retain) UIColor * highlightColor; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * textColor; 
@property (setter=_setTextShadowColor:,getter=_textShadowColor,nonatomic,retain) UIColor * textShadowColor; 
@property (assign,nonatomic) double timeInterval; 
@property (assign,setter=_setShouldAnimateSetDateCall:,getter=_shouldAnimateSetDateCall,nonatomic) BOOL shouldAnimateSetDateCall; 
@property (assign,nonatomic) long long datePickerMode; 
@property (nonatomic,retain) NSLocale * locale; 
@property (nonatomic,copy) NSCalendar * calendar; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSDate * minimumDate; 
@property (nonatomic,retain) NSDate * maximumDate; 
@property (assign,nonatomic) double countDownDuration; 
@property (assign,nonatomic) long long minuteInterval; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)_setTextColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)_drawsBackground;
-(BOOL)_usesModernStyle;
-(void)setBounds:(CGRect)arg1 ;
-(id)_textColor;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setDrawsBackground:(BOOL)arg1 ;
-(void)_setUsesModernStyle:(BOOL)arg1 ;
-(id)_highlightColor;
-(void)_setHighlightColor:(id)arg1 ;
-(id)_textShadowColor;
-(void)_setTextShadowColor:(id)arg1 ;
-(void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(void)setEnabled:(BOOL)arg1 ;
-(void)awakeFromNib;
-(void)setLocale:(NSLocale *)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(double)_contentWidth;
-(void)_emitValueChanged;
-(void)setDate:(NSDate *)arg1 ;
-(double)timeInterval;
-(int)hour;
-(void)setTimeInterval:(double)arg1 ;
-(NSTimeZone *)timeZone;
-(void)_installPickerView:(id)arg1 ;
-(void)_setUpInitialValues;
-(void)setDatePickerMode:(long long)arg1 ;
-(void)_setLocale:(id)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setMinuteInterval:(long long)arg1 ;
-(BOOL)_isTimeIntervalMode;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(void)_setUseCurrentDateDuringDecoding:(BOOL)arg1 ;
-(BOOL)_useCurrentDateDuringDecoding;
-(long long)datePickerMode;
-(id)_locale;
-(NSCalendar *)calendar;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(long long)minuteInterval;
-(void)_setShouldAnimateSetDateCall:(BOOL)arg1 ;
-(BOOL)_shouldAnimateSetDateCall;
-(void)setDate:(id)arg1 animated:(BOOL)arg2 ;
-(NSLocale *)locale;
-(double)countDownDuration;
-(void)setCountDownDuration:(double)arg1 ;
-(void)willReceiveBindingsUpdate;
-(void)didReceiveBindingsUpdate;
-(id)dateComponents;
-(void)setDateComponents:(id)arg1 ;
-(void)setStaggerTimeIntervals:(BOOL)arg1 ;
-(void)setHighlightsToday:(BOOL)arg1 ;
-(int)minute;
-(int)second;
-(void)setDate:(id)arg1 animate:(BOOL)arg2 ;
-(void)_setHidesLabels:(BOOL)arg1 ;
-(void)_setUsesBlackChrome:(BOOL)arg1 ;
-(BOOL)_usesBlackChrome;
-(BOOL)_allowsZeroCountDownDuration;
-(void)_setAllowsZeroCountDownDuration:(BOOL)arg1 ;
-(BOOL)_allowsZeroTimeInterval;
-(void)_setAllowsZeroTimeInterval:(BOOL)arg1 ;
-(void)_setHighlightsToday:(BOOL)arg1 ;
-(id)_dateUnderSelectionBar;
-(id)_selectedTextForCalendarUnit:(unsigned long long)arg1 ;
-(id)_labelTextForCalendarUnit:(unsigned long long)arg1 ;
@end

