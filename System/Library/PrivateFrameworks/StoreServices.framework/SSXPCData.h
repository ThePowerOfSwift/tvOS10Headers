/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSData.h>

@protocol OS_xpc_object;
@class NSObject;

@interface SSXPCData : NSData {

	NSObject*<OS_xpc_object> _xpcData;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcData;              //@synthesize xpcData=_xpcData - In the implementation block
-(id)initWithXPCData:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcData;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

