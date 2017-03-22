/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, CPMLModelEvaluate;

@interface CPMLModel : NSObject {

	NSString* _savedPlistPath;
	NSString* _modelPath;
	NSObject*<OS_dispatch_queue> _dispatch_queue;
	void* _mData;
	unsigned long long _totalBytesIntSection;
	unsigned long long _totalBytesRealSection;
	double* _realBase;
	CPMLModelEvaluate* cpModelEvaluate;

}

@property (retain) CPMLModelEvaluate * cpModelEvaluate; 
+(id)initCPModelPath:(id)arg1 withConfiguration:(id)arg2 ;
-(BOOL)reset;
-(void)setCpModelEvaluate:(CPMLModelEvaluate *)arg1 ;
-(id)initWithModelPath:(id)arg1 withPropertyListPath:(id)arg2 ;
-(void)initializeModel:(id)arg1 withConfiguration:(id)arg2 ;
-(id)getPropertyList;
-(id)initWithModelPath:(id)arg1 withConfiguration:(id)arg2 ;
-(id)evalString:(id)arg1 ;
-(id)evalNSObjectV:(id)arg1 ;
-(id)evalArray:(id)arg1 ;
-(id)evalDict:(id)arg1 ;
-(void)boundResult:(id)arg1 ;
-(void)setCPMLAlgorithm:(id)arg1 ;
-(void)setCPMLAlgorithmEngine:(id)arg1 ;
-(BOOL)updateModelWithDB:(id)arg1 ;
-(BOOL)updateModelWithCPDB:(id)arg1 ;
-(CPMLModelEvaluate *)cpModelEvaluate;
-(void)setDispatchQueue:(id)arg1 ;
@end
