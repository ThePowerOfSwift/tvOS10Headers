/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString, NSMutableSet, NSString, NSArray;

@interface IKXMLErrorHandlerContext : NSObject {

	NSMutableString* _mutableErrorMessages;
	NSMutableSet* _mutableParserErrors;

}

@property (nonatomic,retain) NSMutableString * mutableErrorMessages;              //@synthesize mutableErrorMessages=_mutableErrorMessages - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableParserErrors;                  //@synthesize mutableParserErrors=_mutableParserErrors - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage; 
@property (nonatomic,readonly) NSArray * parserErrors; 
-(id)init;
-(void)clear;
-(NSArray *)parserErrors;
-(NSMutableString *)mutableErrorMessages;
-(NSMutableSet *)mutableParserErrors;
-(void)setMutableErrorMessages:(NSMutableString *)arg1 ;
-(void)setMutableParserErrors:(NSMutableSet *)arg1 ;
-(NSString *)errorMessage;
@end

