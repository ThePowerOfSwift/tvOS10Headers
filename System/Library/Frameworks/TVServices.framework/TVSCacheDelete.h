/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableSet, NSMutableArray;

@interface TVSCacheDelete : NSObject {

	NSXPCConnection* _remoteConnection;
	NSObject*<OS_dispatch_queue> _cacheDeleteQueue;
	unsigned long long _doNotPurgeCount;
	NSMutableSet* _purgesInProgress;
	NSMutableArray* _uncalledDoNotPurgeReplyBlocks;

}

@property (nonatomic,retain) NSXPCConnection * remoteConnection;                          //@synthesize remoteConnection=_remoteConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheDeleteQueue;               //@synthesize cacheDeleteQueue=_cacheDeleteQueue - In the implementation block
@property (assign,nonatomic) unsigned long long doNotPurgeCount;                          //@synthesize doNotPurgeCount=_doNotPurgeCount - In the implementation block
@property (nonatomic,retain) NSMutableSet * purgesInProgress;                             //@synthesize purgesInProgress=_purgesInProgress - In the implementation block
@property (nonatomic,retain) NSMutableArray * uncalledDoNotPurgeReplyBlocks;              //@synthesize uncalledDoNotPurgeReplyBlocks=_uncalledDoNotPurgeReplyBlocks - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)registerCacheAtURL:(id)arg1 ofType:(long long)arg2 urgency:(long long)arg3 requiresAppTermination:(BOOL)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)_handleRemoteConnectionInvalidation;
-(void)_handleRemoteConnectionInterruption;
-(NSXPCConnection *)remoteConnection;
-(void)connectToDaemon;
-(NSObject*<OS_dispatch_queue>)cacheDeleteQueue;
-(NSMutableSet *)purgesInProgress;
-(NSMutableArray *)uncalledDoNotPurgeReplyBlocks;
-(unsigned long long)doNotPurgeCount;
-(void)setDoNotPurgeCount:(unsigned long long)arg1 ;
-(id)_logPrefix;
-(void)setDoNotPurge:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_synchronouslyFetchApplicationsStateWithRetry:(id)arg1 keepTrying:(/*^block*/id)arg2 ;
-(void)fetchApplicationsStateWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchPurgeableSpaceWithCompletion:(/*^block*/id)arg1 ;
-(id)purgeSpace:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)cancelPurge:(id)arg1 ;
-(void)unregisterCacheAtURL:(id)arg1 ;
-(void)unregisterAllCaches;
-(long long)synchronouslyFetchApplicationsState;
-(void)setRemoteConnection:(NSXPCConnection *)arg1 ;
-(void)setCacheDeleteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPurgesInProgress:(NSMutableSet *)arg1 ;
-(void)setUncalledDoNotPurgeReplyBlocks:(NSMutableArray *)arg1 ;
@end
