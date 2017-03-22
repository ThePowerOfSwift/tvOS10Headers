/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPersistentStoreMap, NSManagedObjectID, NSMutableDictionary, NSString;

@interface NSStoreMapNode : NSObject {

	NSPersistentStoreMap* _map;
	NSManagedObjectID* _objectID;
	NSMutableDictionary* _relatedNodes;
	NSString* _entityName;
	unsigned _version;

}
+(void)initialize;
-(const id*)knownKeyValuesPointer;
-(id)_snapshot_;
-(unsigned)_versionNumber;
-(void)_setVersionNumber:(unsigned)arg1 ;
-(void)_setMap:(id)arg1 ;
-(void)setDestinations:(id)arg1 forRelationship:(id)arg2 ;
-(id)destinationsForRelationship:(id)arg1 ;
-(id)_relatedNodes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)key;
-(id)entity;
-(id)configurationName;
-(id)objectID;
-(id)initWithObjectID:(id)arg1 ;
@end
