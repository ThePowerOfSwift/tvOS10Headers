/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSPersonNameComponents : NSObject <NSCopying, NSSecureCoding> {

	id _private;

}

@property (copy) NSString * namePrefix; 
@property (copy) NSString * givenName; 
@property (copy) NSString * middleName; 
@property (copy) NSString * familyName; 
@property (copy) NSString * nameSuffix; 
@property (copy) NSString * nickname; 
@property (copy) NSPersonNameComponents * phoneticRepresentation; 
+(id)_allProperties;
+(id)__componentsRequiredForScriptDetectionWithPhoneticDesired:(BOOL)arg1 ;
+(id)_allComponents;
+(BOOL)supportsSecureCoding;
-(void)setFamilyName:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(NSPersonNameComponents *)phoneticRepresentation;
-(void)setPhoneticRepresentation:(NSPersonNameComponents *)arg1 ;
-(BOOL)isEqualToComponents:(id)arg1 ;
-(id)_scriptDeterminingStringRepresentationWithPhoneticDesired:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)familyName;
-(BOOL)_isEmpty;
-(void)setNamePrefix:(NSString *)arg1 ;
-(void)setNameSuffix:(NSString *)arg1 ;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)middleName;
-(NSString *)nickname;
@end

