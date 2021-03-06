/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVServices-Structs.h>
#import <TVServices/TVSImageLoader.h>

@class NSString, NSMutableDictionary, TVSDataServer;

@interface TVSDataClient : NSObject <TVSImageLoader> {

	int _maxConcurrentQueryCount;
	NSString* _name;
	unsigned long long _clientType;
	long long _status;
	NSString* _identifier;
	NSMutableDictionary* _metadataDict;
	TVSDataServer* _dataServer;

}

@property (assign,nonatomic) unsigned long long clientType;              //@synthesize clientType=_clientType - In the implementation block
@property (assign) long long status;                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSMutableDictionary * metadataDict;                   //@synthesize metadataDict=_metadataDict - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (__weak) TVSDataServer * dataServer;                           //@synthesize dataServer=_dataServer - In the implementation block
@property (assign,nonatomic) int maxConcurrentQueryCount;                //@synthesize maxConcurrentQueryCount=_maxConcurrentQueryCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringFromClientType:(unsigned long long)arg1 ;
+(id)stringFromClientStatus:(long long)arg1 ;
+(id)mediaItemsForDataItems:(id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
+(id)_stringFromClientTypeHelper:(unsigned long long)arg1 ;
+(id)mediaItemsForDataItems:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)objectForKey:(id)arg1 ;
-(NSString *)identifier;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)connect;
-(void)disconnect;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSMutableDictionary *)metadataDict;
-(void)setMetadataDict:(NSMutableDictionary *)arg1 ;
-(void)queryCompleted:(id)arg1 withStatus:(long long)arg2 ;
-(id)imageKeyForObject:(id)arg1 ;
-(void)submitDataQuery:(id)arg1 priority:(long long)arg2 withCompletionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelLoad:(id)arg1 ;
-(void)setDataServer:(TVSDataServer *)arg1 ;
-(void)setClientStatus:(long long)arg1 ;
-(void)concreteDataClientConnect;
-(void)concreteDataClientDisconnect;
-(BOOL)canProcessQueryConcurrently:(id)arg1 ;
-(int)maxConcurrentQueryCount;
-(id)mediaItemForDataItem:(id)arg1 ;
-(void)connectionCompletedWithStatus:(long long)arg1 ;
-(TVSDataServer *)dataServer;
-(id)initWithName:(id)arg1 clientType:(unsigned long long)arg2 ;
-(BOOL)supportsProperty:(id)arg1 ;
-(BOOL)queryFilterSupportsProperty:(id)arg1 ;
-(BOOL)groupingSupportsProperty:(id)arg1 ;
-(BOOL)processQueryAsync:(id)arg1 ;
-(void)executeQuery:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setMaxConcurrentQueryCount:(int)arg1 ;
-(void)setClientType:(unsigned long long)arg1 ;
-(unsigned long long)clientType;
@end

