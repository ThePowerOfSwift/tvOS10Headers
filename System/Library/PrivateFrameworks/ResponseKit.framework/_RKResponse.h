/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _RKResponse : NSObject {

	NSString* _speechAct;
	NSString* _headword;
	NSString* _text;

}

@property (readonly) NSString * speechAct;                 //@synthesize speechAct=_speechAct - In the implementation block
@property (readonly) NSString * headword;                  //@synthesize headword=_headword - In the implementation block
@property (readonly) NSString * text;                      //@synthesize text=_text - In the implementation block
@property (readonly) unsigned long long type; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(NSString *)text;
-(NSString *)speechAct;
-(id)initWithSpeechAct:(id)arg1 headword:(id)arg2 text:(id)arg3 ;
-(NSString *)headword;
@end

