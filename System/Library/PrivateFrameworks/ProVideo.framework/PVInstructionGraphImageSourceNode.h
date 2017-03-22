/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphSourceNode.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol PVImageDelegate;
@class NSLock, NSURL, NSString;

@interface PVInstructionGraphImageSourceNode : PVInstructionGraphSourceNode <NSCacheDelegate> {

	NSLock* _throttleLock;
	unsigned _throttleForMemWarning;
	CachedImageInfo* m_cachedImageInfo;
	HGRef<PVRenderManager>* m_renderManager;
	int _renderingIntent;
	NSURL* _url;
	NSString* _key;
	id<PVImageDelegate> _imageDelegate;

}

@property (nonatomic,retain) NSURL * url;                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id<PVImageDelegate> imageDelegate;              //@synthesize imageDelegate=_imageDelegate - In the implementation block
@property (assign,nonatomic) int renderingIntent;                            //@synthesize renderingIntent=_renderingIntent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)purgeBitmapCache:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)key;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(id)initWithURL:(id)arg1 key:(id)arg2 transform:(CGAffineTransform)arg3 isExporting:(BOOL)arg4 imageDelegate:(id)arg5 renderingIntent:(int)arg6 ;
-(void)loadIGNode:(HGRef<PVRenderContext>*)arg1 ;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV14)arg1 trackInputs:(const PVInputHGNodeMap<int>Ref)arg2 renderer:(const HGRef<HGRenderer>*)arg3 renderContext:(HGRef<PVRenderContext>*)arg4 ;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 renderContext:(HGRef<PVRenderContext>*)arg2 ;
-(PCMatrix44Tmpl<double>)pixelTransformForPVEffect:(id)arg1 renderContext:(HGRef<PVRenderContext>*)arg2 ;
-(id)instructionGraphNodeDescription;
-(id<PVImageDelegate>)imageDelegate;
-(int)renderingIntent;
-(void)didRecieveMemoryWarning:(id)arg1 ;
-(void)setImageDelegate:(id<PVImageDelegate>)arg1 ;
-(void)setRenderingIntent:(int)arg1 ;
-(id)newCVPixelBufferCacheItemForImage:(HGRef<PVRenderContext>*)arg1 ;
@end
