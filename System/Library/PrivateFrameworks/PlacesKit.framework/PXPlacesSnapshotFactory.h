/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue, PXPlacesSnapshotFactoryDelegate;
@class NSString, UIImage, NSMutableArray, NSObject, PHAssetCollection, PHAsset, PHFetchResult, NSTimer;

@interface PXPlacesSnapshotFactory : NSObject <PHPhotoLibraryChangeObserver> {

	NSString* _cachedFilePath;
	UIImage* _cachedSnapshotImage;
	NSString* _cachedSnapshotImageIdentifier;
	UIImage* _placeholderImage;
	long long _cachedCount;
	NSMutableArray* _requestedCompletionBlocks;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _concurentQueue;
	BOOL _isRegisteredForPhotoLibraryChanges;
	BOOL _countCacheInvalidated;
	id<PXPlacesSnapshotFactoryDelegate> _delegate;
	PHAssetCollection* _placesCollection;
	PHAsset* _snapshottedAsset;
	PHFetchResult* _placesAssetsFetchResult;
	PHFetchResult* _assetCountFetchResult;
	NSTimer* _assetCountChangedTimer;

}

@property (assign,nonatomic) BOOL isRegisteredForPhotoLibraryChanges;                          //@synthesize isRegisteredForPhotoLibraryChanges=_isRegisteredForPhotoLibraryChanges - In the implementation block
@property (nonatomic,retain) PHAsset * snapshottedAsset;                                       //@synthesize snapshottedAsset=_snapshottedAsset - In the implementation block
@property (nonatomic,retain) PHFetchResult * placesAssetsFetchResult;                          //@synthesize placesAssetsFetchResult=_placesAssetsFetchResult - In the implementation block
@property (assign,nonatomic) BOOL countCacheInvalidated;                                       //@synthesize countCacheInvalidated=_countCacheInvalidated - In the implementation block
@property (nonatomic,retain) PHFetchResult * assetCountFetchResult;                            //@synthesize assetCountFetchResult=_assetCountFetchResult - In the implementation block
@property (nonatomic,retain) NSTimer * assetCountChangedTimer;                                 //@synthesize assetCountChangedTimer=_assetCountChangedTimer - In the implementation block
@property (assign,nonatomic,__weak) id<PXPlacesSnapshotFactoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PHAssetCollection * placesCollection;                             //@synthesize placesCollection=_placesCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PXPlacesSnapshotFactoryDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PXPlacesSnapshotFactoryDelegate>)delegate;
-(void)photoLibraryDidChange:(id)arg1 ;
-(BOOL)_imageExistsWithLocalIdentifier:(id)arg1 ;
-(void)requestPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(long long)assetCountWithForcedRefresh:(BOOL)arg1 ;
-(PHAssetCollection *)placesCollection;
-(void)setPlacesCollection:(PHAssetCollection *)arg1 ;
-(id)_placeHolderImageForExtendedTraitCollection:(id)arg1 ;
-(void)requestPlacesSnapshotWithSnapshotOptions:(id)arg1 assets:(id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(void)_handleAsyncPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(BOOL)isRegisteredForPhotoLibraryChanges;
-(id)_latestAssetWithLocation;
-(void)_fetchImageOfAsset:(id)arg1 withSnapshotOptions:(id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(void)setSnapshottedAsset:(PHAsset *)arg1 ;
-(void)removePreviousCachedImage;
-(void)setPlacesAssetsFetchResult:(PHFetchResult *)arg1 ;
-(void)_saveImage:(id)arg1 ofAsset:(id)arg2 atPath:(id)arg3 ;
-(void)requestPlacesImageOfAsset:(id)arg1 withSnapshotOptions:(id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(BOOL)countCacheInvalidated;
-(void)setAssetCountFetchResult:(PHFetchResult *)arg1 ;
-(PHFetchResult *)assetCountFetchResult;
-(void)setCountCacheInvalidated:(BOOL)arg1 ;
-(PHFetchResult *)placesAssetsFetchResult;
-(PHAsset *)snapshottedAsset;
-(NSTimer *)assetCountChangedTimer;
-(void)tickAssetCountChangedTimer:(id)arg1 ;
-(void)setAssetCountChangedTimer:(NSTimer *)arg1 ;
-(void)requestPlacesLibraryImageWithSnapshotOptions:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)setIsRegisteredForPhotoLibraryChanges:(BOOL)arg1 ;
@end

