/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface DDScannerResult : NSObject <NSCoding, NSSecureCoding> {

	_DDResult* _coreResult;
	NSArray* _subResultsCache;

}

@property (assign) NSRange range; 
+(id)resultsFromCoreResults:(CFArrayRef)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)resultFromCoreResult:(_DDResult*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)range;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)location;
-(void)setRange:(NSRange)arg1 ;
-(long long)score;
-(id)initWithCoreResult:(_DDResult*)arg1 ;
-(_DDResult*)coreResult;
-(SCD_Struct_DD5)cfRange;
-(id)rawValue;
-(id)contextualData;
-(id)matchedString;
-(id)subResults;
-(void)setSubResults:(id)arg1 ;
-(double)getDuration;
-(id)dateFromReferenceDate:(id)arg1 referenceTimezone:(id)arg2 timezoneRef:(id*)arg3 allDayRef:(BOOL*)arg4 ;
-(BOOL)extractStartDate:(id*)arg1 startTimezone:(id*)arg2 endDate:(id*)arg3 endTimezone:(id*)arg4 allDayRef:(BOOL*)arg5 referenceDate:(id)arg6 referenceTimezone:(id)arg7 ;
-(BOOL)getPhoneValue:(id*)arg1 label:(id*)arg2 ;
-(BOOL)getMailValue:(id*)arg1 label:(id*)arg2 ;
-(BOOL)getIMScreenNameValue:(id*)arg1 type:(id*)arg2 ;
-(BOOL)getStreet:(id*)arg1 city:(id*)arg2 state:(id*)arg3 zip:(id*)arg4 country:(id*)arg5 ;
-(void)offsetRangeBy:(long long)arg1 ;
@end

