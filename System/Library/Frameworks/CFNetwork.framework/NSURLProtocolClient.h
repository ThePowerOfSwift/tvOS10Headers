/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLProtocolClient <NSObject>
@required
-(void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;
-(void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
-(void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;
-(void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
-(void)URLProtocolDidFinishLoading:(id)arg1;
-(void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
-(void)URLProtocol:(id)arg1 didLoadData:(id)arg2;

@end
