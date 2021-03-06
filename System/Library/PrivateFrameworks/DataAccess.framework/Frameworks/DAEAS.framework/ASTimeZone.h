/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/DAEAS-Structs.h>
#import <CoreFoundation/NSTimeZone.h>
#import <libobjc.A.dylib/ASParsingLeafNode.h>

@class NSTimeZone;

@interface ASTimeZone : NSTimeZone <ASParsingLeafNode> {

	int _gmtOffset;
	int _dstOffset;
	SYSTEMTIME* _standardDate;
	SYSTEMTIME* _daylightDate;
	NSTimeZone* _wrappedTimeZone;

}
+(BOOL)expectsContent;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)gmt;
+(BOOL)_dateIsValidTransitionDate:(id)arg1 inYear:(int)arg2 withTimeZone:(id)arg3 ;
+(id)_tzCachePathCreateIfMissing:(BOOL)arg1 ;
+(id)_curTZDataVersion;
+(BOOL)_loadDataFromDisk;
+(void)_fillOutCurrentTimeZoneInfo;
+(void)_cacheTimeZoneInfo;
-(id)initWithName:(id)arg1 data:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)data;
-(id)initWithName:(id)arg1 ;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(long long)secondsFromGMTForDate:(id)arg1 ;
-(id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6 ;
-(int)parsingState;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(id)_bestGuessAtOlsonTimeZoneForOffsetInMinutes:(int)arg1 firstTransitionDate:(SYSTEMTIME*)arg2 secondTransitionDate:(SYSTEMTIME*)arg3 ;
-(id)dateForRule:(SYSTEMTIME*)arg1 inYear:(long long)arg2 ;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(BOOL)_dateIsValidTransitionDate:(id)arg1 inYear:(long long)arg2 outDaylightBias:(long long*)arg3 ;
-(SYSTEMTIME)_ruleForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(id)initWithTZNameFromCalDB:(id)arg1 ;
-(SCD_Struct_AS2*)mallocTZIForDate:(id)arg1 ;
-(id)initWithCodingDict:(id)arg1 ;
-(id)dictForCoding;
@end

