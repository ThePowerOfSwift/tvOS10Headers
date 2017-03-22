/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMFMessageTransportDelegate;
@interface HMFMessageTransport : NSObject {

	id<HMFMessageTransportDelegate> _delegate;

}

@property (__weak) id<HMFMessageTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<HMFMessageTransportDelegate>)arg1 ;
-(id<HMFMessageTransportDelegate>)delegate;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
