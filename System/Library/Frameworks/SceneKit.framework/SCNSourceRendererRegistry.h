/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNSourceRendererRegistry : NSObject {

	CFDictionaryRef _registry;

}
+(id)sharedRegistry;
-(void)dealloc;
-(id)init;
-(void)removeSourceRenderersForEngineContext:(C3DEngineContextRef)arg1 ;
-(void)removeSourceRenderersForSource:(id)arg1 ;
-(id)sourceRendererForEngineContext:(C3DEngineContextRef)arg1 source:(id)arg2 textureSource:(id)arg3 ;
-(void)rendererDidChange:(id)arg1 ;
@end
