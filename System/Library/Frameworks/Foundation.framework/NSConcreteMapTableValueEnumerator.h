/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSConcreteMapTable;

@interface NSConcreteMapTableValueEnumerator : NSEnumerator {

	NSConcreteMapTable* mapTable;
	unsigned long long counter;

}
+(id)enumeratorWithMapTable:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
@end
