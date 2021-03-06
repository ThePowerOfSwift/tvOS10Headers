/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSUnaryImageKernel.h>

@protocol MTLBuffer;
@class MPSImageAreaMax;

@interface MPSImageDilate : MPSUnaryImageKernel {

	const RLERow* _rleValues;
	id<MTLBuffer> _rleBuf;
	MPSImageAreaMax* _outerMax;
	MPSImageAreaMax* _innerMax;
	unsigned kernel;
	Class _maxClass;
	unsigned headerSize;
	unsigned valuesOffset;
	unsigned short centerWidth;
	unsigned short centerHeight;
	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;

}

@property (nonatomic,readonly) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP5)arg1 ;
-(Class)maxClass;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 values:(const float*)arg4 ;
-(void)dealloc;
-(id)debugDescription;
-(id)initWithDevice:(id)arg1 ;
@end

