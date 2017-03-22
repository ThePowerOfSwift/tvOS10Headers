/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UILexiconEntry : NSObject <NSCopying> {

	NSString* _userInput;
	NSString* _documentText;

}

@property (nonatomic,readonly) NSString * documentText;              //@synthesize documentText=_documentText - In the implementation block
@property (nonatomic,readonly) NSString * userInput;                 //@synthesize userInput=_userInput - In the implementation block
+(id)_entryWithTILexiconEntry:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)documentText;
-(NSString *)userInput;
@end
