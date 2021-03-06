/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, NSURL;

@interface MSEmailModel : NSObject <NSCoding> {

	NSString* _subject;
	NSString* _body;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSURL* _reference;
	int _type;

}

@property (nonatomic,copy) NSString * subject;               //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSArray * to;                     //@synthesize to=_to - In the implementation block
@property (nonatomic,copy) NSArray * cc;                     //@synthesize cc=_cc - In the implementation block
@property (nonatomic,copy) NSArray * bcc;                    //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,retain) NSString * body;                //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSURL * reference;              //@synthesize reference=_reference - In the implementation block
@property (assign,nonatomic) int type;                       //@synthesize type=_type - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)body;
-(void)setBody:(NSString *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setTo:(NSArray *)arg1 ;
-(NSArray *)to;
-(NSURL *)reference;
-(NSArray *)cc;
-(void)setCc:(NSArray *)arg1 ;
-(NSArray *)bcc;
-(void)setBcc:(NSArray *)arg1 ;
-(void)setReference:(NSURL *)arg1 ;
@end

