/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSLocale, NSArray, NSString;

@interface UILocalizedIndexedCollation : NSObject {

	NSLocale* _locale;
	NSArray* _sectionTitles;
	NSArray* _sectionStartStrings;
	NSArray* _sectionIndexTitles;
	NSArray* _sectionIndexMapping;
	NSString* _transform;
	NSString* _firstSectionStartString;
	NSString* _lastSectionStartString;
	CFStringTokenizerRef _tokenizer;

}

@property (nonatomic,readonly) NSArray * sectionTitles; 
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
+(id)collationWithDictionary:(id)arg1 ;
+(id)currentCollation;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(CFStringTokenizerRef)tokenizer;
-(id)transformedCollationStringForString:(id)arg1 ;
-(NSArray *)sectionTitles;
-(NSArray *)sectionIndexTitles;
-(long long)sectionForSectionIndexTitleAtIndex:(long long)arg1 ;
-(long long)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2 ;
-(id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2 ;
@end

