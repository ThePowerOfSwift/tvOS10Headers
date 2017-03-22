/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSString;

@interface SSAuthorizationRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountIdentifier;
	NSString* _keybagPath;
	id _token;
	NSString* _reason;
	BOOL _shouldAddKeysToKeyBag;
	BOOL _shouldPromptForCredentials;
	NSString* _clientIdentifierHeader;
	NSNumber* _familyAccountIdentifier;
	NSString* _userAgent;

}

@property (assign,nonatomic) id<SSAuthorizationRequestDelegate> delegate; 
@property (copy) NSNumber * accountIdentifier;                                         //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (readonly) id authorizationToken; 
@property (copy) NSString * clientIdentifierHeader;                                    //@synthesize clientIdentifierHeader=_clientIdentifierHeader - In the implementation block
@property (copy) NSNumber * familyAccountIdentifier;                                   //@synthesize familyAccountIdentifier=_familyAccountIdentifier - In the implementation block
@property (copy) NSString * keybagPath;                                                //@synthesize keybagPath=_keybagPath - In the implementation block
@property (copy) NSString * reason;                                                    //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL shouldAddKeysToKeyBag;                               //@synthesize shouldAddKeysToKeyBag=_shouldAddKeysToKeyBag - In the implementation block
@property (assign,nonatomic) BOOL shouldPromptForCredentials;                          //@synthesize shouldPromptForCredentials=_shouldPromptForCredentials - In the implementation block
@property (copy) NSString * userAgent;                                                 //@synthesize userAgent=_userAgent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(void)startWithAuthorizationResponseBlock:(/*^block*/id)arg1 ;
-(id)authorizationToken;
-(NSNumber *)familyAccountIdentifier;
-(void)setFamilyAccountIdentifier:(NSNumber *)arg1 ;
-(NSString *)keybagPath;
-(BOOL)shouldAddKeysToKeyBag;
-(void)setShouldAddKeysToKeyBag:(BOOL)arg1 ;
-(BOOL)shouldPromptForCredentials;
-(void)setShouldPromptForCredentials:(BOOL)arg1 ;
-(id)init;
-(id)_init;
-(BOOL)start;
-(NSString *)reason;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithAuthorizationToken:(id)arg1 accountIdentifier:(id)arg2 ;
-(void)setKeybagPath:(NSString *)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end
