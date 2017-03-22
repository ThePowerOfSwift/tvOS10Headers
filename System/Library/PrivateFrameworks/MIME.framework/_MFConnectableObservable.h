/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFObservable.h>
#import <libobjc.A.dylib/MFConnectableObservable.h>

@protocol MFObservable;
@class MFCancelationToken, NSLock, NSMapTable, NSString;

@interface _MFConnectableObservable : MFObservable <MFConnectableObservable> {

	id<MFObservable> _observable;
	MFCancelationToken* _cancelable;
	NSLock* _lock;
	NSMapTable* _observersToCancelable;
	BOOL _connected;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)connect;
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 ;
@end
