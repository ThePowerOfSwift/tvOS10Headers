/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSCalendar, NSTimeZone, NSDate;

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>

@property (copy) NSCalendar * calendar; 
@property (copy) NSTimeZone * timeZone; 
@property (assign) long long era; 
@property (assign) long long year; 
@property (assign) long long month; 
@property (assign) long long day; 
@property (assign) long long hour; 
@property (assign) long long minute; 
@property (assign) long long second; 
@property (assign) long long nanosecond; 
@property (assign) long long weekday; 
@property (assign) long long weekdayOrdinal; 
@property (assign) long long quarter; 
@property (assign) long long weekOfMonth; 
@property (assign) long long weekOfYear; 
@property (assign) long long yearForWeekOfYear; 
@property (getter=isLeapMonth) BOOL leapMonth; 
@property (copy,readonly) NSDate * date; 
@property (getter=isValidDate,readonly) BOOL validDate; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isLeapMonthSet;
-(BOOL)isValidDate;
-(BOOL)isValidDateInCalendar:(id)arg1 ;
-(long long)valueForComponent:(unsigned long long)arg1 ;
-(void)setValue:(long long)arg1 forComponent:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDay:(long long)arg1 ;
-(void)setHour:(long long)arg1 ;
-(long long)hour;
-(NSTimeZone *)timeZone;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(long long)minute;
-(long long)second;
-(long long)era;
-(long long)year;
-(long long)month;
-(long long)day;
-(long long)weekOfMonth;
-(long long)weekOfYear;
-(long long)yearForWeekOfYear;
-(long long)weekday;
-(long long)weekdayOrdinal;
-(long long)quarter;
-(long long)week;
-(void)setEra:(long long)arg1 ;
-(void)setYear:(long long)arg1 ;
-(void)setYearForWeekOfYear:(long long)arg1 ;
-(void)setMonth:(long long)arg1 ;
-(void)setMinute:(long long)arg1 ;
-(void)setSecond:(long long)arg1 ;
-(void)setWeek:(long long)arg1 ;
-(void)setWeekOfYear:(long long)arg1 ;
-(void)setWeekOfMonth:(long long)arg1 ;
-(void)setWeekday:(long long)arg1 ;
-(void)setWeekdayOrdinal:(long long)arg1 ;
-(void)setQuarter:(long long)arg1 ;
-(BOOL)isLeapMonth;
-(void)setLeapMonth:(BOOL)arg1 ;
-(long long)nanosecond;
-(void)setNanosecond:(long long)arg1 ;
@end

