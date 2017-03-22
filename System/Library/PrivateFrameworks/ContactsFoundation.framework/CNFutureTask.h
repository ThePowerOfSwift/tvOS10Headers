/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNFuture.h>
#import <libobjc.A.dylib/CNPromise.h>

@class NSConditionLock, CNFutureResult, CNTask, CNFutureCompletionBlocks, NSString;

@interface CNFutureTask : NSObject <CNFuture, CNPromise> {

	NSConditionLock* _stateLock;
	CNFutureResult* _futureResult;
	CNTask* _task;
	CNFutureCompletionBlocks* _completionBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)_flushCompletionBlocks;
-(BOOL)cancel;
-(void)dealloc;
-(id)init;
-(BOOL)isCancelled;
-(BOOL)run;
-(BOOL)isFinished;
-(id)initWithTask:(id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(BOOL)nts_isFinished;
-(id)futureResult;
-(void)addFailureBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(/*^block*/id)completionHandlerAdapterWithDefaultValue:(id)arg1 ;
-(id)flatMap:(/*^block*/id)arg1 ;
-(/*^block*/id)boolErrorCompletionHandlerAdapter;
-(id)result:(id*)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)finishWithError:(id)arg1 ;
-(void)didCancel;
@end
