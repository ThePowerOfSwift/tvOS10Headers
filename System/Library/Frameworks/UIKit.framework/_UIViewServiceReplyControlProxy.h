/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIViewServiceProxy_ReplyControl.h>

@class _UIViewServiceReplyControlTrampoline, _UIViewServiceReplyAwaitingTrampoline, NSLock;

@interface _UIViewServiceReplyControlProxy : NSObject <_UIViewServiceProxy_ReplyControl> {

	id _target;
	_UIViewServiceReplyControlTrampoline* _controlTrampoline;
	_UIViewServiceReplyAwaitingTrampoline* _awaitingTrampoline;
	NSLock* _lock;

}
+(id)proxyWithTarget:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)_awaitingReply;
-(id)_deliveringRepliesAsynchronously;
@end
