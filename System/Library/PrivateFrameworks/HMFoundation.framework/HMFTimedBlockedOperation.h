/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFBlockOperation.h>

@interface HMFTimedBlockedOperation : HMFBlockOperation {

	double _timeout;

}

@property (nonatomic,readonly) double timeout;              //@synthesize timeout=_timeout - In the implementation block
-(id)init;
-(double)timeout;
-(id)initWithTimeout:(double)arg1 ;
-(unsigned long long)dispatchTimeout;
@end
