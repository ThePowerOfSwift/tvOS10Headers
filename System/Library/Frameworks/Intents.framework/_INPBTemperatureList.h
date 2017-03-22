/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBCondition, NSMutableArray;

@interface _INPBTemperatureList : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBCondition* _condition;
	NSMutableArray* _temperatures;

}

@property (nonatomic,retain) NSMutableArray * temperatures;                  //@synthesize temperatures=_temperatures - In the implementation block
@property (nonatomic,readonly) BOOL hasCondition; 
@property (nonatomic,retain) _INPBCondition * condition;                     //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)temperatureType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(_INPBCondition *)condition;
-(void)setCondition:(_INPBCondition *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasCondition;
-(void)addTemperature:(id)arg1 ;
-(void)clearTemperatures;
-(unsigned long long)temperaturesCount;
-(id)temperatureAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)temperatures;
-(void)setTemperatures:(NSMutableArray *)arg1 ;
@end
