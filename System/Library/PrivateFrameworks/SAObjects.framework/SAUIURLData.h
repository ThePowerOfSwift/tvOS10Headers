/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSURL, NSString;

@interface SAUIURLData : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * data; 
@property (nonatomic,copy) NSURL * uri; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)uRLData;
+(id)uRLDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSURL *)uri;
-(void)setUri:(NSURL *)arg1 ;
@end

