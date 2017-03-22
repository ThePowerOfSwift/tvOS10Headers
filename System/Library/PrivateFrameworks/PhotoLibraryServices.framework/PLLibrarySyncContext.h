/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLSyncContext.h>

@class PLPhotoLibrary, NSString;

@interface PLLibrarySyncContext : NSObject <PLSyncContext> {

	PLPhotoLibrary* _photoLibrary;

}

@property (readonly) PLPhotoLibrary * photoLibrary;                    //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL serverSupportsVision; 
-(void)dealloc;
-(BOOL)serverSupportsVision;
-(PLPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)makeFace;
-(void)deleteFaces:(id)arg1 ;
-(id)personForUUID:(id)arg1 createIfMissing:(BOOL)arg2 ;
@end
