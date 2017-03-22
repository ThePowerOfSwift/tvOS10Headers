/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface MPWeighterConstraint : NSObject {

	long long numOfImages;
	NSDictionary* nextConstraints;
	NSString* presetID;
	long long movieCount;
	BOOL moviesOnly;
	BOOL ignoreMovies;
	long long wideLandscape;
	long long square;
	long long landscape;
	long long portrait;
	long long hBreaks;
	long long vBreaks;
	long long supportsHBreaks;
	long long supportsVBreaks;
	long long supportsAllBreaks;
	long long allBreaks;
	BOOL hasBreak;
	NSArray* maxAspectRatios;
	NSArray* minAspectRatios;
	NSArray* tags;
	BOOL tagsOnSourceOnly;
	BOOL shelf;

}

@property (nonatomic,retain) NSDictionary * nextConstraints; 
@property (nonatomic,retain) NSString * presetID; 
@property (nonatomic,retain) NSArray * maxAspectRatios; 
@property (nonatomic,retain) NSArray * minAspectRatios; 
@property (nonatomic,retain) NSArray * tags; 
-(NSArray *)tags;
-(void)dealloc;
-(id)init;
-(NSString *)presetID;
-(void)setNextConstraints:(NSDictionary *)arg1 ;
-(void)setMaxAspectRatios:(NSArray *)arg1 ;
-(void)setMinAspectRatios:(NSArray *)arg1 ;
-(void)setTags:(NSArray *)arg1 ;
-(NSDictionary *)nextConstraints;
-(NSArray *)maxAspectRatios;
-(NSArray *)minAspectRatios;
-(void)setPresetID:(NSString *)arg1 ;
@end
