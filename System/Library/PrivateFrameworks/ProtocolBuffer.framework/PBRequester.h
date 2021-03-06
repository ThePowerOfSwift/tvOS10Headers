/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@protocol PBRequesterDelegate;
@class NSURL, NSURLConnection, NSRunLoop, NSThread, NSMutableData, PBDataReader, NSMutableArray, NSDictionary, NSMutableDictionary, NSString, NSArray;

@interface PBRequester : NSObject <NSURLConnectionDelegate> {

	NSURL* _URL;
	id<PBRequesterDelegate> _delegate;
	NSURLConnection* _connection;
	NSRunLoop* _connectionRunLoop;
	NSThread* _startThread;
	NSMutableData* _data;
	PBDataReader* _dataReader;
	unsigned long long _lastGoodDataOffset;
	unsigned long long _uploadPayloadSize;
	unsigned long long _downloadPayloadSize;
	unsigned long long _timeRequestSent;
	unsigned long long _timeResponseReceived;
	long long _responseStatusCode;
	NSMutableArray* _requests;
	NSMutableArray* _responses;
	NSMutableArray* _internalRequests;
	NSMutableArray* _internalResponses;
	NSDictionary* _httpResponseHeaders;
	NSMutableDictionary* _httpRequestHeaders;
	double _timeoutSeconds;
	CFRunLoopTimerRef _timeoutTimer;
	NSString* _logRequestToFile;
	NSString* _logResponseToFile;
	BOOL _didNotifyRequestCompleted;
	NSArray* _clientCertificates;
	NSDictionary* _connectionProperties;
	BOOL _shouldHandleCookies;
	struct {
		unsigned ignoresResponse : 1;
		unsigned loading : 1;
		unsigned needsCancel : 1;
		unsigned responseStatusSet : 1;
		unsigned parsedResponseHeader : 1;
		unsigned delegateDidReceiveResponse : 1;
		unsigned delegateDidFinish : 1;
		unsigned delegateDidCancel : 1;
		unsigned delegateDidFailWithError : 1;
		unsigned paused : 1;
		unsigned resuming : 1;
	}  _flags;

}

@property (assign) BOOL needsCancel; 
@property (nonatomic,retain) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) id<PBRequesterDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                          //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSRunLoop * connectionRunLoop;                         //@synthesize connectionRunLoop=_connectionRunLoop - In the implementation block
@property (assign,nonatomic) BOOL ignoresResponse; 
@property (nonatomic,retain) NSString * logRequestToFile;                           //@synthesize logRequestToFile=_logRequestToFile - In the implementation block
@property (nonatomic,retain) NSString * logResponseToFile;                          //@synthesize logResponseToFile=_logResponseToFile - In the implementation block
@property (nonatomic,readonly) NSArray * requests; 
@property (nonatomic,readonly) unsigned long long uploadPayloadSize;                //@synthesize uploadPayloadSize=_uploadPayloadSize - In the implementation block
@property (nonatomic,readonly) unsigned long long downloadPayloadSize;              //@synthesize downloadPayloadSize=_downloadPayloadSize - In the implementation block
@property (nonatomic,readonly) unsigned long long requestResponseTime; 
@property (assign,nonatomic) double timeoutSeconds;                                 //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,retain) NSArray * clientCertificates;                          //@synthesize clientCertificates=_clientCertificates - In the implementation block
@property (nonatomic,copy) NSDictionary * httpRequestHeaders; 
@property (nonatomic,retain) NSDictionary * httpResponseHeaders;                    //@synthesize httpResponseHeaders=_httpResponseHeaders - In the implementation block
@property (assign,nonatomic) BOOL shouldHandleCookies;                              //@synthesize shouldHandleCookies=_shouldHandleCookies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)usesEncodedMessages;
-(id)connection:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 properties:(id)arg3 ;
-(id)_connectionRunLoop;
-(void)_startTimeoutTimer;
-(void)_removeTimeoutTimer;
-(void)_resetTimeoutTimer;
-(CFURLRequestRef)newCFMutableURLRequestWithURL:(id)arg1 ;
-(id)newConnectionWithCFURLRequest:(CFURLRequestRef)arg1 delegate:(id)arg2 ;
-(id)newConnectionWithCFURLRequest:(CFURLRequestRef)arg1 delegate:(id)arg2 connectionProperties:(id)arg3 ;
-(NSRunLoop *)connectionRunLoop;
-(void)setConnectionRunLoop:(NSRunLoop *)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<PBRequesterDelegate>)arg1 ;
-(void)dealloc;
-(id<PBRequesterDelegate>)delegate;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)_start;
-(void)start;
-(void)_cleanup;
-(void)resume;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)pause;
-(BOOL)isPaused;
-(void)clearRequests;
-(void)addRequest:(id)arg1 ;
-(NSArray *)requests;
-(id)initWithURL:(id)arg1 andDelegate:(id)arg2 ;
-(void)setNeedsCancel;
-(void)startWithConnectionProperties:(id)arg1 ;
-(void)_logRequestsIfNecessary:(id)arg1 ;
-(void)_logResponsesIfNecessary:(id)arg1 ;
-(void)_logErrorIfNecessary:(id)arg1 ;
-(NSString *)logRequestToFile;
-(NSString *)logResponseToFile;
-(id)requestPreamble;
-(id)_osVersion;
-(id)_languageLocale;
-(BOOL)ignoresResponse;
-(void)setIgnoresResponse:(BOOL)arg1 ;
-(BOOL)needsCancel;
-(void)setNeedsCancel:(BOOL)arg1 ;
-(id)responseForRequest:(id)arg1 ;
-(id)internalRequests;
-(void)addInternalRequest:(id)arg1 ;
-(id)responseForInternalRequest:(id)arg1 ;
-(void)handleResponse:(id)arg1 forInternalRequest:(id)arg2 ;
-(NSDictionary *)httpRequestHeaders;
-(void)setHttpRequestHeaders:(NSDictionary *)arg1 ;
-(void)setHttpRequestHeader:(id)arg1 forKey:(id)arg2 ;
-(id)_applicationID;
-(void)writeRequest:(id)arg1 into:(id)arg2 ;
-(BOOL)_sendPayload:(id)arg1 error:(id*)arg2 ;
-(void)_serializePayload:(/*^block*/id)arg1 ;
-(void)_cancelNoNotify;
-(void)_failWithError:(id)arg1 ;
-(void)_failWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3 ;
-(void)_cancelWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3 ;
-(void)cancelWithErrorCode:(long long)arg1 description:(id)arg2 ;
-(void)cancelWithErrorCode:(long long)arg1 ;
-(BOOL)readResponsePreamble:(id)arg1 ;
-(id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3 ;
-(BOOL)_tryParseData;
-(unsigned long long)requestResponseTime;
-(void)encodeRequestData:(id)arg1 startRequestCallback:(/*^block*/id)arg2 ;
-(id)decodeResponseData:(id)arg1 ;
-(NSDictionary *)httpResponseHeaders;
-(void)setHttpResponseHeaders:(NSDictionary *)arg1 ;
-(double)timeoutSeconds;
-(void)setTimeoutSeconds:(double)arg1 ;
-(void)setLogRequestToFile:(NSString *)arg1 ;
-(void)setLogResponseToFile:(NSString *)arg1 ;
-(unsigned long long)uploadPayloadSize;
-(unsigned long long)downloadPayloadSize;
-(NSArray *)clientCertificates;
-(void)setClientCertificates:(NSArray *)arg1 ;
-(BOOL)shouldHandleCookies;
-(void)setShouldHandleCookies:(BOOL)arg1 ;
-(void)_timeoutTimerFired;
@end

