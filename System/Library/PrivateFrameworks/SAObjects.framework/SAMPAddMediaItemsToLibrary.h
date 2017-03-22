/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAMPCollection;

@interface SAMPAddMediaItemsToLibrary : SABaseClientBoundCommand

@property (nonatomic,retain) SAMPCollection * mediaItems; 
+(id)addMediaItemsToLibrary;
+(id)addMediaItemsToLibraryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setMediaItems:(SAMPCollection *)arg1 ;
-(SAMPCollection *)mediaItems;
@end
