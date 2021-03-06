/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL, NSError;

@interface CAMLParser : NSObject {

	CAMLParserDataRef _data;

}

@property (retain) NSURL * baseURL; 
@property (__weak) id<CAMLParserDelegate> delegate; 
@property (readonly) NSError * error; 
@property (readonly) id result; 
+(id)parseContentsOfURL:(id)arg1 ;
+(id)parser;
-(BOOL)parseData:(id)arg1 ;
-(BOOL)parseContentsOfURL:(id)arg1 ;
-(BOOL)parseBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)parseString:(id)arg1 ;
-(id)objectById:(id)arg1 ;
-(id)elementValue;
-(void)setElementValue:(id)arg1 ;
-(id)attributeForKey:(id)arg1 remove:(BOOL)arg2 ;
-(id)willLoadResourceFromURL:(id)arg1 ;
-(void)didLoadResource:(id)arg1 fromURL:(id)arg2 ;
-(id)didFailToLoadResourceFromURL:(id)arg1 ;
-(void)parserError:(id)arg1 ;
-(void)parserWarning:(id)arg1 ;
-(void)setDelegate:(id<CAMLParserDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CAMLParserDelegate>)delegate;
-(id)result;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSError *)error;
@end

