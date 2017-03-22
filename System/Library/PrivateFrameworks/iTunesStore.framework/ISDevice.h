/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISSingleton.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface ISDevice : NSObject <ISSingleton> {

	unsigned long long _daemonLaunchCount;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _guid;
	double _lastFreeSpaceRequest;

}

@property (readonly) NSString * deviceName; 
@property (readonly) NSString * guid; 
@property (readonly) NSString * hardwareName; 
@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * systemName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(int)_deviceClass;
-(void)dealloc;
-(id)init;
-(NSString *)systemName;
-(NSString *)guid;
-(BOOL)checkCapabilities:(id)arg1 withMismatches:(id*)arg2 ;
-(id)copyProtocolConditionalContext;
-(NSString *)hardwareName;
-(BOOL)releasePowerAssertion:(id)arg1 ;
-(BOOL)takePowerAssertion:(id)arg1 ;
-(void)requestFreeSpace:(unsigned long long)arg1 atPath:(id)arg2 withOptions:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)resetLocationAndPrivacy;
-(id)supportedOfferDeviceForDevices:(id)arg1 ;
-(NSString *)deviceName;
-(NSString *)serialNumber;
@end
