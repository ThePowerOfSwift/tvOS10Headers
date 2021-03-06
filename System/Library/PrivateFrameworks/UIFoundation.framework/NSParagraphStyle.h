/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface NSParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	double _lineSpacing;
	double _paragraphSpacing;
	double _headIndent;
	double _tailIndent;
	double _firstLineHeadIndent;
	double _minimumLineHeight;
	double _maximumLineHeight;
	NSArray* _tabStops;
	struct {
		unsigned alignment : 4;
		unsigned lineBreakMode : 4;
		unsigned tabStopsIsMutable : 1;
		unsigned isNaturalDirection : 1;
		unsigned rightToLeftDirection : 1;
		unsigned fixedMultiple : 2;
		unsigned tightensForTruncation : 1;
		unsigned refCount : 18;
	}  _flags;
	double _defaultTabInterval;
	id _extraData;

}

@property (nonatomic,readonly) double lineSpacing; 
@property (nonatomic,readonly) double paragraphSpacing; 
@property (nonatomic,readonly) long long alignment; 
@property (nonatomic,readonly) double headIndent; 
@property (nonatomic,readonly) double tailIndent; 
@property (nonatomic,readonly) double firstLineHeadIndent; 
@property (nonatomic,readonly) double minimumLineHeight; 
@property (nonatomic,readonly) double maximumLineHeight; 
@property (nonatomic,readonly) long long lineBreakMode; 
@property (nonatomic,readonly) long long baseWritingDirection; 
@property (nonatomic,readonly) double lineHeightMultiple; 
@property (nonatomic,readonly) double paragraphSpacingBefore; 
@property (nonatomic,readonly) float hyphenationFactor; 
@property (nonatomic,copy,readonly) NSArray * tabStops; 
@property (nonatomic,readonly) double defaultTabInterval; 
@property (nonatomic,readonly) BOOL allowsDefaultTighteningForTruncation; 
+(long long)_defaultWritingDirection;
+(void)initialize;
+(long long)defaultWritingDirectionForLanguage:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)defaultParagraphStyle;
-(long long)_ui_resolvedTextAlignment;
-(long long)_ui_resolvedTextAlignmentForUserInterfaceLayoutDirection:(long long)arg1 ;
-(id)textBlocks;
-(unsigned long long)lineBreakStrategy;
-(float)hyphenationFactor;
-(float)tighteningFactorForTruncation;
-(id)textLists;
-(unsigned long long)_lineBoundsOptions;
-(void)_allocExtraData;
-(double)paragraphSpacingBefore;
-(long long)headerLevel;
-(double)defaultTabInterval;
-(NSArray *)tabStops;
-(id)_initWithParagraphStyle:(id)arg1 ;
-(void)_deallocExtraData;
-(BOOL)allowsHangingPunctuation;
-(BOOL)usesOpticalAlignment;
-(BOOL)_isSuitableForFastStringDrawingWithAlignment:(long long*)arg1 mirrorsTextAlignment:(BOOL)arg2 lineBreakMode:(long long*)arg3 tighteningFactorForTruncation:(double*)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)alignment;
-(long long)lineBreakMode;
-(BOOL)allowsDefaultTighteningForTruncation;
-(double)minimumLineHeight;
-(double)maximumLineHeight;
-(double)lineSpacing;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)baseWritingDirection;
-(double)firstLineHeadIndent;
-(double)headIndent;
-(double)lineHeightMultiple;
-(double)paragraphSpacing;
-(double)tailIndent;
@end

