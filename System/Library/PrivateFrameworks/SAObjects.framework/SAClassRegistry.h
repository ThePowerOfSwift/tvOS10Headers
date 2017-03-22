/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface SAClassRegistry : NSObject {

	NSMutableDictionary* _classesByAceClassNameByGroupIdentifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (getter=_classesByAceClassNameByGroupIdentifier,nonatomic,readonly) NSMutableDictionary * classesByAceClassNameByGroupIdentifier;              //@synthesize classesByAceClassNameByGroupIdentifier=_classesByAceClassNameByGroupIdentifier - In the implementation block
@property (getter=_queue,nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                                                         //@synthesize queue=_queue - In the implementation block
+(id)sharedClassRegistry;
-(void)dealloc;
-(id)init;
-(id)_queue;
-(Class)classForAceClassWithName:(id)arg1 inGroupWithIdentifier:(id)arg2 ;
-(void)registerClass:(Class)arg1 forAceClassWithName:(id)arg2 inGroupWithIdentifier:(id)arg3 ;
-(id)_classesByAceClassNameByGroupIdentifier;
-(void)_accessMutableStateWithBlock:(/*^block*/id)arg1 ;
@end
