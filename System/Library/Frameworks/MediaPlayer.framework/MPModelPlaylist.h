/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelObject.h>

@class NSString, MPModelCurator, NSURL, NSDateComponents, NSDate, MPTiledArtworkRequest;

@interface MPModelPlaylist : MPModelObject {

	BOOL _hasCleanContent;
	BOOL _hasExplicitContent;
	BOOL _owner;
	BOOL _curatorPlaylist;
	BOOL _publicPlaylist;
	BOOL _visiblePlaylist;
	BOOL _subscribed;
	BOOL _libraryAdded;
	NSString* _name;
	NSString* _descriptionText;
	MPModelCurator* _curator;
	unsigned long long _trackCount;
	long long _userEditableComponents;
	long long _type;
	NSString* _editorNotes;
	NSString* _shortEditorNotes;
	NSURL* _shareURL;
	NSURL* _shareShortURL;
	NSDateComponents* _releaseDateComponents;
	NSDateComponents* _lastModifiedDateComponents;
	NSDate* _lastDevicePlaybackDate;
	NSString* _cloudVersionHash;
	NSDate* _libraryAddedDate;
	long long _keepLocalEnableState;
	long long _keepLocalManagedStatus;
	/*^block*/id _artworkCatalogBlock;
	/*^block*/id _editorialArtworkCatalogBlock;
	MPTiledArtworkRequest* _tiledArtworkRequest;

}

