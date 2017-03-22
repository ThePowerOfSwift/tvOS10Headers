/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSKernel.h>

@interface MPSCNNKernel : MPSKernel {

	SCD_Struct_MP4 _offset;
	SCD_Struct_MP6 _clipRect;
	unsigned long long destinationFeatureChannelOffset;
	unsigned long long _edgeMode;
	int _checkFlags;
	/*function pointer*/void* _encode;
	void* _encodeData;
	unsigned long long _destinationFeatureChannelOffset;

}

@property (assign,nonatomic) SCD_Struct_MP4 offset;                                           //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP6 clipRect;                                         //@synthesize clipRect=_clipRect - In the implementation block
@property (assign,nonatomic) unsigned long long destinationFeatureChannelOffset;              //@synthesize destinationFeatureChannelOffset=_destinationFeatureChannelOffset - In the implementation block
@property (assign,nonatomic) unsigned long long edgeMode;                                     //@synthesize edgeMode=_edgeMode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP5)arg1 ;
-(SCD_Struct_MP6)clipRect;
-(void)setDestinationFeatureChannelOffset:(unsigned long long)arg1 ;
-(unsigned long long)edgeMode;
-(unsigned long long)destinationFeatureChannelOffset;
-(void)setEdgeMode:(unsigned long long)arg1 ;
-(id)init;
-(id)debugDescription;
-(void)setOffset:(SCD_Struct_MP4)arg1 ;
-(SCD_Struct_MP4)offset;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 ;
-(void)setClipRect:(SCD_Struct_MP6)arg1 ;
-(id)initWithDevice:(id)arg1 ;
@end
