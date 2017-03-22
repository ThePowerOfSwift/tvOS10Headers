/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol CoreDAVSubmittable <NSObject>
@property (nonatomic,copy) id completionBlock; 
@property (assign,nonatomic) id<CoreDAVTaskManager> taskManager; 
@property (assign,nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) double timeoutInterval; 
@required
-(id)completionBlock;
-(void)setCompletionBlock:(/*^block*/id)arg1;
-(void)setTimeoutInterval:(double)arg1;
-(NSError *)error;
-(void)submitWithTaskManager:(id)arg1;
-(void)finishEarlyWithError:(id)arg1;
-(double)timeoutInterval;
-(id<CoreDAVAccountInfoProvider>)accountInfoProvider;
-(void)setAccountInfoProvider:(id)arg1;
-(id<CoreDAVTaskManager>)taskManager;
-(void)setTaskManager:(id)arg1;

@end
