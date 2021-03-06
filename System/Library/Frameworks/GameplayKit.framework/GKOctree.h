/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKOctree : NSObject {

	GKCOctree<NSObject>* _cOctree;

}
+(id)octreeWithBoundingBox:(GKBoxRef)arg1 minimumCellSize:(float)arg2 ;
-(BOOL)removeElement:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)addElement:(id)arg1 ;
-(id)elementsAtPoint:;
-(BOOL)removeElement:(id)arg1 withNode:(id)arg2 ;
-(id)initWithBoundingBox:(GKBoxRef)arg1 minimumCellSize:(float)arg2 ;
-(id)addElement:(id)arg1 withBox:(GKBoxRef)arg2 ;
-(id)elementsInBox:(GKBoxRef)arg1 ;
@end

