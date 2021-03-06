/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRAudioFormatSettingsProtobuf, NSMutableArray;

@interface _MRVoiceInputDeviceDescriptorProtobuf : PBCodable <NSCopying> {

	_MRAudioFormatSettingsProtobuf* _defaultFormat;
	NSMutableArray* _supportedFormats;

}

@property (nonatomic,retain) NSMutableArray * supportedFormats;                           //@synthesize supportedFormats=_supportedFormats - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultFormat; 
@property (nonatomic,retain) _MRAudioFormatSettingsProtobuf * defaultFormat;              //@synthesize defaultFormat=_defaultFormat - In the implementation block
+(Class)supportedFormatsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_MRAudioFormatSettingsProtobuf *)defaultFormat;
-(id)dictionaryRepresentation;
-(NSMutableArray *)supportedFormats;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSupportedFormats:(NSMutableArray *)arg1 ;
-(void)setDefaultFormat:(_MRAudioFormatSettingsProtobuf *)arg1 ;
-(void)addSupportedFormats:(id)arg1 ;
-(unsigned long long)supportedFormatsCount;
-(void)clearSupportedFormats;
-(id)supportedFormatsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDefaultFormat;
@end

