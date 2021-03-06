/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolCSSNamedFlow : RWIProtocolJSONObject

@property (assign,nonatomic) int documentNodeId; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL overset; 
@property (nonatomic,copy) NSArray * content; 
@property (nonatomic,copy) NSArray * regions; 
-(BOOL)overset;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)content;
-(NSArray *)regions;
-(void)setContent:(NSArray *)arg1 ;
-(void)setRegions:(NSArray *)arg1 ;
-(void)setDocumentNodeId:(int)arg1 ;
-(void)setOverset:(BOOL)arg1 ;
-(id)initWithDocumentNodeId:(int)arg1 name:(id)arg2 overset:(BOOL)arg3 content:(id)arg4 regions:(id)arg5 ;
-(int)documentNodeId;
@end

