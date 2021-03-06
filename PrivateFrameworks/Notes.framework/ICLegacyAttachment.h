/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICLegacyAttachment <NSObject>
@required
-(id)identifier;
-(id)managedObjectContext;
-(id)typeUTI;
-(id)contentID;
-(id)fileURL;
-(BOOL)persistAttachmentData:(id)arg1 error:(id*)arg2;
-(id)cidURL;
-(void)setMimeType:(id)arg1;
-(id)mimeType;

@end

