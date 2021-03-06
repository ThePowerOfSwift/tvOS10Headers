/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetsGroupPrivate;

@interface ALAssetsGroup : NSObject {

	id _internal;

}

@property (nonatomic,retain) ALAssetsGroupPrivate * internal;                //@synthesize internal=_internal - In the implementation block
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(BOOL)isEditable;
-(id)_uuid;
-(id)valueForProperty:(id)arg1 ;
-(CGImageRef)posterImage;
-(long long)numberOfAssets;
-(BOOL)addAsset:(id)arg1 ;
-(void)setInternal:(ALAssetsGroupPrivate *)arg1 ;
-(id)_typeAsString;
-(void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setAssetsFilter:(id)arg1 ;
-(id)initWithPhotoAlbum:(NSObject*)arg1 library:(id)arg2 type:(unsigned long long)arg3 ;
-(void)enumerateAssetsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAssetsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(ALAssetsGroupPrivate *)internal;
@end

