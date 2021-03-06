/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVPlaybackProgress.h>

@class NSDate, TVSDateRange, TVPlaybackDateController;

@interface TVDateBasedPlaybackProgress : TVPlaybackProgress {

	NSDate* _playbackDate;
	TVSDateRange* _seekableDateRange;
	double _roundedDuration;
	TVPlaybackDateController* _firstDateController;
	TVPlaybackDateController* _currentDateController;
	TVPlaybackDateController* _lastDateController;

}

@property (nonatomic,retain) TVPlaybackDateController * firstDateController;                //@synthesize firstDateController=_firstDateController - In the implementation block
@property (nonatomic,retain) TVPlaybackDateController * currentDateController;              //@synthesize currentDateController=_currentDateController - In the implementation block
@property (nonatomic,retain) TVPlaybackDateController * lastDateController;                 //@synthesize lastDateController=_lastDateController - In the implementation block
@property (assign,nonatomic) double roundedDuration;                                        //@synthesize roundedDuration=_roundedDuration - In the implementation block
@property (nonatomic,copy) NSDate * playbackDate;                                           //@synthesize playbackDate=_playbackDate - In the implementation block
@property (nonatomic,retain) TVSDateRange * seekableDateRange;                              //@synthesize seekableDateRange=_seekableDateRange - In the implementation block
@property (nonatomic,copy,readonly) NSDate * roundedStartDate; 
@property (nonatomic,copy,readonly) NSDate * roundedEndDate; 
-(void)dealloc;
-(id)init;
-(NSDate *)playbackDate;
-(TVSDateRange *)seekableDateRange;
-(void)setPlaybackDate:(NSDate *)arg1 ;
-(TVPlaybackDateController *)firstDateController;
-(TVPlaybackDateController *)lastDateController;
-(NSDate *)roundedStartDate;
-(NSDate *)roundedEndDate;
-(void)setSeekableDateRange:(TVSDateRange *)arg1 ;
-(double)roundedDuration;
-(void)setRoundedDuration:(double)arg1 ;
-(void)setFirstDateController:(TVPlaybackDateController *)arg1 ;
-(TVPlaybackDateController *)currentDateController;
-(void)setCurrentDateController:(TVPlaybackDateController *)arg1 ;
-(void)setLastDateController:(TVPlaybackDateController *)arg1 ;
@end

