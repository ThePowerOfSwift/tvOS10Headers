/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusRegion.h>

@protocol UIFocusItem;
@interface _UIFocusableItemRegion : _UIFocusRegion {

	BOOL _itemCanBecomeFocused;
	id<UIFocusItem> _item;

}

@property (nonatomic,__weak,readonly) id<UIFocusItem> item;              //@synthesize item=_item - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)description;
-(id<UIFocusItem>)item;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithFrame:(CGRect)arg1 item:(id)arg2 ;
-(BOOL)_shouldBeOccludedByRegion:(id)arg1 ;
-(BOOL)_shouldCropRegionToSearchArea;
-(id)_visualRepresentationColor;
-(unsigned long long)_focusableBoundaries;
-(id)_defaultFocusItem;
-(id)_destinationItemForFocusMovement:(id)arg1 inMap:(id)arg2 ;
-(long long)_preferredDistanceComparisonType;
-(long long)_visualRepresentationPatternType;
@end

