/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NSString, NSUUID, NSArray;

@interface NEPolicyResult : NSObject <NEPrettyDescription> {

	unsigned _skipOrder;
	unsigned _controlUnit;
	unsigned _serviceData;
	long long _resultType;
	long long _secondaryResultType;
	NSString* _interfaceName;
	NSUUID* _agentUUID;
	NSUUID* _serviceUUID;
	NSArray* _routeRules;

}

@property (assign) long long resultType;                       //@synthesize resultType=_resultType - In the implementation block
@property (assign) long long secondaryResultType;              //@synthesize secondaryResultType=_secondaryResultType - In the implementation block
@property (assign) unsigned skipOrder;                         //@synthesize skipOrder=_skipOrder - In the implementation block
@property (assign) unsigned controlUnit;                       //@synthesize controlUnit=_controlUnit - In the implementation block
@property (copy) NSString * interfaceName;                     //@synthesize interfaceName=_interfaceName - In the implementation block
@property (copy) NSUUID * agentUUID;                           //@synthesize agentUUID=_agentUUID - In the implementation block
@property (copy) NSUUID * serviceUUID;                         //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (assign) unsigned serviceData;                       //@synthesize serviceData=_serviceData - In the implementation block
@property (copy) NSArray * routeRules;                         //@synthesize routeRules=_routeRules - In the implementation block
+(id)pass;
+(id)drop;
+(id)skipWithOrder:(unsigned)arg1 ;
+(id)tunnelIPToInterfaceName:(id)arg1 secondaryResultType:(long long)arg2 ;
+(id)scopeSocketToInterfaceName:(id)arg1 ;
+(id)divertSocketToControlUnit:(unsigned)arg1 ;
+(id)filterWithControlUnit:(unsigned)arg1 ;
+(id)triggerScopedService:(id)arg1 data:(unsigned)arg2 ;
+(id)routeRules:(id)arg1 ;
+(id)netAgentUUID:(id)arg1 ;
-(id)init;
-(id)description;
-(BOOL)validate;
-(long long)resultType;
-(void)setResultType:(long long)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(void)setServiceUUID:(NSUUID *)arg1 ;
-(NSUUID *)serviceUUID;
-(NSUUID *)agentUUID;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(unsigned)controlUnit;
-(id)initInternal;
-(BOOL)addTLVsToMessage:(id)arg1 ;
-(void)setSkipOrder:(unsigned)arg1 ;
-(void)setControlUnit:(unsigned)arg1 ;
-(void)setSecondaryResultType:(long long)arg1 ;
-(void)setRouteRules:(NSArray *)arg1 ;
-(void)setServiceData:(unsigned)arg1 ;
-(id)resultTypeString;
-(id)secondaryResultTypeString;
-(unsigned char)resultTypeValue;
-(unsigned char)secondaryResultTypeValue;
-(long long)secondaryResultType;
-(unsigned)skipOrder;
-(unsigned)serviceData;
-(NSArray *)routeRules;
@end

