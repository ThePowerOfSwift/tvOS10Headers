/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString, ICSDateValue;

@interface ICSAttendeeComment : ICSProperty

@property (nonatomic,retain) NSString * x_calendarserver_attendee_ref; 
@property (nonatomic,retain) ICSDateValue * x_calendarserver_dtstamp; 
-(void)setComment:(id)arg1 ;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(id)initWithComment:(id)arg1 ;
-(void)setX_calendarserver_attendee_ref:(NSString *)arg1 ;
-(void)setX_calendarserver_dtstamp:(ICSDateValue *)arg1 ;
-(ICSDateValue *)x_calendarserver_dtstamp;
-(NSString *)x_calendarserver_attendee_ref;
@end
