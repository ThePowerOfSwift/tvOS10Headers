/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BBBulletin;

@interface BBSyncDelayedDismissal : NSObject {

	BBBulletin* _bulletin;
	unsigned long long _feeds;

}

@property (nonatomic,retain) BBBulletin * bulletin;                 //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) unsigned long long feeds;              //@synthesize feeds=_feeds - In the implementation block
-(void)setBulletin:(BBBulletin *)arg1 ;
-(BBBulletin *)bulletin;
-(unsigned long long)feeds;
-(void)setFeeds:(unsigned long long)arg1 ;
@end

