/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAResultCallback : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long code; 
@property (nonatomic,copy) NSArray * commandReferences; 
@property (nonatomic,copy) NSArray * commands; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resultCallback;
+(id)resultCallbackWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)code;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)commandReferences;
-(void)setCommandReferences:(NSArray *)arg1 ;
-(void)setCode:(long long)arg1 ;
@end
