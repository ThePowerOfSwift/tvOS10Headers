/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBString, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation, _INPBContactList, _INPBStringList;

@interface _INPBSearchForPhotosIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_IN2* _excludedAttributes;
	SCD_Struct_IN2* _includedAttributes;
	_INPBString* _albumName;
	_INPBDateTimeRange* _dateCreated;
	_INPBIntentMetadata* _intentMetadata;
	_INPBLocation* _locationCreated;
	_INPBContactList* _peopleInPhoto;
	_INPBStringList* _searchTerm;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                      //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasDateCreated; 
@property (nonatomic,retain) _INPBDateTimeRange * dateCreated;                          //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationCreated; 
@property (nonatomic,retain) _INPBLocation * locationCreated;                           //@synthesize locationCreated=_locationCreated - In the implementation block
@property (nonatomic,readonly) BOOL hasAlbumName; 
@property (nonatomic,retain) _INPBString * albumName;                                   //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchTerm; 
@property (nonatomic,retain) _INPBStringList * searchTerm;                              //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,readonly) unsigned long long includedAttributesCount; 
@property (nonatomic,readonly) int* includedAttributes; 
@property (nonatomic,readonly) unsigned long long excludedAttributesCount; 
@property (nonatomic,readonly) int* excludedAttributes; 
@property (nonatomic,readonly) BOOL hasPeopleInPhoto; 
@property (nonatomic,retain) _INPBContactList * peopleInPhoto;                          //@synthesize peopleInPhoto=_peopleInPhoto - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setSearchTerm:(_INPBStringList *)arg1 ;
-(_INPBStringList *)searchTerm;
-(_INPBDateTimeRange *)dateCreated;
-(void)setDateCreated:(_INPBDateTimeRange *)arg1 ;
-(void)setAlbumName:(_INPBString *)arg1 ;
-(_INPBString *)albumName;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(void)setLocationCreated:(_INPBLocation *)arg1 ;
-(void)setPeopleInPhoto:(_INPBContactList *)arg1 ;
-(_INPBLocation *)locationCreated;
-(unsigned long long)includedAttributesCount;
-(int)includedAttributeAtIndex:(unsigned long long)arg1 ;
-(void)clearIncludedAttributes;
-(void)addIncludedAttribute:(int)arg1 ;
-(unsigned long long)excludedAttributesCount;
-(int)excludedAttributeAtIndex:(unsigned long long)arg1 ;
-(void)clearExcludedAttributes;
-(void)addExcludedAttribute:(int)arg1 ;
-(_INPBContactList *)peopleInPhoto;
-(int*)includedAttributes;
-(int*)excludedAttributes;
-(BOOL)hasSearchTerm;
-(BOOL)hasDateCreated;
-(BOOL)hasLocationCreated;
-(BOOL)hasAlbumName;
-(void)setIncludedAttributes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setExcludedAttributes:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasPeopleInPhoto;
@end
