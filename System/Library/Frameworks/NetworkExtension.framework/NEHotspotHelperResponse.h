/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@interface NEHotspotHelperResponse : NSObject {

	CNPluginResponseRef _response;

}

@property (assign) CNPluginResponseRef response;              //@synthesize response=_response - In the implementation block
-(void)dealloc;
-(id)description;
-(CNPluginResponseRef)response;
-(id)initWithResponse:(CNPluginResponseRef)arg1 ;
-(void)setNetworkList:(id)arg1 ;
-(void)setResponse:(CNPluginResponseRef)arg1 ;
-(void)setNetwork:(id)arg1 ;
-(void)deliver;
@end

