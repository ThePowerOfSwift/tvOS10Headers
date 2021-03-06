/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKDataBindingValue.h>

@class NSString, NSArray;

@interface IKDataBindingPropertyPath : IKDataBindingValue {

	NSString* _string;
	NSArray* _accessorSequence;

}

@property (nonatomic,copy,readonly) NSString * string;                       //@synthesize string=_string - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accessorSequence;              //@synthesize accessorSequence=_accessorSequence - In the implementation block
+(id)pathStringForAccessorSequence:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)string;
-(id)initWithString:(id)arg1 ;
-(id)propertyPathByCombiningAccesserSequence:(id)arg1 ;
-(NSArray *)accessorSequence;
-(id)_initWithAccessorSequence:(id)arg1 ;
@end

