/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class SSAccount;

@interface AAFamilyEligibilityRequest : AAFamilyRequest {

	SSAccount* _iTunesAccount;

}

@property (nonatomic,retain) SSAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
+(Class)responseClass;
-(void)setITunesAccount:(SSAccount *)arg1 ;
-(SSAccount *)iTunesAccount;
-(id)urlRequest;
-(id)urlString;
@end

