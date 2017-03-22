/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray;

@interface CKObjCClass : NSObject {

	Class _handle;
	NSString* _name;
	NSDictionary* _propertiesByName;
	NSArray* _sortedProperties;

}

@property (nonatomic,readonly) NSDictionary * propertiesByName;              //@synthesize propertiesByName=_propertiesByName - In the implementation block
@property (nonatomic,readonly) NSArray * sortedProperties;                   //@synthesize sortedProperties=_sortedProperties - In the implementation block
@property (nonatomic,readonly) Class handle;                                 //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
+(id)classForHandle:(Class)arg1 ;
+(id)classForObject:(id)arg1 ;
-(NSString *)name;
-(Class)handle;
-(id)propertyForName:(id)arg1 ;
-(id)initWithHandle:(Class)arg1 ;
-(NSArray *)sortedProperties;
-(id)allProperties;
-(NSDictionary *)propertiesByName;
@end
