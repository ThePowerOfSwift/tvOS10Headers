/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface _INVocabularyItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _string;
	NSUUID* __siriID;

}

@property (setter=_setSiriID:,nonatomic,copy) NSUUID * _siriID;              //@synthesize _siriID=__siriID - In the implementation block
@property (nonatomic,readonly) NSString * string;                            //@synthesize string=_string - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isValidVocabularyString:(id)arg1 ;
+(unsigned long long)validateVocabularyString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(id)initWithString:(id)arg1 ;
-(NSUUID *)_siriID;
-(void)_setSiriID:(id)arg1 ;
-(BOOL)_isSimilarEnoughToNotSync:(id)arg1 ;
-(id)_dictionaryForSaving;
-(void)_setString:(id)arg1 ;
-(id)_initWithVocabularyItem:(id)arg1 ;
-(id)_initWithUncheckedString:(id)arg1 ;
@end
