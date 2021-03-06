/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLPhotoEffect : NSObject {

	NSString* _filterIdentifier;
	NSString* _displayName;
	NSString* _CIFilterName;

}

@property (nonatomic,copy,readonly) NSString * filterIdentifier;              //@synthesize filterIdentifier=_filterIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * CIFilterName;                  //@synthesize CIFilterName=_CIFilterName - In the implementation block
@property (nonatomic,readonly) long long latestVersion; 
+(id)effectWithCIFilterName:(id)arg1 ;
+(id)effectWithIdentifier:(id)arg1 ;
+(id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3 ;
+(BOOL)isEffectNoneForIdentifier:(id)arg1 ;
+(id)allEffects;
+(unsigned long long)indexOfEffectWithIdentifier:(id)arg1 ;
+(BOOL)isEffectWithIdentifier:(id)arg1 equalToEffectWithIdentifier:(id)arg2 ;
-(id)description;
-(NSString *)displayName;
-(NSString *)filterIdentifier;
-(long long)latestVersion;
-(id)newEffectFilter;
-(NSString *)CIFilterName;
@end

