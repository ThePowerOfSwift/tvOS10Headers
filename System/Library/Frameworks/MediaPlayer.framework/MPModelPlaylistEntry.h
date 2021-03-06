/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelObject.h>

@class MPModelPlaylist, MPModelSong;

@interface MPModelPlaylistEntry : MPModelObject {

	long long _position;
	MPModelPlaylist* _playlist;
	MPModelSong* _song;

}

@property (nonatomic,retain) MPModelPlaylist * playlist;              //@synthesize playlist=_playlist - In the implementation block
@property (assign,nonatomic) long long position;                      //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) MPModelSong * song;                      //@synthesize song=_song - In the implementation block
+(BOOL)supportsKeepLocalStatusObservation;
+(id)requiredKeepLocalStatusObservationProperties;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)__playlist__KEY;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
+(id)__song__KEY;
+(id)__position__KEY;
+(id)__MPModelPropertyPlaylistEntryPosition__PROPERTY;
+(id)__MPModelRelationshipPlaylistEntryPlaylist__PROPERTY;
+(id)__MPModelRelationshipPlaylistEntrySong__PROPERTY;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
-(void)setPlaylist:(MPModelPlaylist *)arg1 ;
-(void)setSong:(MPModelSong *)arg1 ;
-(MPModelSong *)song;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(MPModelPlaylist *)playlist;
-(id)newKeepLocalStatusObserverConfiguration;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(long long)libraryRemovalSupportedOptions;
@end

