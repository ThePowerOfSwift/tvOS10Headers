/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MFPassthroughViewProvider.h>
#import <libobjc.A.dylib/MFModernAddressAtomDelegate.h>

@protocol MFModernLabelledAtomListDelegate;
@class UILabel, NSArray, NSMutableArray, NSString, UIColor, NSDictionary;

@interface MFModernLabelledAtomList : UIView <MFPassthroughViewProvider, MFModernAddressAtomDelegate> {

	UILabel* _label;
	void* _addressBook;
	id<MFModernLabelledAtomListDelegate> _delegate;
	NSArray* _addresses;
	NSMutableArray* _addressAtoms;
	NSString* _title;
	UIColor* _labelTextColor;
	NSDictionary* _recipients;
	BOOL _labelVisible;
	unsigned _needsReflow : 1;
	double _previousWidth;
	UILabel* _lastBaselineDeceptionLabel;
	BOOL _primary;
	unsigned long long _numberOfRows;
	double _lineSpacing;
	NSArray* _viewsToDodge;

}

@property (nonatomic,readonly) UILabel * label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIColor * labelTextColor;                             //@synthesize labelTextColor=_labelTextColor - In the implementation block
@property (assign,getter=isLabelVisible,nonatomic) BOOL labelVisible; 
@property (assign,getter=isPrimary,nonatomic) BOOL primary;                        //@synthesize primary=_primary - In the implementation block
@property (assign,nonatomic) double lineSpacing;                                   //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfRows;                    //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (nonatomic,retain) NSArray * viewsToDodge;                               //@synthesize viewsToDodge=_viewsToDodge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultLabelTextColor;
+(id)defaultLabelFont;
+(double)spaceBetweenColonAndFirstAtomNaturalEdge;
+(double)atomLineHeight;
+(id)primaryLabelFont;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)title;
-(CGSize)intrinsicContentSize;
-(unsigned long long)numberOfRows;
-(UILabel *)label;
-(id)viewForLastBaselineLayout;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(id)passthroughViews;
-(CGRect)labelFrame;
-(id)viewForFirstBaselineLayout;
-(id)labelText;
-(UIColor *)labelTextColor;
-(void)setLabelTextColor:(UIColor *)arg1 ;
-(void)addressAtom:(id)arg1 displayStringDidChange:(id)arg2 ;
-(void)addressBookDidChange:(id)arg1 ;
-(BOOL)isLabelVisible;
-(void)_reflow;
-(void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_setNeedsReflow;
-(void)_reflowIfNeeded;
-(id)addressAtoms;
-(CGRect)_frameForAtomAtIndex:(unsigned long long)arg1 withStartingPoint:(CGPoint)arg2 row:(inout unsigned long long*)arg3 ;
-(CGPoint)baselinePointForRow:(unsigned long long)arg1 ;
-(double)_remainingSpaceForRowAtPoint:(CGPoint)arg1 ;
-(NSArray *)viewsToDodge;
-(void)setAddressAtomSeparatorStyle:(int)arg1 ;
-(void)enumerateAddressAtomsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLabel:(id)arg1 title:(id)arg2 addressBook:(void*)arg3 ;
-(void)setAddresses:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setAddressAtomScale:(double)arg1 ;
-(void)setAddressAtomsArePrimary:(BOOL)arg1 ;
-(void)setLabelVisible:(BOOL)arg1 ;
-(void)updateAtomsForVIP;
-(id)atomDisplayStrings;
-(void)setAtomAlpha:(double)arg1 ;
-(void)crossFadeLabelVisibility:(BOOL)arg1 atomSeparatorStyle:(int)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setOverrideFont:(id)arg1 ;
-(void)setViewsToDodge:(NSArray *)arg1 ;
-(void)setPrimary:(BOOL)arg1 ;
-(BOOL)isPrimary;
@end

