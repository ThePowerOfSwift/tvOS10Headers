/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
@interface IPRegexToolbox : NSObject
+(id)regularExpressionWithKey:(id)arg1 generator:(/*^block*/id)arg2 ;
+(id)regexPatternForLanguageID:(id)arg1 eventVocabularyArray:(id)arg2 ;
+(unsigned long long)numberOfMatchesForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(BOOL)arg3 ;
+(id)firstMatchingKeywordForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(BOOL)arg3 ;
+(id)matchingKeywordResultsForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(BOOL)arg3 ;
+(BOOL)isRangeNearbyExclusionKeyword:(NSRange)arg1 text:(id)arg2 limitToSurroundingText:(BOOL)arg3 language:(id)arg4 ;
+(BOOL)isRangeInsideQuotationMarks:(NSRange)arg1 text:(id)arg2 limitToSurroundingText:(BOOL)arg3 ;
@end
