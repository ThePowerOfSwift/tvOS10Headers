/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PROPlugInDelegate <PROAPIAccessing>
@required
-(id)plugInGroupWithUUID:(CFUUIDRef)arg1;
-(void)plugInCouldNotInitialize:(id)arg1;
-(void)plugIn:(id)arg1 didError:(id)arg2;
-(BOOL)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)arg1;
-(id)apiManagerForPlugInInstances;

@end

