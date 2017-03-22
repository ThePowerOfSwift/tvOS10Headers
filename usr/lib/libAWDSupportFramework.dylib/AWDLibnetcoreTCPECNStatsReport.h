/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDLibnetcoreTCPECNStatsReport : PBCodable <NSCopying> {

	unsigned long long _tcpECNClientSetup;
	unsigned long long _tcpECNClientSuccess;
	unsigned long long _tcpECNConnNoPacketLossCE;
	unsigned long long _tcpECNConnPacketLossCE;
	unsigned long long _tcpECNConnPacketLossNoCE;
	unsigned long long _tcpECNConnRecvCE;
	unsigned long long _tcpECNConnRecvECE;
	unsigned long long _tcpECNFallbackCE;
	unsigned long long _tcpECNFallbackReorder;
	unsigned long long _tcpECNFallbackSynLoss;
	unsigned long long _tcpECNNotSupportedPeer;
	unsigned long long _tcpECNRecvCE;
	unsigned long long _tcpECNRecvECE;
	unsigned long long _tcpECNSentECE;
	unsigned long long _tcpECNServerSetup;
	unsigned long long _tcpECNServerSuccess;
	unsigned long long _tcpECNSynAckLost;
	unsigned long long _tcpECNSynLost;
	BOOL _tcpECNClientNegotiationEnabled;
	BOOL _tcpECNServerNegotiationEnabled;
	SCD_Struct_AW25 _has;

}

