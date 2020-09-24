/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface MFFileAttachment : NSObject {

	int _attachmentType;
	NSString* _attachmentName;
	NSURL* _attachmentContentIDURL;

}

@property (nonatomic,copy) NSString * attachmentName;                     //@synthesize attachmentName=_attachmentName - In the implementation block
@property (nonatomic,retain) NSURL * attachmentContentIDURL;              //@synthesize attachmentContentIDURL=_attachmentContentIDURL - In the implementation block
@property (assign,nonatomic) int attachmentType;                          //@synthesize attachmentType=_attachmentType - In the implementation block
-(NSURL *)attachmentContentIDURL;
-(NSString *)attachmentName;
-(void)setAttachmentName:(NSString *)arg1 ;
-(void)setAttachmentContentIDURL:(NSURL *)arg1 ;
-(void)setAttachmentType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)attachmentType;
-(unsigned long long)hash;
@end
