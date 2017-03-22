/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, CNUIAccountsFacadeRequestRunner;

@interface CNUIAccountsFacade : NSObject {

	ACAccountStore* _accountStore;
	CNUIAccountsFacadeRequestRunner* _requestRunner;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;                                //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) CNUIAccountsFacadeRequestRunner * requestRunner;              //@synthesize requestRunner=_requestRunner - In the implementation block
-(id)init;
-(id)initWithAccountStore:(id)arg1 requestRunner:(id)arg2 ;
-(CNUIAccountsFacadeRequestRunner *)requestRunner;
-(void)fetchiCloudFamilyMembersWithCompletionHandler:(/*^block*/id)arg1 ;
-(ACAccountStore *)accountStore;
@end
