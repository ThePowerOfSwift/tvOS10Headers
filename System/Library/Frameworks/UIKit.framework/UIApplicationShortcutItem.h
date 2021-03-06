/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, UIApplicationShortcutIcon, NSData, SBSApplicationShortcutItem, NSDictionary;

@interface UIApplicationShortcutItem : NSObject <NSCopying, NSMutableCopying> {

	NSString* _type;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	UIApplicationShortcutIcon* _icon;
	unsigned long long _activationMode;
	NSData* _userInfoData;

}

@property (nonatomic,copy,readonly) SBSApplicationShortcutItem * sbsShortcutItem; 
@property (nonatomic,readonly) unsigned long long activationMode; 
@property (nonatomic,copy) NSString * type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                                          //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedSubtitle;                                       //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,copy) UIApplicationShortcutIcon * icon;                                   //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long activationMode;                                //@synthesize activationMode=_activationMode - In the implementation block
@property (nonatomic,copy) NSData * userInfoData;                                              //@synthesize userInfoData=_userInfoData - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)_uiActivationModeFromSBSActivationMode:(unsigned long long)arg1 ;
+(unsigned long long)_sbsActivationModeFromUIActivationMode:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)userInfo;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)initWithSBSApplicationShortcutItem:(id)arg1 ;
-(SBSApplicationShortcutItem *)sbsShortcutItem;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)activationMode;
-(void)setActivationMode:(unsigned long long)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setIcon:(UIApplicationShortcutIcon *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(UIApplicationShortcutIcon *)icon;
-(id)initWithType:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 icon:(id)arg4 userInfo:(id)arg5 ;
-(id)_initWithType:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 icon:(id)arg4 userInfoData:(id)arg5 activationMode:(unsigned long long)arg6 ;
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(NSData *)userInfoData;
-(id)initWithType:(id)arg1 localizedTitle:(id)arg2 ;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setLocalizedSubtitle:(NSString *)arg1 ;
-(void)setUserInfoData:(NSData *)arg1 ;
@end

