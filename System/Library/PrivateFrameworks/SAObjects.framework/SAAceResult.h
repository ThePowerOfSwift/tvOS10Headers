/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAAceResult : SABaseAceObject <SAAceSerializable>

@property (nonatomic,retain) id<SAAceSerializable> result; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceResult;
+(id)aceResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id<SAAceSerializable>)result;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setResult:(id<SAAceSerializable>)arg1 ;
@end
