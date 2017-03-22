/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SAGetRequestOrigin : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * desiredAccuracy; 
@property (nonatomic,copy) NSNumber * maxAge; 
@property (nonatomic,copy) NSNumber * searchTimeout; 
+(id)getRequestOrigin;
+(id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)searchTimeout;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)maxAge;
-(void)setMaxAge:(NSNumber *)arg1 ;
-(void)setSearchTimeout:(NSNumber *)arg1 ;
-(void)setDesiredAccuracy:(NSString *)arg1 ;
-(NSString *)desiredAccuracy;
@end
