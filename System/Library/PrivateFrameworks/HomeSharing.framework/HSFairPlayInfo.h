/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <HomeSharing/HomeSharing-Structs.h>
@class NSObject, NSString;

@interface HSFairPlayInfo : NSObject {

	NSObject*<OS_dispatch_queue> _sapQueue;
	void* _hwInfo;
	void* _session;

}

@property (nonatomic,readonly) NSString * deviceGUID; 
-(void)dealloc;
-(id)init;
-(BOOL)_getHardwareInfo:(FairPlayHWInfo_*)arg1 ;
-(void)endSecuritySession;
-(id)_hexStringForData:(id)arg1 ;
-(id)beginNegotiationWithSAPVersion:(unsigned)arg1 ;
-(id)continueNegotationWithSAPVersion:(unsigned)arg1 data:(id)arg2 isComplete:(BOOL*)arg3 ;
-(NSString *)deviceGUID;
-(id)securityInfoForURL:(id)arg1 ;
@end

