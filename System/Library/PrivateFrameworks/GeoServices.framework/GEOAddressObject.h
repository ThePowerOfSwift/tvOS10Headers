/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOAddressObjectProtocol.h>

@protocol GEOAddressObjectProtocol;
@class NSString;

@interface GEOAddressObject : NSObject <GEOAddressObjectProtocol> {

	id<GEOAddressObjectProtocol> _implementations[2];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasKnownAccuracy; 
@property (nonatomic,readonly) int knownAccuracy; 
+(id)addressObjectForPlaceData:(id)arg1 ;
+(id)libraryVersion;
+(BOOL)isMarkingMMStrings;
+(BOOL)isUsingV1Behavior;
+(unsigned char)_implementionType;
+(void)useMM:(BOOL)arg1 ;
+(BOOL)isUsingMM;
+(void)useV1Behavior:(BOOL)arg1 ;
+(void)markMMStrings:(BOOL)arg1 ;
+(id)addressObjectWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(int)knownAccuracy;
-(BOOL)hasKnownAccuracy;
-(id)spokenStructuredAddress;
-(id)address;
-(id)phoneticName;
-(id)phoneticAddress;
-(id)spokenName;
-(id)spokenAddress;
-(id)phoneticLocaleIdentifier;
-(id)weatherDisplayName;
-(id)addressDictionary;
-(id)initWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 language:(id)arg5 country:(id)arg6 phoneticLocale:(id)arg7 ;
-(id)fullAddressWithMultiline:(BOOL)arg1 ;
-(id)shortAddress;
-(id)cityDisplayNameWithFallback:(BOOL)arg1 ;
-(id)parkingDisplayName;
-(id)titlesForMapRect:(SCD_Struct_GE49)arg1 ;
-(id)spokenAddressForLocale:(id)arg1 ;
-(id)_implemention;
-(id)rawBytes;
@end
