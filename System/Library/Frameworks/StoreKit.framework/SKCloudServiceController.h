/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SKCloudServiceController : NSObject {

	BOOL _hasValidCloudServiceCapability;
	unsigned long long _cloudServiceCapability;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(long long)authorizationStatus;
+(void)requestAuthorization:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)requestCapabilitiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_storefrontDidChangeNotification;
-(void)_playbackCapabilitiesDidChangeNotification;
-(void)_accountStoreDidChangeNotification;
-(void)_updateCapabilitiesWithResponse:(id)arg1 postNotification:(BOOL)arg2 ;
-(void)_handleInvalidation;
-(void)requestStorefrontIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
@end

