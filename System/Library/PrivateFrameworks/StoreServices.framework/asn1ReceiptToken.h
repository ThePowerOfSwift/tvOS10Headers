/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class asn1Token, NSString;

@interface asn1ReceiptToken : NSObject {

	unsigned long long mType;
	unsigned long long mTypeVersion;
	asn1Token* mContentToken;

}

@property (readonly) unsigned long long type; 
@property (readonly) unsigned long long typeVersion; 
@property (readonly) asn1Token * contentToken; 
@property (readonly) NSString * stringValue; 
@property (readonly) unsigned long long integerValue; 
+(id)readFromBuffer:(const char*)arg1 ;
-(asn1Token *)contentToken;
-(id)_initWithType:(unsigned long long)arg1 typeVersion:(unsigned long long)arg2 contentToken:(id)arg3 ;
-(unsigned long long)typeVersion;
-(void)dealloc;
-(id)description;
-(unsigned long long)integerValue;
-(unsigned long long)type;
-(NSString *)stringValue;
@end

