/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFHTTPRequest.h>

@class NSData, NSDictionary;

@interface HMFMutableHTTPRequest : HMFHTTPRequest

@property (assign,nonatomic) double timeoutInterval; 
@property (nonatomic,copy) NSData * body; 
@property (nonatomic,retain) NSDictionary * headerFields; 
-(void)setBody:(NSData *)arg1 ;
-(id)responseWithStatusCode:(long long)arg1 ;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
-(id)initWithURL:(id)arg1 method:(id)arg2 body:(id)arg3 timeoutInterval:(double)arg4 ;
-(id)initWithInternalRequest:(id)arg1 ;
@end
