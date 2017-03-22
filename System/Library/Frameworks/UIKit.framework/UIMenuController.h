/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICalloutBarDelegate.h>

@class NSString, NSArray;

@interface UIMenuController : NSObject <UICalloutBarDelegate> {

	CGRect _targetRect;
	long long _arrowDirection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isMenuVisible,nonatomic) BOOL menuVisible; 
@property (assign,nonatomic) long long arrowDirection;                           //@synthesize arrowDirection=_arrowDirection - In the implementation block
@property (nonatomic,copy) NSArray * menuItems; 
@property (nonatomic,readonly) CGRect menuFrame; 
+(id)sharedMenuController;
-(void)dealloc;
-(id)init;
-(void)_setTargetRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)isMenuVisible;
-(void)setMenuVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTargetRect:(CGRect)arg1 inView:(id)arg2 ;
-(void)update;
-(long long)arrowDirection;
-(void)setArrowDirection:(long long)arg1 ;
-(void)calloutBar:(id)arg1 willStartAnimation:(id)arg2 ;
-(void)calloutBar:(id)arg1 didFinishAnimation:(id)arg2 ;
-(BOOL)_updateAnimated:(BOOL)arg1 checkVisible:(BOOL)arg2 ;
-(void)_windowWillRotate:(id)arg1 ;
-(BOOL)_menuHidden;
-(void)setMenuVisible:(BOOL)arg1 ;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
-(CGRect)menuFrame;
@end
