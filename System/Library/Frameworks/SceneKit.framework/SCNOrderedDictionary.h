/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {

	NSMutableArray* _keys;
	NSMutableDictionary* _keyValues;

}
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)copy;
-(id)objectForKey:(id)arg1 ;
-(id)dictionary;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)allValues;
-(id)keys;
-(void)_setupFrom:(id)arg1 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
@end

