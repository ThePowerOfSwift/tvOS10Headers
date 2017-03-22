/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface DAMailMessage : NSObject <NSCoding>
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)date;
-(id)sender;
-(id)body;
-(id)attachments;
-(id)subject;
-(id)from;
-(id)to;
-(id)cc;
-(id)bcc;
-(BOOL)flagged;
-(BOOL)read;
-(id)remoteID;
-(id)folderID;
-(int)bodySize;
-(id)meetingRequestUUID;
-(id)longID;
-(id)messageClass;
-(BOOL)readIsSet;
-(BOOL)flaggedIsSet;
-(BOOL)verbIsSet;
-(int)lastVerb;
-(int)smimeType;
-(id)meetingRequestMetaData;
-(BOOL)meetingRequestIsActionable;
-(id)conversationId;
-(id)rfc822Data;
-(id)replyTo;
-(id)clientID;
-(int)bodyType;
-(id)serverID;
-(id)preview;
-(int)importance;
-(int)bodyTruncated;
-(id)displayTo;
-(id)threadTopic;
-(id)conversationIndex;
-(BOOL)isDraft;
-(id)instanceID;
@end
