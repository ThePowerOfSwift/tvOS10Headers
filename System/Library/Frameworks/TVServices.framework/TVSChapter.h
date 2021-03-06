/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVSTimeRange, TVSImageProxy, NSString, TVSDateRange;

@interface TVSChapter : NSObject {

	TVSTimeRange* _timeRange;
	TVSImageProxy* _imageProxy;
	NSString* _localizedName;
	NSString* _chapterDescription;
	TVSDateRange* _dateRange;

}

@property (nonatomic,copy) NSString * localizedName;                   //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSString * chapterDescription;              //@synthesize chapterDescription=_chapterDescription - In the implementation block
@property (nonatomic,retain) TVSTimeRange * timeRange;                 //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,retain) TVSDateRange * dateRange;                 //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,retain) TVSImageProxy * imageProxy;               //@synthesize imageProxy=_imageProxy - In the implementation block
-(NSString *)localizedName;
-(void)setTimeRange:(TVSTimeRange *)arg1 ;
-(TVSTimeRange *)timeRange;
-(TVSDateRange *)dateRange;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)chapterDescription;
-(void)setChapterDescription:(NSString *)arg1 ;
-(void)setDateRange:(TVSDateRange *)arg1 ;
-(TVSImageProxy *)imageProxy;
-(void)setImageProxy:(TVSImageProxy *)arg1 ;
@end

