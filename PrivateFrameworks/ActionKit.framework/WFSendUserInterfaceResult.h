/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface WFSendUserInterfaceResult : NSObject <NSSecureCoding> {

	NSArray* _recipients;
	NSString* _subject;
	NSString* _content;
	NSArray* _attachments;

}

@property (nonatomic,copy) NSArray * recipients;               //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy) NSString * subject;                 //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSString * content;                 //@synthesize content=_content - In the implementation block
@property (nonatomic,copy) NSArray * attachments;              //@synthesize attachments=_attachments - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)attachments;
-(void)encodeWithCoder:(id)arg1 ;
@end
