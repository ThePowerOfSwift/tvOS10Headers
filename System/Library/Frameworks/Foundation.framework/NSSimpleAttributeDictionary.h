/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@interface NSSimpleAttributeDictionary : NSDictionary {

	unsigned numElements;
	unsigned refCount;
	NSSimpleAttributeDictionaryElement elements[1];

}
+(id)newWithDictionary:(id)arg1 ;
+(id)emptyAttributeDictionary;
-(id)newWithKey:(id)arg1 object:(id)arg2 ;
-(unsigned long long)slotForKey:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end
