/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@class PLImageTableSegment, NSData, NSString;

@interface PLMappedImageData : NSMutableData {

	PLImageTableSegment* _segment;
	void* _bytes;
	unsigned long long _length;
	BOOL _freeBytes;
	NSData* _pl_data;

}

@property (assign,nonatomic) unsigned imageWidth; 
@property (assign,nonatomic) unsigned imageHeight; 
@property (nonatomic,copy) NSString * photoUUID; 
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(void*)mutableBytes;
-(id)initWithImageTableSegment:(id)arg1 bytes:(void*)arg2 length:(unsigned long long)arg3 ;
-(unsigned long long)lengthIncludingFooter;
-(void)setPhotoUUID:(NSString *)arg1 ;
-(NSString *)photoUUID;
-(void)setImageWidth:(unsigned)arg1 ;
-(void)setImageHeight:(unsigned)arg1 ;
-(unsigned)imageWidth;
-(unsigned)imageHeight;
-(BOOL)uuidIsEqual:(id)arg1 ;
-(id)initWithThumbnailPath:(id)arg1 ;
-(id)initWithEntryLength:(unsigned long long)arg1 ;
-(id)brokencopy;
-(PLImageTableEntryFooter_s*)_footer;
-(unsigned long long)pl_advisoryLength;
-(BOOL)pl_writeToPath:(id)arg1 ;
@end

