/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASEmailItem.h>

@class NSString;

@interface ASItemOperationsFetchResult : ASEmailItem {

	NSString* _classString;

}

@property (nonatomic,retain) NSString * classString;              //@synthesize classString=_classString - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(BOOL)_isSearchResult;
-(void)setClassString:(NSString *)arg1 ;
-(NSString *)classString;
@end
