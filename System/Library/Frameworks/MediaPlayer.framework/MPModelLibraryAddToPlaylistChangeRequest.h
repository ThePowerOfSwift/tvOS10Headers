/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelPlaylist, MPModelObject, MPSectionedCollection;

@interface MPModelLibraryAddToPlaylistChangeRequest : NSObject <NSCopying> {

	MPModelPlaylist* _playlist;
	MPModelObject* _representativeModelObject;
	MPSectionedCollection* _songResults;
	/*^block*/id _storeImportAllowedHandler;

}

@property (nonatomic,retain) MPModelPlaylist * playlist;                             //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,retain) MPModelObject * representativeModelObject;              //@synthesize representativeModelObject=_representativeModelObject - In the implementation block
@property (nonatomic,retain) MPSectionedCollection * songResults;                    //@synthesize songResults=_songResults - In the implementation block
@property (nonatomic,copy) id storeImportAllowedHandler;                             //@synthesize storeImportAllowedHandler=_storeImportAllowedHandler - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaylist:(MPModelPlaylist *)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelPlaylist *)playlist;
-(MPModelObject *)representativeModelObject;
-(void)setRepresentativeModelObject:(MPModelObject *)arg1 ;
-(MPSectionedCollection *)songResults;
-(void)setSongResults:(MPSectionedCollection *)arg1 ;
-(id)storeImportAllowedHandler;
-(void)setStoreImportAllowedHandler:(id)arg1 ;
@end
