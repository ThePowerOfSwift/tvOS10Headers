/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MKMapSnapshotOptions, NSObject, VKMapSnapshotCreator, NSXPCConnection;

@interface MKMapSnapshotter : NSObject {

	MKMapSnapshotOptions* _options;
	int _loadingFlag;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _completionHandler;
	VKMapSnapshotCreator* _snapshotCreator;
	BOOL _needsResume;
	NSXPCConnection* _snapshotService;

}

@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)isLoading;
-(void)_cancel;
-(void)_failWithError:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_enterBackground:(id)arg1 ;
-(void)_exitBackground:(id)arg1 ;
-(void)_cleanupSnapshotCreator;
-(void)_succeedWithSnapshot:(id)arg1 ;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_performSnapshot;
@end
