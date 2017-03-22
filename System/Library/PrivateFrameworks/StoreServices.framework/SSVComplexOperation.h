/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVOperation.h>

@class SSVFairPlaySAPSession, SSURLBag, NSDictionary;

@interface SSVComplexOperation : SSVOperation {

	SSVFairPlaySAPSession* _sapSession;
	SSURLBag* _urlBag;
	NSDictionary* _urlBagDictionary;

}

@property (copy,readonly) NSDictionary * URLBagDictionary; 
@property (retain) SSVFairPlaySAPSession * SAPSession; 
-(void)configureWithURLBag:(id)arg1 ;
-(SSVFairPlaySAPSession *)SAPSession;
-(id)newLoadURLOperationWithRequest:(id)arg1 ;
-(NSDictionary *)URLBagDictionary;
-(void)configureWithURLBagDictionary:(id)arg1 ;
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
@end
