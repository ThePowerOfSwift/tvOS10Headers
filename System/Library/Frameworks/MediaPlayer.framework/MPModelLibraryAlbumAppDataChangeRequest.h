/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelObject, MPMediaLibraryAlbumAppData;

@interface MPModelLibraryAlbumAppDataChangeRequest : NSObject <NSCopying> {

	MPModelObject* _modelObject;
	MPMediaLibraryAlbumAppData* _albumAppData;

}

@property (nonatomic,retain) MPModelObject * modelObject;                            //@synthesize modelObject=_modelObject - In the implementation block
@property (nonatomic,retain) MPMediaLibraryAlbumAppData * albumAppData;              //@synthesize albumAppData=_albumAppData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPModelObject *)modelObject;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setModelObject:(MPModelObject *)arg1 ;
-(MPMediaLibraryAlbumAppData *)albumAppData;
-(void)setAlbumAppData:(MPMediaLibraryAlbumAppData *)arg1 ;
@end
