/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class RadioArtworkCollection, NSArray, NSString, NSDictionary;

@interface RadioStationTreeNode : NSObject <NSCopying, NSMutableCopying> {

	RadioArtworkCollection* _artworkCollection;
	long long _childNodeLoadingStyle;
	NSArray* _childNodes;
	long long _displayStyle;
	BOOL _hasAdditionalChildNodes;
	NSString* _name;
	long long _nodeID;
	NSDictionary* _stationDictionary;
	NSDictionary* _stationTreeNodeDictionary;

}

@property (nonatomic,copy,readonly) RadioArtworkCollection * artworkCollection;              //@synthesize artworkCollection=_artworkCollection - In the implementation block
@property (nonatomic,readonly) long long childNodeLoadingStyle;                              //@synthesize childNodeLoadingStyle=_childNodeLoadingStyle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * childNodes;                                    //@synthesize childNodes=_childNodes - In the implementation block
@property (nonatomic,readonly) long long displayStyle;                                       //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalChildNodes;                                 //@synthesize hasAdditionalChildNodes=_hasAdditionalChildNodes - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long nodeID;                                             //@synthesize nodeID=_nodeID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stationDictionary;                        //@synthesize stationDictionary=_stationDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stationTreeNodeDictionary;                //@synthesize stationTreeNodeDictionary=_stationTreeNodeDictionary - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)childNodes;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)displayStyle;
-(id)initWithStationTreeNodeDictionary:(id)arg1 ;
-(long long)nodeID;
-(long long)childNodeLoadingStyle;
-(BOOL)hasAdditionalChildNodes;
-(NSDictionary *)stationTreeNodeDictionary;
-(RadioArtworkCollection *)artworkCollection;
-(NSDictionary *)stationDictionary;
@end
