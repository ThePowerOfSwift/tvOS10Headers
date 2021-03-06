/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
@class NSDictionary;

@interface CVMLMetalContext : NSObject {

	BOOL _useGPU;
	id<MTLDevice> _metalDevice;
	NSDictionary* _wisdomParams;

}

@property (readonly) id<MTLDevice> metalDevice;                //@synthesize metalDevice=_metalDevice - In the implementation block
@property (readonly) NSDictionary * wisdomParams;              //@synthesize wisdomParams=_wisdomParams - In the implementation block
@property (readonly) BOOL useGPU;                              //@synthesize useGPU=_useGPU - In the implementation block
+(id)mapMetalDeviceNameToWisdomParams;
-(id<MTLDevice>)metalDevice;
-(BOOL)useGPU;
-(NSDictionary *)wisdomParams;
-(void)setMetalDevice:(id<MTLDevice>)arg1 ;
-(void)initWisdomParams;
-(id)initWithMetalDevice:(id)arg1 ;
@end

