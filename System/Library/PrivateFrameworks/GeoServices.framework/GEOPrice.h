/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerFormatTokenPriceValue.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOPrice : PBCodable <GEOServerFormatTokenPriceValue, NSCopying> {

	float _amount;
	NSString* _currencyCode;
	SCD_Struct_GE15 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double value; 
@property (nonatomic,readonly) NSString * currencyCode; 
@property (assign,nonatomic) BOOL hasAmount; 
@property (assign,nonatomic) float amount;                           //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrencyCode; 
@property (nonatomic,retain) NSString * currencyCode;                //@synthesize currencyCode=_currencyCode - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(double)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAmount:(float)arg1 ;
-(float)amount;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasAmount:(BOOL)arg1 ;
-(BOOL)hasAmount;
-(BOOL)hasCurrencyCode;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
@end
