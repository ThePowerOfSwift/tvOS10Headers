/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class EKCalendar, NSString, NSDate;

@interface EKInviteReplyNotification : EKObject

@property (nonatomic,readonly) EKCalendar * calendar; 
@property (nonatomic,readonly) NSString * calendarName; 
@property (nonatomic,readonly) NSString * shareeDisplayName; 
@property (nonatomic,readonly) NSString * shareeAddress; 
@property (nonatomic,readonly) NSString * shareeFirstName; 
@property (nonatomic,readonly) NSString * shareeLastName; 
@property (nonatomic,readonly) unsigned long long status; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) BOOL alerted; 
-(EKCalendar *)calendar;
-(unsigned long long)status;
-(NSDate *)creationDate;
-(NSString *)calendarName;
-(NSString *)shareeDisplayName;
-(NSString *)shareeAddress;
-(NSString *)shareeFirstName;
-(NSString *)shareeLastName;
-(BOOL)alerted;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(id)_persistentInviteReplyNotification;
-(void)clearAlertedStatus;
@end
