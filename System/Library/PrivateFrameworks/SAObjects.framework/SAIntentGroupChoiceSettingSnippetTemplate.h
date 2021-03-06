/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAIntentGroupSettingSnippetTemplate.h>

@interface SAIntentGroupChoiceSettingSnippetTemplate : SAIntentGroupSettingSnippetTemplate

@property (assign,nonatomic) BOOL selected; 
@property (nonatomic,retain) id<SAServerBoundCommand> updateSlotCommand; 
+(id)choiceSettingSnippetTemplate;
+(id)choiceSettingSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id<SAServerBoundCommand>)updateSlotCommand;
-(void)setUpdateSlotCommand:(id<SAServerBoundCommand>)arg1 ;
@end