@property (nonatomic,copy) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                                   //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) MPModelCurator * curator;                                     //@synthesize curator=_curator - In the implementation block
@property (assign,nonatomic) unsigned long long trackCount;                              //@synthesize trackCount=_trackCount - In the implementation block
@property (assign,nonatomic) BOOL hasCleanContent;                                       //@synthesize hasCleanContent=_hasCleanContent - In the implementation block
@property (assign,nonatomic) BOOL hasExplicitContent;                                    //@synthesize hasExplicitContent=_hasExplicitContent - In the implementation block
@property (assign,getter=isCuratorPlaylist,nonatomic) BOOL curatorPlaylist;              //@synthesize curatorPlaylist=_curatorPlaylist - In the implementation block
@property (assign,getter=isOwner,nonatomic) BOOL owner;                                  //@synthesize owner=_owner - In the implementation block
@property (assign,getter=isPublicPlaylist,nonatomic) BOOL publicPlaylist;                //@synthesize publicPlaylist=_publicPlaylist - In the implementation block
@property (assign,getter=isVisiblePlaylist,nonatomic) BOOL visiblePlaylist;              //@synthesize visiblePlaylist=_visiblePlaylist - In the implementation block
@property (assign,getter=isSubscribed,nonatomic) BOOL subscribed;                        //@synthesize subscribed=_subscribed - In the implementation block
@property (assign,nonatomic) long long userEditableComponents;                           //@synthesize userEditableComponents=_userEditableComponents - In the implementation block
@property (assign,nonatomic) long long type;                                             //@synthesize type=_type - In the implementation block
@property (assign,getter=isLibraryAdded,nonatomic) BOOL libraryAdded;                    //@synthesize libraryAdded=_libraryAdded - In the implementation block
@property (nonatomic,copy) NSDate * libraryAddedDate;                                    //@synthesize libraryAddedDate=_libraryAddedDate - In the implementation block
@property (nonatomic,copy) NSString * editorNotes;                                       //@synthesize editorNotes=_editorNotes - In the implementation block
@property (nonatomic,copy) NSString * shortEditorNotes;                                  //@synthesize shortEditorNotes=_shortEditorNotes - In the implementation block
@property (nonatomic,copy) NSURL * shareURL;                                             //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,copy) NSURL * shareShortURL;                                        //@synthesize shareShortURL=_shareShortURL - In the implementation block
@property (nonatomic,copy) NSDateComponents * releaseDateComponents;                     //@synthesize releaseDateComponents=_releaseDateComponents - In the implementation block
@property (nonatomic,copy) NSDateComponents * lastModifiedDateComponents;                //@synthesize lastModifiedDateComponents=_lastModifiedDateComponents - In the implementation block
@property (nonatomic,copy) NSDate * lastDevicePlaybackDate;                              //@synthesize lastDevicePlaybackDate=_lastDevicePlaybackDate - In the implementation block
@property (nonatomic,copy) NSString * cloudVersionHash;                                  //@synthesize cloudVersionHash=_cloudVersionHash - In the implementation block
@property (nonatomic,copy) id artworkCatalogBlock;                                       //@synthesize artworkCatalogBlock=_artworkCatalogBlock - In the implementation block
@property (nonatomic,copy) id editorialArtworkCatalogBlock;                              //@synthesize editorialArtworkCatalogBlock=_editorialArtworkCatalogBlock - In the implementation block
@property (nonatomic,copy) MPTiledArtworkRequest * tiledArtworkRequest;                  //@synthesize tiledArtworkRequest=_tiledArtworkRequest - In the implementation block
@property (assign,nonatomic) long long keepLocalEnableState;                             //@synthesize keepLocalEnableState=_keepLocalEnableState - In the implementation block
@property (assign,nonatomic) long long keepLocalManagedStatus;                           //@synthesize keepLocalManagedStatus=_keepLocalManagedStatus - In the implementation block
+(BOOL)supportsKeepLocalStatusObservation;
+(id)requiredKeepLocalStatusObservationProperties;
+(id)__libraryAdded__KEY;
+(id)__artworkCatalogBlock__KEY;
+(id)__keepLocalEnableState__KEY;
+(id)__keepLocalManagedStatus__KEY;
+(id)requiredLibraryAddStatusObservationProperties;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)__editorialArtworkCatalogBlock__KEY;
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)__name__KEY;
+(id)__editorNotes__KEY;
+(id)__shortEditorNotes__KEY;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
+(id)__MPModelPropertyPlaylistName__PROPERTY;
+(id)__descriptionText__KEY;
+(id)__MPModelPropertyPlaylistDescriptionText__PROPERTY;
+(id)__curator__KEY;
+(id)__MPModelRelationshipPlaylistCurator__PROPERTY;
+(id)__hasCleanContent__KEY;
+(id)__MPModelPropertyPlaylistHasCleanContent__PROPERTY;
+(id)__hasExplicitContent__KEY;
+(id)__MPModelPropertyPlaylistHasExplicitContent__PROPERTY;
+(id)__curatorPlaylist__KEY;
+(id)__MPModelPropertyPlaylistCuratorPlaylist__PROPERTY;
+(id)__owner__KEY;
+(id)__MPModelPropertyPlaylistIsOwner__PROPERTY;
+(id)__publicPlaylist__KEY;
+(id)__MPModelPropertyPlaylistPublicPlaylist__PROPERTY;
+(id)__visiblePlaylist__KEY;
+(id)__MPModelPropertyPlaylistVisiblePlaylist__PROPERTY;
+(id)__subscribed__KEY;
+(id)__MPModelPropertyPlaylistSubscribed__PROPERTY;
+(id)__userEditableComponents__KEY;
+(id)__MPModelPropertyPlaylistUserEditableComponents__PROPERTY;
+(id)__type__KEY;
+(id)__MPModelPropertyPlaylistType__PROPERTY;
+(id)__trackCount__KEY;
+(id)__MPModelPropertyPlaylistTrackCount__PROPERTY;
+(id)__MPModelPropertyPlaylistEditorNotes__PROPERTY;
+(id)__MPModelPropertyPlaylistShortEditorNotes__PROPERTY;
+(id)__shareURL__KEY;
+(id)__MPModelPropertyPlaylistShareURL__PROPERTY;
+(id)__shareShortURL__KEY;
+(id)__MPModelPropertyPlaylistShareShortURL__PROPERTY;
+(id)__releaseDateComponents__KEY;
+(id)__MPModelPropertyPlaylistReleaseDateComponents__PROPERTY;
+(id)__lastModifiedDateComponents__KEY;
+(id)__MPModelPropertyPlaylistLastModifiedDateComponents__PROPERTY;
+(id)__MPModelPropertyPlaylistArtwork__PROPERTY;
+(id)__MPModelPropertyPlaylistEditorialArtwork__PROPERTY;
+(id)__MPModelPropertyPlaylistLibraryAdded__PROPERTY;
+(id)__libraryAddedDate__KEY;
+(id)__MPModelPropertyPlaylistLibraryAddedDate__PROPERTY;
+(id)__tiledArtworkRequest__KEY;
+(id)__MPModelPropertyPlaylistTracksTiledArtwork__PROPERTY;
+(id)__MPModelPropertyPlaylistKeepLocalEnableState__PROPERTY;
+(id)__MPModelPropertyPlaylistKeepLocalManagedStatus__PROPERTY;
+(id)__lastDevicePlaybackDate__KEY;
+(id)__MPModelPropertyPlaylistLastDevicePlaybackDate__PROPERTY;
+(id)__cloudVersionHash__KEY;
+(id)__MPModelPropertyPlaylistCloudVersionHash__PROPERTY;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setOwner:(BOOL)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(id)descriptionWithType:(long long)arg1 ;
-(unsigned long long)trackCount;
-(NSString *)editorNotes;
-(NSString *)shortEditorNotes;
-(id)artworkCatalog;
-(void)setEditorNotes:(NSString *)arg1 ;
-(void)setShortEditorNotes:(NSString *)arg1 ;
-(void)setArtworkCatalogBlock:(id)arg1 ;
-(id)artworkCatalogBlock;
-(BOOL)isLibraryAdded;
-(void)setLibraryAdded:(BOOL)arg1 ;
-(long long)keepLocalEnableState;
-(void)setKeepLocalEnableState:(long long)arg1 ;
-(long long)keepLocalManagedStatus;
-(void)setKeepLocalManagedStatus:(long long)arg1 ;
-(void)setTrackCount:(unsigned long long)arg1 ;
-(void)setHasExplicitContent:(BOOL)arg1 ;
-(void)setHasCleanContent:(BOOL)arg1 ;
-(void)setReleaseDateComponents:(NSDateComponents *)arg1 ;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(id)newKeepLocalStatusObserverConfiguration;
-(id)editorialArtworkCatalogBlock;
-(id)editorialArtworkCatalog;
-(void)setEditorialArtworkCatalogBlock:(id)arg1 ;
-(void)setCloudVersionHash:(NSString *)arg1 ;
-(void)setLastModifiedDateComponents:(NSDateComponents *)arg1 ;
-(void)setCuratorPlaylist:(BOOL)arg1 ;
-(void)setPublicPlaylist:(BOOL)arg1 ;
-(void)setVisiblePlaylist:(BOOL)arg1 ;
-(void)setSubscribed:(BOOL)arg1 ;
-(void)setUserEditableComponents:(long long)arg1 ;
-(void)setShareURL:(NSURL *)arg1 ;
-(void)setShareShortURL:(NSURL *)arg1 ;
-(void)setTiledArtworkRequest:(MPTiledArtworkRequest *)arg1 ;
-(void)setCurator:(MPModelCurator *)arg1 ;
-(NSDateComponents *)releaseDateComponents;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(BOOL)hasCleanContent;
-(BOOL)hasExplicitContent;
-(BOOL)isPublicPlaylist;
-(BOOL)isVisiblePlaylist;
-(BOOL)isCuratorPlaylist;
-(BOOL)isOwner;
-(long long)libraryRemovalSupportedOptions;
-(MPTiledArtworkRequest *)tiledArtworkRequest;
-(id)trackArtworkCatalogsWithCount:(long long)arg1 ;
-(id)tracksTiledArtworkCatalogWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 ;
-(MPModelCurator *)curator;
-(BOOL)isSubscribed;
-(long long)userEditableComponents;
-(NSURL *)shareURL;
-(NSURL *)shareShortURL;
-(NSDateComponents *)lastModifiedDateComponents;
-(NSDate *)lastDevicePlaybackDate;
-(void)setLastDevicePlaybackDate:(NSDate *)arg1 ;
-(NSString *)cloudVersionHash;
-(NSDate *)libraryAddedDate;
-(void)setLibraryAddedDate:(NSDate *)arg1 ;
@end

