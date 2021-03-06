/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIBarButtonItemViewOwner.h>
#import <UIKit/_UIBarButtonItemGroupOwner.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol _UIButtonBarDelegate;
@class _UIButtonBarStackView, UILayoutGuide, NSLayoutConstraint, _UIButtonBarLayoutMetrics, NSMutableArray, NSMapTable, NSArray, _UIButtonBarButtonVisualProvider, UIBarButtonItem, UIView, NSString;

@interface _UIButtonBar : NSObject <_UIBarButtonItemViewOwner, _UIBarButtonItemGroupOwner, NSCoding> {

	_UIButtonBarStackView* _stackView;
	UILayoutGuide* _flexibleSpaceEqualSizeLayoutGuide;
	UILayoutGuide* _minimumInterItemSpaceLayoutGuide;
	NSLayoutConstraint* _minimumInterItemSpaceConstraint;
	UILayoutGuide* _minimumInterGroupSpaceLayoutGuide;
	NSLayoutConstraint* _minimumInterGroupSpaceConstraint;
	_UIButtonBarLayoutMetrics* _layoutMetrics;
	NSMutableArray* _groupLayouts;
	NSMutableArray* _effectiveLayout;
	NSMapTable* _groupLayoutMap;
	NSMutableArray* _layoutViews;
	NSMutableArray* _layoutGuides;
	NSMutableArray* _layoutActiveConstraints;
	NSMapTable* _senderActionMap;
	BOOL _itemsInGroupUseSameSize;
	BOOL _compact;
	NSArray* _barButtonGroups;
	double _minimumInterItemSpace;
	id<_UIButtonBarDelegate> _delegate;
	_UIButtonBarButtonVisualProvider* _visualProvider;
	double _minimumInterGroupSpace;
	/*^block*/id _defaultActionFilter;

}

@property (setter=_setVisualProvider:,getter=_visualProvider,nonatomic,copy) _UIButtonBarButtonVisualProvider * visualProvider;              //@synthesize visualProvider=_visualProvider - In the implementation block
@property (assign,setter=_setItemsInGroupUseSameSize:,getter=_itemsInGroupUseSameSize,nonatomic) BOOL itemsInGroupUseSameSize;               //@synthesize itemsInGroupUseSameSize=_itemsInGroupUseSameSize - In the implementation block
@property (assign,setter=_setMinimumInterGroupSpace:,getter=_minimumInterGroupSpace,nonatomic) double minimumInterGroupSpace;                //@synthesize minimumInterGroupSpace=_minimumInterGroupSpace - In the implementation block
@property (nonatomic,copy) id defaultActionFilter;                                                                                           //@synthesize defaultActionFilter=_defaultActionFilter - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * ultimateFallbackItem; 
@property (getter=_layoutWidth,nonatomic,readonly) double layoutWidth; 
@property (assign,setter=_setCompact:,getter=_compact,nonatomic) BOOL compact;                                                               //@synthesize compact=_compact - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,copy) NSArray * barButtonGroups;                                                                                        //@synthesize barButtonGroups=_barButtonGroups - In the implementation block
@property (assign,nonatomic) double minimumInterItemSpace;                                                                                   //@synthesize minimumInterItemSpace=_minimumInterItemSpace - In the implementation block
@property (assign,nonatomic,__weak) id<_UIButtonBarDelegate> delegate;                                                                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)optionalConstraintsPriority;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_UIButtonBarDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<_UIButtonBarDelegate>)delegate;
-(UIView *)view;
-(id)_visualProvider;
-(void)_itemDidChangeWidth:(id)arg1 ;
-(void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2 ;
-(void)_itemDidChangeHiddenState:(id)arg1 ;
-(void)_itemDidChangeSelectionState:(id)arg1 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg1 ;
-(double)_layoutWidth;
-(void)_setVisualProvider:(id)arg1 ;
-(void)_setItemsInGroupUseSameSize:(BOOL)arg1 ;
-(void)setDefaultActionFilter:(id)arg1 ;
-(UIBarButtonItem *)ultimateFallbackItem;
-(void)setBarButtonGroups:(NSArray *)arg1 ;
-(void)setMinimumInterItemSpace:(double)arg1 ;
-(void)_validateAllItems;
-(void)_reloadBarButtonGroups;
-(void)_updateToFitInWidth:(double)arg1 ;
-(NSArray *)barButtonGroups;
-(void)_setMinimumInterGroupSpace:(double)arg1 ;
-(BOOL)_compact;
-(id)_debug;
-(double)minimumInterItemSpace;
-(double)_minimumInterGroupSpace;
-(void)_groupDidUpdateItems:(id)arg1 removedItems:(id)arg2 ;
-(void)_groupDidUpdateRepresentative:(id)arg1 fromRepresentative:(id)arg2 ;
-(void)_groupDidUpdateVisibility:(id)arg1 ;
-(void)_groupDidChangeGeometry:(id)arg1 ;
-(void)_groupDidChangePriority:(id)arg1 ;
-(void)_setNeedsVisualUpdate;
-(void)_setNeedsVisualUpdateAndNotify:(BOOL)arg1 ;
-(double)_estimatedWidth;
-(void)_setCompact:(BOOL)arg1 ;
-(id)_updatedViewForBarButtonItem:(id)arg1 withView:(id)arg2 ;
-(id)_newGroupLayout:(id)arg1 ;
-(id)_targetActionForBarButtonItem:(id)arg1 ;
-(id)_layoutForGroup:(id)arg1 ;
-(void)_layoutBar;
-(void)_updateForTraitCollectionChange:(id)arg1 ;
-(BOOL)_itemsInGroupUseSameSize;
-(id)defaultActionFilter;
@end

