/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol INCacheableObject <NSObject>
@property (nonatomic,copy,readonly) NSString * cacheIdentifier; 
@required
+(void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(NSString *)cacheIdentifier;
-(void)generateCachePayloadWithCompletion:(/*^block*/id)arg1;

@end

