/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <TextInput/TIKeyboardOutput.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIInputViewKeyboardOutput : TIKeyboardOutput <NSCopying, NSSecureCoding> {

	BOOL _didBeginOutput;
	long long _positionOffset;

}

@property (assign,nonatomic) long long positionOffset;              //@synthesize positionOffset=_positionOffset - In the implementation block
@property (assign,nonatomic) BOOL didBeginOutput;                   //@synthesize didBeginOutput=_didBeginOutput - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)didBeginOutput;
-(long long)positionOffset;
-(void)setPositionOffset:(long long)arg1 ;
-(void)setDidBeginOutput:(BOOL)arg1 ;
-(void)setAcceptedCandidate:(id)arg1 ;
-(void)setTextToCommit:(id)arg1 ;
-(void)setForwardDeletionCount:(unsigned long long)arg1 ;
-(void)setInsertionTextAfterSelection:(id)arg1 ;
-(void)setShortcutConversion:(id)arg1 ;
-(void)setHandwritingStrokesToDelete:(id)arg1 ;
@end

