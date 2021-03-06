/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSContainerPredicate.h>

@class NSString;

@interface CNiOSABContainersForAccountPredicate : CNPredicate <CNiOSContainerPredicate> {

	BOOL _includesDisabledContainers;
	NSString* _accountIdentifier;

}

@property (nonatomic,copy,readonly) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL includesDisabledContainers;                //@synthesize includesDisabledContainers=_includesDisabledContainers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(CFArrayRef)cn_copyContainersInAddressBook:(void*)arg1 error:(_CFError*)arg2 ;
-(BOOL)includesDisabledContainers;
-(id)initWithAccountIdentifier:(id)arg1 includingDisabledContainers:(BOOL)arg2 ;
-(NSString *)accountIdentifier;
-(id)initWithPredicate:(id)arg1 ;
@end

