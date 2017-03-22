/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class BWRingBuffer;

@interface BWMotionSampleRingBuffer : NSObject <NSFastEnumeration> {

	BWRingBuffer* _ringBuffer;
	double _maxDuration;
	int _maxCount;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW33*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(double)duration;
-(id)initWithMaxDuration:(double)arg1 ;
-(void)addMotionDataToRingBuffer:(SCD_Struct_BW35*)arg1 withSampleCount:(int)arg2 ;
-(SCD_Struct_BW35*)lastSample;
@end
