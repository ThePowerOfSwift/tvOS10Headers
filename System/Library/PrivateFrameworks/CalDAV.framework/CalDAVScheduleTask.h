/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostTask.h>

@class NSArray, CalDAVScheduleResponseItem, NSString;

@interface CalDAVScheduleTask : CoreDAVPostTask {

	NSArray* _attendees;
	CalDAVScheduleResponseItem* _scheduleResponse;
	NSString* _originator;

}

@property (nonatomic,retain) CalDAVScheduleResponseItem * scheduleResponse;              //@synthesize scheduleResponse=_scheduleResponse - In the implementation block
@property (nonatomic,retain) NSString * originator;                                      //@synthesize originator=_originator - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                                        //@synthesize attendees=_attendees - In the implementation block
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(id)additionalHeaderValues;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithOriginator:(id)arg1 attendees:(id)arg2 outboxURL:(id)arg3 payload:(id)arg4 ;
-(void)setScheduleResponse:(CalDAVScheduleResponseItem *)arg1 ;
-(CalDAVScheduleResponseItem *)scheduleResponse;
-(NSString *)originator;
-(void)setOriginator:(NSString *)arg1 ;
@end

