/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSString;

@interface SSFamilyCircle : NSObject <SSXPCCoding> {

	NSArray* _familyMembers;
	NSArray* _iTunesAccountNames;

}

@property (nonatomic,retain) NSArray * familyMembers;                   //@synthesize familyMembers=_familyMembers - In the implementation block
@property (nonatomic,retain) NSArray * iTunesAccountNames;              //@synthesize iTunesAccountNames=_iTunesAccountNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)newCacheRepresentation;
-(id)allITunesIdentifiers;
-(id)allITunesAccountNames;
-(NSArray *)iTunesAccountNames;
-(void)setITunesAccountNames:(NSArray *)arg1 ;
-(NSArray *)familyMembers;
-(void)setFamilyMembers:(NSArray *)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
@end
