/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying, OS_dispatch_queue;
@class AVMetadataItemValueRequest, NSError, NSMutableArray, NSObject;

@interface AVLazyValueLoadingMetadataItemInternal : NSObject {

	id<NSObject><NSCopying> value;
	AVMetadataItemValueRequest* valueRequest;
	/*^block*/id valueLoadingHandler;
	long long valueStatus;
	NSError* valueLoadingError;
	NSMutableArray* loadingCompletionHandlers;
	NSObject*<OS_dispatch_queue> readWriteQueue;

}
@end
