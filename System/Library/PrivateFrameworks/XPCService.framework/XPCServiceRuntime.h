/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/XPCService.framework/XPCService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface XPCServiceRuntime : NSObject {

	NSDictionary* _entitlements;

}
+(id)defaultRuntime;
-(void)dealloc;
-(id)init;
-(void)_initializeEntitlements;
-(id)entitlementForKey:(id)arg1 ;
@end
