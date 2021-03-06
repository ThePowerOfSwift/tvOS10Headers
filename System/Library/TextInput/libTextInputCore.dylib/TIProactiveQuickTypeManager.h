/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TIProactiveQuickTypeManager : NSObject
+(id)sharedTIProactiveQuickTypeManager;
+(id)proactiveTriggerForTextContentType:(id)arg1 ;
-(id)init;
-(void)reset;
-(BOOL)isEnabled;
-(id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 withInput:(id)arg4 withRecipient:(id)arg5 withApplication:(id)arg6 withLocale:(id)arg7 withTextContentType:(id)arg8 withCanSendCurrentLocation:(BOOL)arg9 ;
-(id)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 ;
-(BOOL)enumerateContactsWithContactsLimit:(int)arg1 withFoundLimit:(int)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)isAutoPopupEnabled;
-(BOOL)isAutoCompleteEnabled;
@end

