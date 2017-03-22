/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreTelephony/CoreTelephony-Structs.h>
@interface CTCellularData : NSObject {

	cellular_usage_policy_client_sRef _cuPolicyClient;
	queue* _cuPolicyClientQueue;
	unsigned long long _restrictedState;
	/*^block*/id _cellularDataRestrictionDidUpdateNotifier;

}

@property (copy) id cellularDataRestrictionDidUpdateNotifier;                   //@synthesize cellularDataRestrictionDidUpdateNotifier=_cellularDataRestrictionDidUpdateNotifier - In the implementation block
@property (nonatomic,readonly) unsigned long long restrictedState;              //@synthesize restrictedState=_restrictedState - In the implementation block
-(void)setCellularDataRestrictionStateFromPolicies:(void*)arg1 ;
-(id)cellularDataRestrictionDidUpdateNotifier;
-(unsigned long long)restrictedState;
-(void)setCellularDataRestrictionDidUpdateNotifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
