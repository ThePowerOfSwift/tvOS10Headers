/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class CertInfoCertificateListCellContentView;

@interface CertInfoCertificateListTableViewCell : UITableViewCell {

	CertInfoCertificateListCellContentView* _certificateContentView;

}
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateWithTrustDescription:(id)arg1 certificateIndex:(unsigned long long)arg2 ;
@end

