/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCharacteristicRequest.h>

@class NSData, NSUUID;

@interface HMDCharacteristicWriteRequest : HMDCharacteristicRequest {

	id _value;
	NSData* _authorizationData;
	NSUUID* _identifier;

}

@property (nonatomic,readonly) id value;                                //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSData * authorizationData;              //@synthesize authorizationData=_authorizationData - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                     //@synthesize identifier=_identifier - In the implementation block
+(id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 ;
+(id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 ;
-(id)description;
-(NSUUID *)identifier;
-(id)value;
-(NSData *)authorizationData;
-(id)initWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 ;
@end

