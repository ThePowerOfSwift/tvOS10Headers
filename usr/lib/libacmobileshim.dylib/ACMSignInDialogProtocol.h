/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ACMSignInDialogProtocol <NSObject>
@property (assign) id<ACMSignInDialogDelegate> delegate; 
@property (nonatomic,retain) NSString * requestedUserName; 
@property (readonly) NSString * userNameString; 
@property (assign) NSString * passwordString; 
@required
-(void)cancel;
-(void)setDelegate:(id)arg1;
-(id<ACMSignInDialogDelegate>)delegate;
-(NSString *)requestedUserName;
-(void)disableControls:(BOOL)arg1;
-(NSString *)passwordString;
-(void)setPasswordString:(id)arg1;
-(void)setRequestedUserName:(id)arg1;
-(void)showWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)hideWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(NSString *)userNameString;

@end

