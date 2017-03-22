/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVSSecureKeyLoader.h>

@class _TVMediaItem;

@interface _TVSecureKeyLoader : TVSSecureKeyLoader {

	_TVMediaItem* _mediaItem;

}

@property (nonatomic,__weak,readonly) _TVMediaItem * mediaItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
-(_TVMediaItem *)mediaItem;
-(id)initWithMediaItem:(id)arg1 ;
-(void)startLoadingCertificateDataForRequest:(id)arg1 ;
-(void)startLoadingContentIdentifierDataForRequest:(id)arg1 ;
-(void)startLoadingKeyResponseDataForRequest:(id)arg1 ;
@end
