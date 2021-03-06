/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSMutableDictionary;

@interface MPNowPlayingPlaybackQueueCache : NSObject {

	NSMutableSet* _items;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _changedItems;
	BOOL _coalescingUpdates;

}
-(void)dealloc;
-(void)invalidate;
-(id)initWithQueue:(id)arg1 ;
-(void)addItems:(id)arg1 ;
-(void)_contentItemChanged:(id)arg1 ;
-(void)_scheduleContentItemChangedNotification:(id)arg1 ;
-(void)_pushContentItemChangedNotification;
@end

