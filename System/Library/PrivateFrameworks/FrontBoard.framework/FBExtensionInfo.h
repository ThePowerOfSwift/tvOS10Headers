/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBBundleInfo.h>

@class NSString;

@interface FBExtensionInfo : FBBundleInfo {

	NSString* _typeIdentifier;
	NSString* _extensionIdentifier;

}

@property (nonatomic,copy,readonly) NSString * typeIdentifier;                   //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionIdentifier;              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
-(NSString *)extensionIdentifier;
-(void)dealloc;
-(NSString *)typeIdentifier;
-(id)_initWithPath:(id)arg1 ;
-(id)_initWithBundleIdentifier:(id)arg1 ;
-(id)_initWithBundleURL:(id)arg1 proxy:(id)arg2 ;
@end
