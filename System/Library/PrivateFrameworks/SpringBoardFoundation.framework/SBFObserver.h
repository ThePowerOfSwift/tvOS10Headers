/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBFObserver : NSObject
+(void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3 ;
+(id)observerWithResultBlock:(/*^block*/id)arg1 ;
+(void)sendObserver:(id)arg1 resultsOfBlock:(/*^block*/id)arg2 ;
+(id)observerWithResultBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
@end

