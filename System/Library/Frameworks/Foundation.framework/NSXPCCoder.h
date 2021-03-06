/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCoder.h>

@protocol NSObject;
@class NSXPCConnection;

@interface NSXPCCoder : NSCoder {

	id<NSObject> _userInfo;
	id _reserved1;

}

@property (retain) id<NSObject> userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) NSXPCConnection * connection; 
-(BOOL)requiresSecureCoding;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(id)decodeXPCObjectForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id<NSObject>)userInfo;
-(void)setUserInfo:(id<NSObject>)arg1 ;
-(NSXPCConnection *)connection;
@end

