/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <libobjc.A.dylib/TVLJSObject.h>

@class NSMutableURLRequest;

@interface TVLJSURLRequest : NSObject <TVLJSObject> {

	OpaqueJSValueRef _jsObjectRef;
	NSMutableURLRequest* _urlRequest;

}

@property (assign,nonatomic) OpaqueJSValueRef jsObjectRef;                  //@synthesize jsObjectRef=_jsObjectRef - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * urlRequest;              //@synthesize urlRequest=_urlRequest - In the implementation block
-(void)dealloc;
-(NSMutableURLRequest *)urlRequest;
-(void)setUrlRequest:(NSMutableURLRequest *)arg1 ;
-(OpaqueJSValueRef)jsObjectRef;
-(void)_jsFinalize;
-(void)setJsObjectRef:(OpaqueJSValueRef)arg1 ;
-(id)initWithContext:(OpaqueJSContextRef)arg1 urlRequest:(id)arg2 ;
@end
