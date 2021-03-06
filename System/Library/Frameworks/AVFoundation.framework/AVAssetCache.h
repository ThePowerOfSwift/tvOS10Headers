/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVAssetCache : NSObject

@property (getter=isPlayableOffline,nonatomic,readonly) BOOL playableOffline; 
+(id)assetCacheWithURL:(id)arg1 ;
-(id)_init;
-(id)allKeys;
-(long long)maxSize;
-(id)URL;
-(id)initWithURL:(id)arg1 ;
-(id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1 ;
-(BOOL)isPlayableOffline;
-(long long)maxEntrySize;
-(id)lastModifiedDateOfEntryForKey:(id)arg1 ;
-(long long)currentSize;
-(void)removeEntryForKey:(id)arg1 ;
-(long long)sizeOfEntryForKey:(id)arg1 ;
@end

