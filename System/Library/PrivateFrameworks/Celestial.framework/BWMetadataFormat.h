/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFormat.h>

@interface BWMetadataFormat : BWFormat {

	opaqueCMFormatDescriptionRef _desc;

}
+(void)initialize;
+(id)formatWithMetadataFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)_initWithMetadataFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(unsigned)mediaType;
@end

