/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SAWebWebSearchResult;

@interface SAWebObject : SADomainObject

@property (nonatomic,copy) NSString * query; 
@property (nonatomic,retain) SAWebWebSearchResult * results; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(SAWebWebSearchResult *)results;
-(void)setResults:(SAWebWebSearchResult *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

