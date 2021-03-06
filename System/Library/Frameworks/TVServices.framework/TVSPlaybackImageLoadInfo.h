/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVServices/TVServices-Structs.h>
@class NSDate;

@interface TVSPlaybackImageLoadInfo : NSObject {

	id _identifier;
	double _requestedTime;
	NSDate* _requestedDate;
	/*^block*/id _timeBasedHandler;
	/*^block*/id _dateBasedHandler;
	CGSize _maxSize;
	SCD_Struct_TV13 _requestedCMTime;

}

@property (nonatomic,retain) id identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double requestedTime;                         //@synthesize requestedTime=_requestedTime - In the implementation block
@property (nonatomic,retain) NSDate * requestedDate;                       //@synthesize requestedDate=_requestedDate - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV13 requestedCMTime;              //@synthesize requestedCMTime=_requestedCMTime - In the implementation block
@property (assign,nonatomic) CGSize maxSize;                               //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,copy) id timeBasedHandler;                            //@synthesize timeBasedHandler=_timeBasedHandler - In the implementation block
@property (nonatomic,copy) id dateBasedHandler;                            //@synthesize dateBasedHandler=_dateBasedHandler - In the implementation block
-(id)description;
-(id)identifier;
-(CGSize)maxSize;
-(void)setIdentifier:(id)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(double)requestedTime;
-(id)dateBasedHandler;
-(NSDate *)requestedDate;
-(id)timeBasedHandler;
-(void)callCompletionHandlerWithImage:(id)arg1 actualCMTime:(SCD_Struct_TV13)arg2 actualDate:(id)arg3 ;
-(void)setRequestedTime:(double)arg1 ;
-(void)setRequestedDate:(NSDate *)arg1 ;
-(SCD_Struct_TV13)requestedCMTime;
-(void)setRequestedCMTime:(SCD_Struct_TV13)arg1 ;
-(void)setTimeBasedHandler:(id)arg1 ;
-(void)setDateBasedHandler:(id)arg1 ;
@end

