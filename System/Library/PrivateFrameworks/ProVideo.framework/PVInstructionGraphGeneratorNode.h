/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphSourceNode.h>

@class PVEffect;

@interface PVInstructionGraphGeneratorNode : PVInstructionGraphSourceNode {

	PVEffect* _generatorEffect;

}

@property (nonatomic,retain) PVEffect * generatorEffect;              //@synthesize generatorEffect=_generatorEffect - In the implementation block
+(id)newGeneratorNode:(id)arg1 ;
-(PVEffect *)generatorEffect;
-(void)setGeneratorEffect:(PVEffect *)arg1 ;
-(void)loadIGNode:(HGRef<PVRenderContext>*)arg1 ;
-(void)unloadIGNode;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV14)arg1 trackInputs:(const PVInputHGNodeMap<int>Ref)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 renderContext:(HGRef<PVRenderContext>*)arg4 ;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 renderContext:(HGRef<PVRenderContext>*)arg2 ;
-(PCMatrix44Tmpl<double>)pixelTransformForPVEffect:(id)arg1 renderContext:(HGRef<PVRenderContext>*)arg2 ;
-(id)instructionGraphNodeDescription;
@end

