/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WLKMovieClipAsset : NSObject {

	unsigned long long _duration;
	NSString* _flavor;
	NSString* _url;

}

@property (nonatomic,readonly) unsigned long long duration;                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSString * durationString; 
@property (nonatomic,copy,readonly) NSString * flavor;                      //@synthesize flavor=_flavor - In the implementation block
@property (nonatomic,copy,readonly) NSString * url;                         //@synthesize url=_url - In the implementation block
+(id)movieClipAssetsWithArray:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)duration;
-(id)_init;
-(NSString *)url;
-(NSString *)flavor;
-(NSString *)durationString;
@end

