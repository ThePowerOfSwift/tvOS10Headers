/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>

@interface _MXExtensionBaseContext : NSExtensionContext {

	id _connectionDelegate;

}

@property (assign,nonatomic,__weak) id connectionDelegate;              //@synthesize connectionDelegate=_connectionDelegate - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)receivedURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)connectionDelegate;
-(void)setConnectionDelegate:(id)arg1 ;
-(id)remoteContextWithErrorHandler:(/*^block*/id)arg1 ;
-(void)__MXExtensionContextBaseOpenURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)remoteContext;
@end

