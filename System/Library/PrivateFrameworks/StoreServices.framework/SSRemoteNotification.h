/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSDictionary, NSString;

@interface SSRemoteNotification : NSObject <SSXPCCoding> {

	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) NSDictionary * notificationUserInfo; 
@property (nonatomic,readonly) long long actionType; 
@property (nonatomic,readonly) NSString * alertBodyString; 
@property (nonatomic,readonly) NSString * alertCancelString; 
@property (nonatomic,readonly) NSString * alertOKString; 
@property (nonatomic,readonly) NSString * alertTitleString; 
@property (nonatomic,readonly) id badgeValue; 
@property (nonatomic,readonly) NSString * soundFileName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNotificationUserInfo:(id)arg1 ;
-(id)_valueForAlertKey:(id)arg1 ;
-(NSString *)alertBodyString;
-(NSString *)alertCancelString;
-(NSString *)alertOKString;
-(NSString *)alertTitleString;
-(NSString *)soundFileName;
-(NSDictionary *)notificationUserInfo;
-(id)valueForKey:(id)arg1 ;
-(void)dealloc;
-(id)badgeValue;
-(long long)actionType;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
@end
