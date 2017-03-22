/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolRuntimeStructureDescription : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * fields; 
@property (nonatomic,copy) NSArray * optionalFields; 
@property (nonatomic,copy) NSString * constructorName; 
@property (nonatomic,retain) RWIProtocolRuntimeStructureDescription * prototypeStructure; 
@property (assign,nonatomic) BOOL isImprecise; 
-(BOOL)isImprecise;
-(void)setOptionalFields:(NSArray *)arg1 ;
-(NSArray *)optionalFields;
-(void)setConstructorName:(NSString *)arg1 ;
-(NSString *)constructorName;
-(void)setPrototypeStructure:(RWIProtocolRuntimeStructureDescription *)arg1 ;
-(RWIProtocolRuntimeStructureDescription *)prototypeStructure;
-(void)setIsImprecise:(BOOL)arg1 ;
-(NSArray *)fields;
-(void)setFields:(NSArray *)arg1 ;
@end
