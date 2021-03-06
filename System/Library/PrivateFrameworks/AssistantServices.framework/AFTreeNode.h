/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface AFTreeNode : NSObject <NSFastEnumeration> {

	id _item;
	AFTreeNode* _parentNode;
	NSMutableArray* _childNodes;

}

@property (assign,setter=_setParentNode:,nonatomic,__weak) AFTreeNode * parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
@property (getter=_childNodes,nonatomic,readonly) NSMutableArray * childNodes;                   //@synthesize childNodes=_childNodes - In the implementation block
@property (nonatomic,retain) id item;                                                            //@synthesize item=_item - In the implementation block
+(id)absoluteIndexPathsForTreeNodes:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AF0*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)description;
-(id)item;
-(AFTreeNode *)parentNode;
-(void)setItem:(id)arg1 ;
-(id)absoluteIndexPath;
-(id)_childNodes;
-(void)_appendDescriptionToString:(id)arg1 withIndentation:(id)arg2 ;
-(id)indexPathFromAncestorNode:(id)arg1 ;
-(long long)numberOfChildNodes;
-(id)childNodeAtIndex:(long long)arg1 ;
-(void)enumerateDescendentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)removeChildNode:(id)arg1 ;
-(void)_setParentNode:(id)arg1 ;
-(void)removeChildNodeAtIndex:(long long)arg1 ;
-(void)enumerateChildNodesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)containsNodeAtIndexPath:(id)arg1 ;
-(id)nodeAtIndexPath:(id)arg1 ;
-(id)indexPathOfNodeWithItem:(id)arg1 ;
-(id)lastChildNode;
-(void)replaceChildNodeAtIndex:(long long)arg1 withNode:(id)arg2 ;
-(void)addChildNode:(id)arg1 ;
-(void)removeFromParentNode;
-(void)enumerateChildNodesUsingBlock:(/*^block*/id)arg1 ;
-(long long)indexOfChildNode:(id)arg1 ;
-(void)insertChildNode:(id)arg1 atIndex:(long long)arg2 ;
@end

