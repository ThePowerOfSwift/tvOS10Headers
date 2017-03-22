/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CMSedentaryTimerData : NSObject <NSSecureCoding, NSCopying> {

	double fStartDate;
	double fFiredDate;
	long long fAlarmType;
	BOOL fDidWake;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * firedDate; 
@property (nonatomic,readonly) long long alarmType; 
@property (nonatomic,readonly) BOOL didWake; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithStartDate:(double)arg1 firedDate:(double)arg2 alarmType:(long long)arg3 didWake:(BOOL)arg4 ;
-(NSDate *)firedDate;
-(NSDate *)startDate;
-(long long)alarmType;
-(BOOL)didWake;
@end
