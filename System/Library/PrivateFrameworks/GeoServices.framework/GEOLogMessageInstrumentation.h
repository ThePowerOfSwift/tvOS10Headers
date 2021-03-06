/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, NSMutableDictionary, NSObject, NSString, GEOLogMessageCacheManager;

@interface GEOLogMessageInstrumentation : NSObject {

	NSMutableArray* _registeredEventNames;
	NSMutableDictionary* _msgCountForRegisteredEvents;
	NSObject*<OS_dispatch_queue> _instrumenationQueue;
	NSObject*<OS_dispatch_source> _logMessageInstrumentationFlushTimer;
	BOOL _exitWhenAllInstrumentationLogsFlushed;
	unsigned long long _logMessageNothingToFlushCounter;
	NSString* _msgCountUserDefaultsKey;
	GEOLogMessageCacheManager* _cacheManager;

}

@property (nonatomic,readonly) GEOLogMessageCacheManager * cacheManager;              //@synthesize cacheManager=_cacheManager - In the implementation block
+(id)defaultInstrumentation;
+(id)createDefaultInstrumentation;
+(void)disableDefaultInstrumentation;
-(void)dealloc;
-(id)init;
-(GEOLogMessageCacheManager *)cacheManager;
-(void)enableLogMsgInstrumentation;
-(void)disableLogMsgInstrumentation;
-(void)_registerEventName:(id)arg1 ;
-(void)captureLogMessage:(id)arg1 forEventName:(id)arg2 fromLogFrameworkAdaptor:(BOOL)arg3 ;
-(void)captureLogMsgCountForEventName:(id)arg1 logMsgCount:(long long)arg2 fromLogFrameworkAdaptor:(BOOL)arg3 ;
-(void)captureLogMessageCollectionRequest:(id)arg1 forEventName:(id)arg2 fromLogFrameworkAdaptor:(BOOL)arg3 ;
-(void)waitForEmptyInstrumentationQueue:(/*^block*/id)arg1 ;
@end

