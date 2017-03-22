/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSArray;

@interface HAPMetadataConstraints : NSObject <NSCopying> {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;
	NSNumber* _minLength;
	NSNumber* _maxLength;
	NSArray* _validValues;

}

@property (nonatomic,retain) NSNumber * minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSNumber * maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,retain) NSNumber * stepValue;                 //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) NSNumber * minLength;                 //@synthesize minLength=_minLength - In the implementation block
@property (nonatomic,retain) NSNumber * maxLength;                 //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,copy) NSArray * validValues;                  //@synthesize validValues=_validValues - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(void)setMinLength:(NSNumber *)arg1 ;
-(BOOL)isEqualToMetadataConstraints:(id)arg1 ;
-(NSNumber *)minLength;
-(NSNumber *)maxLength;
-(NSArray *)validValues;
-(void)setValidValues:(NSArray *)arg1 ;
@end
