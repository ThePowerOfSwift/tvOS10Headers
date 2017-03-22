/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_endpoint_flow.h>

@protocol OS_nw_path_evaluator, OS_nw_path, OS_nw_write_request, OS_nw_read_request, OS_nw_channel, OS_xpc_object, OS_nw_endpoint, OS_nw_array, OS_dispatch_data;
@class NSObject, NSString;

@interface NWConcrete_nw_endpoint_flow : NSObject <OS_nw_endpoint_flow> {

	NSObject*<OS_nw_path_evaluator> connected_path_evaluator;
	NSObject*<OS_nw_path> connected_path;
	BOOL is_viable;
	BOOL has_connected;
	void* internally_retained_object;
	nw_protocol_identifier protocol_identifier;
	nw_protocol_callbacks* protocol_callbacks;
	nw_protocol* protocol_handler;
	nw_protocol* transport_protocol;
	nw_protocol* tls_protocol;
	NSObject*<OS_nw_write_request> write_requests;
	NSObject*<OS_nw_read_request> read_requests;
	CFErrorRef last_error;
	int pre_connected_fd;
	BOOL is_channel;
	BOOL is_rawip;
	BOOL is_custom_protocols_only;
	NSObject*<OS_nw_channel> channel;
	nw_protocol* socket_protocol;
	DNSServiceRef_tRef sleep_proxy_ref;
	NSObject*<OS_xpc_object> flow_divert_token;
	NSObject*<OS_nw_endpoint> flow_divert_endpoint;
	BOOL is_multipath;
	NSObject*<OS_nw_array> multipath_watcher_array;
	NSObject*<OS_nw_endpoint> multipath_effective_subflow_endpoint;
	BOOL multipath_nat64_query_outstanding;
	BOOL servicing_reads;
	BOOL input_finished;
	nw_protocol* wrapper_protocol;
	NSObject*<OS_dispatch_data> final_data;
	int final_error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)startWithHandler:(id)arg1 ;
-(void)cancelWithHandler:(id)arg1 forced:(BOOL)arg2 ;
-(void)updatePathWithHandler:(id)arg1 ;
@end
