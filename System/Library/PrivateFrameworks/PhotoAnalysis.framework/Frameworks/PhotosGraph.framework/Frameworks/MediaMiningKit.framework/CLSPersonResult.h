/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSPerson;

@interface CLSPersonResult : NSObject {

	float _confidence;
	CLSPerson* _person;

}

@property (nonatomic,retain) CLSPerson * person;              //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) float confidence;                //@synthesize confidence=_confidence - In the implementation block
+(id)personResultWithPerson:(id)arg1 andConfidence:(float)arg2 ;
-(id)description;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(void)setPerson:(CLSPerson *)arg1 ;
-(CLSPerson *)person;
-(void)mergeWithResult:(id)arg1 ;
-(BOOL)isSamePersonAsResult:(id)arg1 ;
@end

