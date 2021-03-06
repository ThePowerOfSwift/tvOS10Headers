/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSDictionary, NSSQLModel;

@interface NSSQLObjectIDRequestContext : NSSQLStoreRequestContext {

	NSDictionary* _entitiesAndCounts;
	NSSQLModel* _model;

}

@property (nonatomic,readonly) NSDictionary * entitiesAndCounts;              //@synthesize entitiesAndCounts=_entitiesAndCounts - In the implementation block
@property (nonatomic,readonly) NSSQLModel * model;                            //@synthesize model=_model - In the implementation block
-(BOOL)isWritingRequest;
-(void)executeRequestUsingConnection:(id)arg1 ;
-(id)initForEntitiesAndCounts:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(NSDictionary *)entitiesAndCounts;
-(void)dealloc;
-(NSSQLModel *)model;
@end

