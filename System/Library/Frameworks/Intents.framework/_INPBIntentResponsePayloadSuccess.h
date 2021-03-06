/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData, NSString;

@interface _INPBIntentResponsePayloadSuccess : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSData* _responseMessageData;
	NSString* _responseTypeName;
	BOOL _shouldOpenContainingApplication;
	SCD_Struct_IN1 _has;

}

@property (nonatomic,readonly) BOOL hasResponseMessageData; 
@property (nonatomic,retain) NSData * responseMessageData;                         //@synthesize responseMessageData=_responseMessageData - In the implementation block
@property (nonatomic,readonly) BOOL hasResponseTypeName; 
@property (nonatomic,retain) NSString * responseTypeName;                          //@synthesize responseTypeName=_responseTypeName - In the implementation block
@property (assign,nonatomic) BOOL hasShouldOpenContainingApplication; 
@property (assign,nonatomic) BOOL shouldOpenContainingApplication;                 //@synthesize shouldOpenContainingApplication=_shouldOpenContainingApplication - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setResponseMessageData:(NSData *)arg1 ;
-(void)setResponseTypeName:(NSString *)arg1 ;
-(BOOL)hasResponseMessageData;
-(BOOL)hasResponseTypeName;
-(void)setShouldOpenContainingApplication:(BOOL)arg1 ;
-(void)setHasShouldOpenContainingApplication:(BOOL)arg1 ;
-(BOOL)hasShouldOpenContainingApplication;
-(NSData *)responseMessageData;
-(NSString *)responseTypeName;
-(BOOL)shouldOpenContainingApplication;
@end

