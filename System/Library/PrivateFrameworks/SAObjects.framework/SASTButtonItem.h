/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class SAUIDecoratedText, SAUILocalImageResource, NSString;

@interface SASTButtonItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (assign,nonatomic) BOOL centered; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedLabel; 
@property (nonatomic,retain) SAUILocalImageResource * localImageResource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonItem;
+(id)buttonItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id<SASTTemplateAction>)action;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUILocalImageResource *)localImageResource;
-(void)setLocalImageResource:(SAUILocalImageResource *)arg1 ;
-(BOOL)centered;
-(void)setCentered:(BOOL)arg1 ;
-(SAUIDecoratedText *)decoratedLabel;
-(void)setDecoratedLabel:(SAUIDecoratedText *)arg1 ;
@end
