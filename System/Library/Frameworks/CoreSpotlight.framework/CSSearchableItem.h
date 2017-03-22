/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSIndexQueuableItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CSSearchableItemAttributeSet, NSString, NSDate;

@interface CSSearchableItem : NSObject <CSIndexQueuableItem, NSSecureCoding, NSCopying> {

	CSSearchableItemAttributeSet* _attributeSet;

}

@property (assign) BOOL noIndex; 
@property (assign) BOOL isUpdate; 
@property (copy) NSString * bundleID; 
@property (copy) NSString * protection; 
@property (copy) NSString * uniqueIdentifier; 
@property (copy) NSString * domainIdentifier; 
@property (copy) NSDate * expirationDate; 
@property (retain) CSSearchableItemAttributeSet * attributeSet;              //@synthesize attributeSet=_attributeSet - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)searchableItemFromUserActivity:(id)arg1 bundleID:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(void)setAttributeSet:(CSSearchableItemAttributeSet *)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(BOOL)noIndex;
-(id)_propertiesDescription;
-(BOOL)_isFullyFormed;
-(BOOL)_hasAttributesOfType:(id)arg1 ;
-(NSString *)protection;
-(void)setProtection:(NSString *)arg1 ;
-(void)setIsUpdate:(BOOL)arg1 ;
-(void)setNoIndex:(BOOL)arg1 ;
-(id)initWithAttributeSet:(id)arg1 ;
-(void)_standardizePeople:(id)arg1 ;
-(void)_standardizeDeprecatedProperties:(id)arg1 ;
-(void)_standardizeHTML:(id)arg1 ;
-(void)_fixBrokenAuthorNames:(id)arg1 ;
-(void)_populateMissingPeopleWithNames:(id)arg1 emailAddresses:(id)arg2 itemPersons:(id)arg3 personDictionary:(id)arg4 contactProperties:(id)arg5 nameKey:(id)arg6 emailKey:(id)arg7 contactIdentifierKey:(id)arg8 personKey:(id)arg9 attributeSet:(id)arg10 ;
-(void)standardizeAttributes;
-(id)filteredSpotlightAttributes;
-(void)_updateWithSearchableItem:(id)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(CSSearchableItemAttributeSet *)attributeSet;
-(NSString *)domainIdentifier;
-(id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributeSet:(id)arg3 ;
-(id)searchableItem;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(BOOL)isUpdate;
@end
