/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MMCS/MMCS-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegatePrivate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegatePrivate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSURLSession, NSInputStream, NSOutputStream, NSURLSessionDataTask, MMCSBoundedQueue, NSDictionary, MMCSDuetReporter, NSString;

@interface MMCSHTTPContext : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegatePrivate, NSStreamDelegate> {

	BOOL _didOpen;
	BOOL _isValid;
	BOOL _isTaskDone;
	BOOL _requestIsStreamed;
	BOOL _isHandlingError;
	mmcs_http_context* _hc;
	NSURLSession* _urlSession;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSURLSessionDataTask* _dataTask;
	MMCSBoundedQueue* _boundedQueue;
	NSDictionary* _timingData;
	MMCSDuetReporter* _duetReporter;
	os_activity_sRef _activityMarker;
	CFErrorRef _customCertificatePinningError;

}

@property (assign,nonatomic) mmcs_http_context* hc;                                 //@synthesize hc=_hc - In the implementation block
@property (nonatomic,retain) NSURLSession * urlSession;                             //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                           //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                         //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * dataTask;                       //@synthesize dataTask=_dataTask - In the implementation block
@property (nonatomic,retain) MMCSBoundedQueue * boundedQueue;                       //@synthesize boundedQueue=_boundedQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * timingData;                             //@synthesize timingData=_timingData - In the implementation block
@property (nonatomic,retain) MMCSDuetReporter * duetReporter;                       //@synthesize duetReporter=_duetReporter - In the implementation block
@property (assign,nonatomic) BOOL didOpen;                                          //@synthesize didOpen=_didOpen - In the implementation block
@property (assign,nonatomic) BOOL isValid;                                          //@synthesize isValid=_isValid - In the implementation block
@property (assign,nonatomic) BOOL isTaskDone;                                       //@synthesize isTaskDone=_isTaskDone - In the implementation block
@property (assign,nonatomic) BOOL requestIsStreamed;                                //@synthesize requestIsStreamed=_requestIsStreamed - In the implementation block
@property (assign,nonatomic) BOOL isHandlingError;                                  //@synthesize isHandlingError=_isHandlingError - In the implementation block
@property (assign,nonatomic) os_activity_sRef activityMarker;                       //@synthesize activityMarker=_activityMarker - In the implementation block
@property (assign,nonatomic) CFErrorRef customCertificatePinningError;              //@synthesize customCertificatePinningError=_customCertificatePinningError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMMCSHTTPSession;
+(unsigned char)handleTrustPolicy:(SecTrustRef)arg1 policy:(SecPolicyRef)arg2 requestType:(CFStringRef)arg3 host:(CFStringRef)arg4 error:(_CFError*)arg5 ;
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(BOOL)isValid;
-(BOOL)send;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithContext:(mmcs_http_context*)arg1 options:(const mmcs_http_context_options*)arg2 activityMarker:(os_activity_sRef)arg3 ;
-(void)cleanupResponse;
-(long long)writeRequestBody:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)requestBodyDone;
-(BOOL)requestBodyCanAcceptData;
-(void)setRequestIsStreamed:(BOOL)arg1 ;
-(CFErrorRef)customCertificatePinningError;
-(mmcs_http_context*)hc;
-(BOOL)isTaskDone;
-(BOOL)isHandlingError;
-(void)invalidateStreamPair;
-(void)setIsHandlingError:(BOOL)arg1 ;
-(void)setHc:(mmcs_http_context*)arg1 ;
-(void)setActivityMarker:(os_activity_sRef)arg1 ;
-(void)setCustomCertificatePinningError:(CFErrorRef)arg1 ;
-(void)setBoundedQueue:(MMCSBoundedQueue *)arg1 ;
-(MMCSBoundedQueue *)boundedQueue;
-(BOOL)createNewRequestBodyInputStream;
-(void)setIsTaskDone:(BOOL)arg1 ;
-(os_activity_sRef)activityMarker;
-(void)setDidOpen:(BOOL)arg1 ;
-(void)cleanupRequest;
-(BOOL)requestIsStreamed;
-(long long)countOfRequestBodyBytesSent;
-(void)setDuetReporter:(MMCSDuetReporter *)arg1 ;
-(MMCSDuetReporter *)duetReporter;
-(NSOutputStream *)outputStream;
-(BOOL)didOpen;
-(NSDictionary *)timingData;
-(void)setTimingData:(NSDictionary *)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(NSURLSessionDataTask *)dataTask;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(NSURLSession *)urlSession;
-(NSInputStream *)inputStream;
@end

