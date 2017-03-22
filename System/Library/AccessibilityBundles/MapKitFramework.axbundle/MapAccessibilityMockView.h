/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/AccessibilityBundles/MapKitFramework.axbundle/MapKitFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKitFramework/MapKitFramework-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UIView;

@interface MapAccessibilityMockView : UIAccessibilityElement {

	UIView* _view;

}

@property (nonatomic,retain) UIView * view;              //@synthesize view=_view - In the implementation block
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
@end
