/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol OS_dispatch_queue;
@class HMThreadSafeMutableArrayCollection, NSUUID, NSString, HMHomeAccessControl, HMHome, NSObject, HMDelegateCaller;

@interface HMUser : NSObject <NSSecureCoding, HMObjectMerge> {

	HMThreadSafeMutableArrayCollection* _pendingAccessoryInvitations;
	BOOL _currentUser;
	BOOL _administrator;
	NSUUID* _uniqueIdentifier;
	NSString* _name;
	HMHomeAccessControl* _homeAccessControl;
	NSString* _userID;
	HMHome* _home;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSUUID* _uuid;
	HMDelegateCaller* _delegateCaller;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * userID;                                         //@synthesize userID=_userID - In the implementation block
@property (nonatomic,retain) HMHomeAccessControl * homeAccessControl;                 //@synthesize homeAccessControl=_homeAccessControl - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                    //@synthesize home=_home - In the implementation block
@property (assign,getter=isCurrentUser,nonatomic) BOOL currentUser;                   //@synthesize currentUser=_currentUser - In the implementation block
@property (assign,nonatomic) BOOL administrator;                                      //@synthesize administrator=_administrator - In the implementation block
@property (nonatomic,retain) HMDelegateCaller * delegateCaller;                       //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                        //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSUUID *)uuid;
-(NSUUID *)uniqueIdentifier;
-(void)setCurrentUser:(BOOL)arg1 ;
-(HMDelegateCaller *)delegateCaller;
-(void)setDelegateCaller:(HMDelegateCaller *)arg1 ;
-(void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 ;
-(void)setAdministrator:(BOOL)arg1 ;
-(void)_unconfigure;
-(id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 isAdministrator:(BOOL)arg5 ;
-(BOOL)administrator;
-(BOOL)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2 ;
-(BOOL)mergePendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1 operations:(id)arg2 ;
-(id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 ;
-(void)updateHomeAccessControl:(BOOL)arg1 remoteAccess:(BOOL)arg2 ;
-(void)setPendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1 ;
-(HMHomeAccessControl *)homeAccessControl;
-(id)_filterAccessoryInvitationsFromOutgoingInvitation:(id)arg1 ;
-(id)pendingAccessoryInvitations;
-(void)setHomeAccessControl:(HMHomeAccessControl *)arg1 ;
-(NSString *)userID;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(BOOL)isCurrentUser;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUserID:(NSString *)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end

