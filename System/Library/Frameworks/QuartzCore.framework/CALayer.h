/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/CAPropertyInfo.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/CAMediaTiming.h>

@class NSArray, CAMeshTransform, NSString, NSDictionary;

@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {

	CALayerIvars* _attr;

}

@property (nonatomic,readonly) CALayer * _labelLayerToClipDuringBoundsSizeAnimation; 
@property (copy) NSArray * states; 
@property (copy) NSArray * stateTransitions; 
@property (readonly) CGRect visibleRect; 
@property (copy) CAMeshTransform * meshTransform; 
@property (assign) BOOL needsLayoutOnGeometryChange; 
@property (assign) BOOL canDrawConcurrently; 
@property (assign) BOOL acceleratesDrawing; 
@property (getter=isFrozen) BOOL frozen; 
@property (assign) BOOL allowsHitTesting; 
@property (assign) BOOL hitTestsAsOpaque; 
@property (assign) BOOL clearsContext; 
@property (assign) BOOL contentsOpaque; 
@property (assign) BOOL contentsContainsSubtitles; 
@property (assign) BOOL allowsContentsRectCornerMasking; 
@property (assign) BOOL literalContentsCenter; 
@property (copy) NSString * contentsScaling; 
@property (assign) CGAffineTransform contentsTransform; 
@property (assign) BOOL contentsDither; 
@property (assign) CGColorRef contentsMultiplyColor; 
@property (assign) BOOL invertsShadow; 
@property (assign) BOOL shadowPathIsBounds; 
@property (retain) id cornerContents; 
@property (assign) CGRect cornerContentsCenter; 
@property (assign) BOOL cornerContentsMasksEdges; 
@property (assign) unsigned maskedCorners; 
@property (assign) double motionBlurAmount; 
@property (assign) BOOL sortsSublayers; 
@property (assign) BOOL preloadsCache; 
@property (assign) BOOL rasterizationPrefersDisplayCompositing; 
@property (assign) BOOL allowsGroupBlending; 
@property (assign) BOOL allowsDisplayCompositing; 
@property (assign) CGSize sizeRequisition; 
@property (assign) CGSize backgroundColorPhase; 
@property (copy) NSArray * behaviors; 
@property (assign) double velocityStretch; 
@property (assign) double mass; 
@property (assign) double momentOfInertia; 
@property (assign) double coefficientOfRestitution; 
@property (assign) CGRect bounds; 
@property (assign) CGPoint position; 
@property (assign) double zPosition; 
@property (assign) CGPoint anchorPoint; 
@property (assign) double anchorPointZ; 
@property (assign) CATransform3D transform; 
@property (assign) CGRect frame; 
@property (getter=isHidden) BOOL hidden; 
@property (getter=isDoubleSided) BOOL doubleSided; 
@property (getter=isGeometryFlipped) BOOL geometryFlipped; 
@property (readonly) CALayer * superlayer; 
@property (copy) NSArray * sublayers; 
@property (assign) CATransform3D sublayerTransform; 
@property (retain) CALayer * mask; 
@property (assign) BOOL masksToBounds; 
@property (retain) id contents; 
@property (assign) CGRect contentsRect; 
@property (copy) NSString * contentsGravity; 
@property (assign) double contentsScale; 
@property (assign) CGRect contentsCenter; 
@property (copy) NSString * contentsFormat; 
@property (copy) NSString * minificationFilter; 
@property (copy) NSString * magnificationFilter; 
@property (assign) float minificationFilterBias; 
@property (getter=isOpaque) BOOL opaque; 
@property (assign) BOOL needsDisplayOnBoundsChange; 
@property (assign) BOOL drawsAsynchronously; 
@property (assign) unsigned edgeAntialiasingMask; 
@property (assign) BOOL allowsEdgeAntialiasing; 
@property (assign) CGColorRef backgroundColor; 
@property (assign) double cornerRadius; 
@property (assign) double borderWidth; 
@property (assign) CGColorRef borderColor; 
@property (assign) float opacity; 
@property (assign) BOOL allowsGroupOpacity; 
@property (retain) id compositingFilter; 
@property (copy) NSArray * filters; 
@property (copy) NSArray * backgroundFilters; 
@property (assign) BOOL shouldRasterize; 
@property (assign) double rasterizationScale; 
@property (assign) CGColorRef shadowColor; 
@property (assign) float shadowOpacity; 
@property (assign) CGSize shadowOffset; 
@property (assign) double shadowRadius; 
@property (assign) const CGPathRef shadowPath; 
@property (copy) NSDictionary * actions; 
@property (copy) NSString * name; 
@property (__weak) id<CALayerDelegate> delegate; 
@property (copy) NSDictionary * style; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) BOOL autoreverses; 
@property (copy) NSString * fillMode; 
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(void)CAMLParserEndElement:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(BOOL)needsLayoutForKey:(id)arg1 ;
+(id)layer;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)properties;
+(id)defaultActionForKey:(id)arg1 ;
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(void)_ui_animateKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 usingSpringWithStiffnessFactor:(double)arg4 initialVelocity:(double)arg5 completion:(/*^block*/id)arg6 ;
-(void)_ui_removeAnimationForKeyPath:(id)arg1 ;
-(void)setPerspectiveDistance:(double)arg1 ;
-(BOOL)uiHasFilterWithName:(id)arg1 ;
-(CALayer *)_labelLayerToClipDuringBoundsSizeAnimation;
-(void)_setLabelMasksToBoundsForAnimation:(BOOL)arg1 ;
-(long long)compareTextEffectsOrdering:(id)arg1 ;
-(void)web_disableAllActions;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(id)_initWithReference:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(BOOL)canDrawConcurrently;
-(BOOL)_canDisplayConcurrently;
-(void)setSizeRequisition:(CGSize)arg1 ;
-(void)_prepareContext:(CGContextRef)arg1 ;
-(void)insertState:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)addState:(id)arg1 ;
-(void)removeState:(id)arg1 ;
-(id)dependentStatesOfState:(id)arg1 ;
-(id)stateTransitionFrom:(id)arg1 to:(id)arg2 ;
-(void)_scrollPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(void)_scrollRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(CGRect)_visibleRectOfLayer:(id)arg1 ;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(BOOL)_defersDidBecomeVisiblePostCommit;
-(CGColorSpaceRef)_retainColorSpace;
-(unsigned)_renderImageCopyFlags;
-(BOOL)ignoresHitTesting;
-(BOOL)allowsHitTesting;
-(BOOL)sortsSublayers;
-(BOOL)_scheduleAnimationTimer;
-(void)_cancelAnimationTimer;
-(void)_renderBackgroundInContext:(CGContextRef)arg1 ;
-(void)_renderForegroundInContext:(CGContextRef)arg1 ;
-(void)_renderSublayersInContext:(CGContextRef)arg1 ;
-(void)_renderBorderInContext:(CGContextRef)arg1 ;
-(BOOL)drawsMipmapLevels;
-(CGSize)sizeRequisition;
-(id)cornerContents;
-(void)_contentsFormatDidChange:(id)arg1 ;
-(CGSize)preferredFrameSize;
-(unsigned)maskedCorners;
-(CGRect)cornerContentsCenter;
-(BOOL)cornerContentsMasksEdges;
-(BOOL)contentsContainsSubtitles;
-(void)setContentsContainsSubtitles:(BOOL)arg1 ;
-(NSArray *)backgroundFilters;
-(void)setBackgroundFilters:(NSArray *)arg1 ;
-(BOOL)rasterizationPrefersDisplayCompositing;
-(double)motionBlurAmount;
-(CGSize)backgroundColorPhase;
-(double)velocityStretch;
-(double)coefficientOfRestitution;
-(BOOL)preloadsCache;
-(BOOL)allowsDisplayCompositing;
-(BOOL)wantsExtendedDynamicRangeContent;
-(BOOL)hitTestsAsOpaque;
-(BOOL)literalContentsCenter;
-(BOOL)invertsShadow;
-(BOOL)shadowPathIsBounds;
-(id)layerBeingDrawn;
-(id)layerAtTime:(double)arg1 ;
-(BOOL)doubleSided;
-(BOOL)allowsContentsRectCornerMasking;
-(void)setAllowsContentsRectCornerMasking:(BOOL)arg1 ;
-(void)setLiteralContentsCenter:(BOOL)arg1 ;
-(void)setInvertsShadow:(BOOL)arg1 ;
-(BOOL)contentsDither;
-(void)setContentsDither:(BOOL)arg1 ;
-(BOOL)contentsOpaque;
-(void)setMotionBlurAmount:(double)arg1 ;
-(void)setWantsExtendedDynamicRangeContent:(BOOL)arg1 ;
-(void)setBackgroundColorPhase:(CGSize)arg1 ;
-(id)lights;
-(void)setLights:(id)arg1 ;
-(void)setVelocityStretch:(double)arg1 ;
-(void)setCoefficientOfRestitution:(double)arg1 ;
-(BOOL)getRendererInfo:(CARenderRendererInfo*)arg1 size:(unsigned long long)arg2 ;
-(void)setAcceleratesDrawing:(BOOL)arg1 ;
-(void)setContentsChanged;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(BOOL)acceleratesDrawing;
-(void)scrollPoint:(CGPoint)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 ;
-(BOOL)isDescendantOf:(id)arg1 ;
-(void)setCanDrawConcurrently:(BOOL)arg1 ;
-(void*)regionBeingDrawn;
-(void)setFlipped:(BOOL)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)arg1 ;
-(void)setNeedsDisplay;
-(CGRect)bounds;
-(CGSize)size;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setActions:(NSDictionary *)arg1 ;
-(void)setCompositingFilter:(id)arg1 ;
-(CGColorRef)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CALayerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(void)setNeedsLayout;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)addSublayer:(id)arg1 ;
-(CGRect)frame;
-(void)setBounds:(CGRect)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)debugDescription;
-(id<CALayerDelegate>)delegate;
-(void)setSpeed:(float)arg1 ;
-(void)setMass:(double)arg1 ;
-(double)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)layoutIfNeeded;
-(NSDictionary *)actions;
-(void)setHitTestsAsOpaque:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)display;
-(NSDictionary *)style;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)setShadowColor:(CGColorRef)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setTransform:(CATransform3D)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setRasterizationPrefersDisplayCompositing:(BOOL)arg1 ;
-(CGAffineTransform)affineTransform;
-(void)setAffineTransform:(CGAffineTransform)arg1 ;
-(void)setMasksToBounds:(BOOL)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setRasterizationScale:(double)arg1 ;
-(double)rasterizationScale;
-(id)animationKeys;
-(id)animationForKey:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toLayer:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toLayer:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(CATransform3D)transform;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)contents;
-(void)layoutBelowIfNeeded;
-(CALayer *)superlayer;
-(id)context;
-(float)speed;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(double)convertTime:(double)arg1 fromLayer:(id)arg2 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(BOOL)hasBeenCommitted;
-(float)repeatCount;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(double)beginTime;
-(void)setFilters:(NSArray *)arg1 ;
-(void)setFillMode:(NSString *)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(id)presentationLayer;
-(BOOL)isOpaque;
-(void)setMagnificationFilter:(NSString *)arg1 ;
-(void)setContentsFormat:(NSString *)arg1 ;
-(void)setContentsCenter:(CGRect)arg1 ;
-(CGRect)contentsCenter;
-(NSArray *)sublayers;
-(void)setAllowsGroupBlending:(BOOL)arg1 ;
-(CALayer *)mask;
-(void)setMask:(CALayer *)arg1 ;
-(void)setCornerContents:(id)arg1 ;
-(void)setCornerContentsCenter:(CGRect)arg1 ;
-(double)cornerRadius;
-(void)renderInContext:(CGContextRef)arg1 ;
-(CGPoint)position;
-(BOOL)needsLayout;
-(void)removeFromSuperlayer;
-(void)setSublayers:(NSArray *)arg1 ;
-(void)setContentsGravity:(NSString *)arg1 ;
-(BOOL)needsDisplayOnBoundsChange;
-(NSString *)contentsGravity;
-(void)setContentsScaling:(NSString *)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(double)contentsScale;
-(void)setContentsScale:(double)arg1 ;
-(void)setShouldRasterize:(BOOL)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(BOOL)needsDisplay;
-(BOOL)masksToBounds;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setClearsContext:(BOOL)arg1 ;
-(BOOL)clearsContext;
-(void)clearHasBeenCommitted;
-(void)displayIfNeeded;
-(NSArray *)filters;
-(void)removeAllAnimations;
-(BOOL)shouldRasterize;
-(void)setContents:(id)arg1 ;
-(void)invalidateContents;
-(void)setContentsTransform:(CGAffineTransform)arg1 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(BOOL)isFrozen;
-(void)_display;
-(id)ancestorSharedWithLayer:(id)arg1 ;
-(BOOL)allowsWeakReference;
-(void)setSublayerTransform:(CATransform3D)arg1 ;
-(BOOL)needsLayoutOnGeometryChange;
-(void)setNeedsLayoutOnGeometryChange:(BOOL)arg1 ;
-(CGPoint)anchorPoint;
-(CGSize)shadowOffset;
-(void)setStyle:(NSDictionary *)arg1 ;
-(CGSize)_preferredSize;
-(void)setAllowsGroupOpacity:(BOOL)arg1 ;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(CGColorRef)shadowColor;
-(BOOL)allowsGroupOpacity;
-(void)setPreloadsCache:(BOOL)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
-(CGRect)visibleRect;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOpacity:(float)arg1 ;
-(double)shadowRadius;
-(void)setZPosition:(double)arg1 ;
-(float)shadowOpacity;
-(NSString *)contentsScaling;
-(id)compositingFilter;
-(void)reloadValueForKeyPath:(id)arg1 ;
-(void)setEdgeAntialiasingMask:(unsigned)arg1 ;
-(void)_dealloc;
-(void)setMaskedCorners:(unsigned)arg1 ;
-(void)setCornerContentsMasksEdges:(BOOL)arg1 ;
-(CGColorRef)borderColor;
-(void)setContentsMultiplyColor:(CGColorRef)arg1 ;
-(CGColorRef)contentsMultiplyColor;
-(id)valueForUndefinedKey:(id)arg1 ;
-(double)mass;
-(id)hitTest:(CGPoint)arg1 ;
-(BOOL)opaque;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(double)borderWidth;
-(void)setShadowPath:(const CGPathRef)arg1 ;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1 ;
-(CAMeshTransform *)meshTransform;
-(void)setMeshTransform:(CAMeshTransform *)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)setAllowsHitTesting:(BOOL)arg1 ;
-(void)layoutSublayers;
-(NSString *)contentsFormat;
-(void)drawInContext:(CGContextRef)arg1 ;
-(BOOL)retainWeakReference;
-(CGRect)contentsRect;
-(BOOL)layoutIsActive;
-(BOOL)isDoubleSided;
-(void)setDoubleSided:(BOOL)arg1 ;
-(CATransform3D)sublayerTransform;
-(unsigned)edgeAntialiasingMask;
-(NSArray *)behaviors;
-(BOOL)allowsGroupBlending;
-(void)setMinificationFilter:(NSString *)arg1 ;
-(BOOL)isGeometryFlipped;
-(void)setGeometryFlipped:(BOOL)arg1 ;
-(void)setBehaviors:(NSArray *)arg1 ;
-(BOOL)drawsAsynchronously;
-(void)setDrawsAsynchronously:(BOOL)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)setAllowsDisplayCompositing:(BOOL)arg1 ;
-(BOOL)hidden;
-(double)anchorPointZ;
-(void)setAnchorPointZ:(double)arg1 ;
-(void)setSortsSublayers:(BOOL)arg1 ;
-(BOOL)isFlipped;
-(BOOL)contentsAreFlipped;
-(double)convertTime:(double)arg1 toLayer:(id)arg2 ;
-(BOOL)autoreverses;
-(void)setShadowPathIsBounds:(BOOL)arg1 ;
-(const CGPathRef)shadowPath;
-(double)repeatDuration;
-(void)setRepeatDuration:(double)arg1 ;
-(double)momentOfInertia;
-(void)setMomentOfInertia:(double)arg1 ;
-(NSString *)fillMode;
-(CGAffineTransform)contentsTransform;
-(id)modelLayer;
-(void)setContentsOpaque:(BOOL)arg1 ;
-(id)stateWithName:(id)arg1 ;
-(BOOL)allowsEdgeAntialiasing;
-(double)zPosition;
-(NSString *)magnificationFilter;
-(NSString *)minificationFilter;
-(float)minificationFilterBias;
-(void)setMinificationFilterBias:(float)arg1 ;
@end

