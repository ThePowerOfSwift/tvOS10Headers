/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class BWVideoFormat, NSString, NSDictionary;

@interface BWPixelBufferPool : NSObject {

	BWVideoFormat* _videoFormat;
	unsigned long long _capacity;
	NSString* _name;
	BOOL _clientProvidesPool;
	NSDictionary* _additionalPixelBufferAttributes;
	long long _pixelBufferPoolOnce;
	CVPixelBufferPoolRef _pixelBufferPool;
	NSDictionary* _pixelBufferPoolAuxAttributes;
	int _pixelBufferPoolCreateError;

}

@property (readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long capacity; 
@property (nonatomic,readonly) CVPixelBufferPoolRef cvPixelBufferPool; 
@property (nonatomic,readonly) CFDictionaryRef cvPixelBufferPoolAuxAttributes; 
+(void)initialize;
-(void)dealloc;
-(NSString *)name;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
-(void)preallocateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)preallocate;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(BOOL)arg4 ;
-(void)setCVPixelBufferPool:(CVPixelBufferPoolRef)arg1 attributes:(CFDictionaryRef)arg2 ;
-(int)_ensurePool;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4 ;
-(CVPixelBufferPoolRef)cvPixelBufferPool;
-(CFDictionaryRef)cvPixelBufferPoolAuxAttributes;
-(void)enumerateSurfacesUsingBlock:(/*^block*/id)arg1 ;
-(CVBufferRef)newPixelBuffer;
-(unsigned long long)capacity;
@end

