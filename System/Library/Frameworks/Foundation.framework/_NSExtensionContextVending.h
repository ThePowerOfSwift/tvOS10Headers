/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NSExtensionContextVending <NSObject>
@required
-(void)_beginRequestWithExtensionItems:(id)arg1 listenerEndpoint:(id)arg2 withContextUUID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)_hostDidEnterBackgroundForContextUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)_hostWillEnterForegroundForContextUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)_hostWillResignActiveForContextUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)_hostDidBecomeActiveForContextUUID:(id)arg1 completion:(/*^block*/id)arg2;

@end

