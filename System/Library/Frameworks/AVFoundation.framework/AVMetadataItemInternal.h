/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, NSLocale, NSDate, NSDictionary;

@interface AVMetadataItemInternal : NSObject {

	OpaqueFigMetadataReaderRef reader;
	long long itemIndex;
	NSString* identifier;
	NSString* keySpace;
	id<NSObject><NSCopying> key;
	NSString* commonKey;
	NSLocale* locale;
	NSString* extendedLanguageTag;
	NSString* languageCode;
	id<NSObject><NSCopying> value;
	SCD_Struct_AV2 time;
	SCD_Struct_AV2 duration;
	NSDate* startDate;
	NSDate* discoveryTimestamp;
	NSString* dataType;
	NSDictionary* extras;

}
@end

