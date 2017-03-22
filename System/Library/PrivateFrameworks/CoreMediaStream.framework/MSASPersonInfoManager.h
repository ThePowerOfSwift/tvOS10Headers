/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMediaStream/CoreMediaStream-Structs.h>
@class NSMutableDictionary, NSString;

@interface MSASPersonInfoManager : NSObject {

	NSMutableDictionary* _personIDToPersonInfoDictionary;
	NSString* _pathForPersonInfoDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * personIDToPersonInfoDictionary;              //@synthesize personIDToPersonInfoDictionary=_personIDToPersonInfoDictionary - In the implementation block
@property (nonatomic,retain) NSString * pathForPersonInfoDictionary;                            //@synthesize pathForPersonInfoDictionary=_pathForPersonInfoDictionary - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedManager;
-(void)initWithPath:(id)arg1 ;
-(BOOL)updateWithSharingRelationship:(id)arg1 ;
-(NSMutableDictionary *)personIDToPersonInfoDictionary;
-(void)setPersonIDToPersonInfoDictionary:(NSMutableDictionary *)arg1 ;
-(NSString *)pathForPersonInfoDictionary;
-(void)setPathForPersonInfoDictionary:(NSString *)arg1 ;
-(id)firstNameForPersonID:(id)arg1 ;
-(id)lastNameForPersonID:(id)arg1 ;
-(id)fullNameForPersonID:(id)arg1 ;
-(id)emailForPersonID:(id)arg1 ;
@end
