/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class NSLock;

@interface SSVMediaSocialAdminStatusOperation : SSVComplexOperation {

	NSLock* _lock;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
-(id)outputBlock;
-(id)init;
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
@end

