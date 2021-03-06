/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBSMediaRemoteServiceInterface <NSObject>
@property (nonatomic,readonly) BOOL volumeControlAvailable; 
@required
-(BOOL)volumeControlAvailable;
-(void)startSiriWithContext:(id)arg1;
-(void)stopSiriWithContext:(id)arg1;
-(void)activateSiriWithContext:(id)arg1;
-(id)showPinDialogWithOptions:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dismissPinDialogWithToken:(id)arg1;
-(void)noteUserPresenceDetected;

@end