@property (assign,nonatomic) BOOL hasTcpECNClientNegotiationEnabled; 
@property (assign,nonatomic) BOOL tcpECNClientNegotiationEnabled;                      //@synthesize tcpECNClientNegotiationEnabled=_tcpECNClientNegotiationEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNServerNegotiationEnabled; 
@property (assign,nonatomic) BOOL tcpECNServerNegotiationEnabled;                      //@synthesize tcpECNServerNegotiationEnabled=_tcpECNServerNegotiationEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNClientSetup; 
@property (assign,nonatomic) unsigned long long tcpECNClientSetup;                     //@synthesize tcpECNClientSetup=_tcpECNClientSetup - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNServerSetup; 
@property (assign,nonatomic) unsigned long long tcpECNServerSetup;                     //@synthesize tcpECNServerSetup=_tcpECNServerSetup - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNClientSuccess; 
@property (assign,nonatomic) unsigned long long tcpECNClientSuccess;                   //@synthesize tcpECNClientSuccess=_tcpECNClientSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNServerSuccess; 
@property (assign,nonatomic) unsigned long long tcpECNServerSuccess;                   //@synthesize tcpECNServerSuccess=_tcpECNServerSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNNotSupportedPeer; 
@property (assign,nonatomic) unsigned long long tcpECNNotSupportedPeer;                //@synthesize tcpECNNotSupportedPeer=_tcpECNNotSupportedPeer - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNSynLost; 
@property (assign,nonatomic) unsigned long long tcpECNSynLost;                         //@synthesize tcpECNSynLost=_tcpECNSynLost - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNSynAckLost; 
@property (assign,nonatomic) unsigned long long tcpECNSynAckLost;                      //@synthesize tcpECNSynAckLost=_tcpECNSynAckLost - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNRecvCE; 
@property (assign,nonatomic) unsigned long long tcpECNRecvCE;                          //@synthesize tcpECNRecvCE=_tcpECNRecvCE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNRecvECE; 
@property (assign,nonatomic) unsigned long long tcpECNRecvECE;                         //@synthesize tcpECNRecvECE=_tcpECNRecvECE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNSentECE; 
@property (assign,nonatomic) unsigned long long tcpECNSentECE;                         //@synthesize tcpECNSentECE=_tcpECNSentECE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNConnRecvCE; 
@property (assign,nonatomic) unsigned long long tcpECNConnRecvCE;                      //@synthesize tcpECNConnRecvCE=_tcpECNConnRecvCE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNConnRecvECE; 
@property (assign,nonatomic) unsigned long long tcpECNConnRecvECE;                     //@synthesize tcpECNConnRecvECE=_tcpECNConnRecvECE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNConnPacketLossNoCE; 
@property (assign,nonatomic) unsigned long long tcpECNConnPacketLossNoCE;              //@synthesize tcpECNConnPacketLossNoCE=_tcpECNConnPacketLossNoCE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNConnPacketLossCE; 
@property (assign,nonatomic) unsigned long long tcpECNConnPacketLossCE;                //@synthesize tcpECNConnPacketLossCE=_tcpECNConnPacketLossCE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNConnNoPacketLossCE; 
@property (assign,nonatomic) unsigned long long tcpECNConnNoPacketLossCE;              //@synthesize tcpECNConnNoPacketLossCE=_tcpECNConnNoPacketLossCE - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNFallbackSynLoss; 
@property (assign,nonatomic) unsigned long long tcpECNFallbackSynLoss;                 //@synthesize tcpECNFallbackSynLoss=_tcpECNFallbackSynLoss - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNFallbackReorder; 
@property (assign,nonatomic) unsigned long long tcpECNFallbackReorder;                 //@synthesize tcpECNFallbackReorder=_tcpECNFallbackReorder - In the implementation block
@property (assign,nonatomic) BOOL hasTcpECNFallbackCE; 
@property (assign,nonatomic) unsigned long long tcpECNFallbackCE;                      //@synthesize tcpECNFallbackCE=_tcpECNFallbackCE - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTcpECNClientNegotiationEnabled:(BOOL)arg1 ;
-(void)setHasTcpECNClientNegotiationEnabled:(BOOL)arg1 ;
-(BOOL)hasTcpECNClientNegotiationEnabled;
-(void)setTcpECNServerNegotiationEnabled:(BOOL)arg1 ;
-(void)setHasTcpECNServerNegotiationEnabled:(BOOL)arg1 ;
-(BOOL)hasTcpECNServerNegotiationEnabled;
-(void)setTcpECNClientSetup:(unsigned long long)arg1 ;
-(void)setHasTcpECNClientSetup:(BOOL)arg1 ;
-(BOOL)hasTcpECNClientSetup;
-(void)setTcpECNServerSetup:(unsigned long long)arg1 ;
-(void)setHasTcpECNServerSetup:(BOOL)arg1 ;
-(BOOL)hasTcpECNServerSetup;
-(void)setTcpECNClientSuccess:(unsigned long long)arg1 ;
-(void)setHasTcpECNClientSuccess:(BOOL)arg1 ;
-(BOOL)hasTcpECNClientSuccess;
-(void)setTcpECNServerSuccess:(unsigned long long)arg1 ;
-(void)setHasTcpECNServerSuccess:(BOOL)arg1 ;
-(BOOL)hasTcpECNServerSuccess;
-(void)setTcpECNNotSupportedPeer:(unsigned long long)arg1 ;
-(void)setHasTcpECNNotSupportedPeer:(BOOL)arg1 ;
-(BOOL)hasTcpECNNotSupportedPeer;
-(void)setTcpECNSynLost:(unsigned long long)arg1 ;
-(void)setHasTcpECNSynLost:(BOOL)arg1 ;
-(BOOL)hasTcpECNSynLost;
-(void)setTcpECNSynAckLost:(unsigned long long)arg1 ;
-(void)setHasTcpECNSynAckLost:(BOOL)arg1 ;
-(BOOL)hasTcpECNSynAckLost;
-(void)setTcpECNRecvCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNRecvCE:(BOOL)arg1 ;
-(BOOL)hasTcpECNRecvCE;
-(void)setTcpECNRecvECE:(unsigned long long)arg1 ;
-(void)setHasTcpECNRecvECE:(BOOL)arg1 ;
-(BOOL)hasTcpECNRecvECE;
-(void)setTcpECNSentECE:(unsigned long long)arg1 ;
-(void)setHasTcpECNSentECE:(BOOL)arg1 ;
-(BOOL)hasTcpECNSentECE;
-(void)setTcpECNConnRecvCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNConnRecvCE:(BOOL)arg1 ;
-(BOOL)hasTcpECNConnRecvCE;
-(void)setTcpECNConnRecvECE:(unsigned long long)arg1 ;
-(void)setHasTcpECNConnRecvECE:(BOOL)arg1 ;
-(BOOL)hasTcpECNConnRecvECE;
-(void)setTcpECNConnPacketLossNoCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNConnPacketLossNoCE:(BOOL)arg1 ;
-(BOOL)hasTcpECNConnPacketLossNoCE;
-(void)setTcpECNConnPacketLossCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNConnPacketLossCE:(BOOL)arg1 ;
-(BOOL)hasTcpECNConnPacketLossCE;
-(void)setTcpECNConnNoPacketLossCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNConnNoPacketLossCE:(BOOL)arg1 ;
-(BOOL)hasTcpECNConnNoPacketLossCE;
-(void)setTcpECNFallbackSynLoss:(unsigned long long)arg1 ;
-(void)setHasTcpECNFallbackSynLoss:(BOOL)arg1 ;
-(BOOL)hasTcpECNFallbackSynLoss;
-(void)setTcpECNFallbackReorder:(unsigned long long)arg1 ;
-(void)setHasTcpECNFallbackReorder:(BOOL)arg1 ;
-(BOOL)hasTcpECNFallbackReorder;
-(void)setTcpECNFallbackCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNFallbackCE:(BOOL)arg1 ;
-(BOOL)hasTcpECNFallbackCE;
-(BOOL)tcpECNClientNegotiationEnabled;
-(BOOL)tcpECNServerNegotiationEnabled;
-(unsigned long long)tcpECNClientSetup;
-(unsigned long long)tcpECNServerSetup;
-(unsigned long long)tcpECNClientSuccess;
-(unsigned long long)tcpECNServerSuccess;
-(unsigned long long)tcpECNNotSupportedPeer;
-(unsigned long long)tcpECNSynLost;
-(unsigned long long)tcpECNSynAckLost;
-(unsigned long long)tcpECNRecvCE;
-(unsigned long long)tcpECNRecvECE;
-(unsigned long long)tcpECNSentECE;
-(unsigned long long)tcpECNConnRecvCE;
-(unsigned long long)tcpECNConnRecvECE;
-(unsigned long long)tcpECNConnPacketLossNoCE;
-(unsigned long long)tcpECNConnPacketLossCE;
-(unsigned long long)tcpECNConnNoPacketLossCE;
-(unsigned long long)tcpECNFallbackSynLoss;
-(unsigned long long)tcpECNFallbackReorder;
-(unsigned long long)tcpECNFallbackCE;
@end
