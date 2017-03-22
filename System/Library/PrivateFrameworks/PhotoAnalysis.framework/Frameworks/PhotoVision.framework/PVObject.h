/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PVObject : NSObject <NSCopying> {

	long long _modelId;
	NSString* _localIdentifier;

}

@property (nonatomic,readonly) long long modelId;                            //@synthesize modelId=_modelId - In the implementation block
@property (nonatomic,copy,readonly) NSString * localIdentifier;              //@synthesize localIdentifier=_localIdentifier - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg1 ;
-(NSString *)localIdentifier;
-(id)initWithModelId:(long long)arg1 localIdentifier:(id)arg2 ;
-(long long)modelId;
@end
