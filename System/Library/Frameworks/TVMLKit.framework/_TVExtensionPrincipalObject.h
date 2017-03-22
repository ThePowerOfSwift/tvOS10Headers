/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVTopShelfProvider.h>

@class NSArray;

@interface _TVExtensionPrincipalObject : NSObject <TVTopShelfProvider>

@property (readonly) long long topShelfStyle; 
@property (readonly) NSArray * topShelfItems; 
+(void)initialize;
+(void)augmentAppContextWithSystemExtensions:(id)arg1 jsContext:(id)arg2 ;
-(id)init;
-(NSArray *)topShelfItems;
-(long long)topShelfStyle;
-(void)provideTopShelfItems:(/*^block*/id)arg1 ;
@end
