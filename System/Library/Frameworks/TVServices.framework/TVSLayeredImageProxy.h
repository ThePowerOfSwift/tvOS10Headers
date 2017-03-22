/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _TVSURLSessionDownloadTaskWrapper, NSURL;

@interface TVSLayeredImageProxy : NSObject {

	_TVSURLSessionDownloadTaskWrapper* _downloadTaskWrapper;
	NSURL* _url;
	long long _groupType;

}

@property (nonatomic,copy,readonly) NSURL * url;                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) long long groupType;              //@synthesize groupType=_groupType - In the implementation block
+(id)_loadingQueue;
-(void)cancel;
-(void)dealloc;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isLoading;
-(long long)groupType;
-(id)_assetKey;
-(id)_assetPathWithAssetKey:(id)arg1 ;
-(BOOL)isImageAvailable;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 groupType:(long long)arg2 ;
@end
