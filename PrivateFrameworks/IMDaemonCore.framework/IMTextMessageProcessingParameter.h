/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMTextMessageProcessingParameter <IMPipelineParameter>
@required
-(id)chat;
-(id)timestamp;
-(id)messageSummaryInfo;
-(id)fileTransferGUIDs;
-(BOOL)isFromMe;
-(id)fromIdentifier;
-(id)GUID;
-(BOOL)isExpirable;
-(BOOL)wantsDeliveryReceipt;
-(id)plainTextBody;
-(id)plainTextSubject;
-(id)threadIdentifierGUID;
-(id)expressiveSendStyleIdentifier;
-(void)setMessageItems:(id)arg1;
-(id)fromDisplayID;
-(id)richBody;
-(id)toIdentifier;
-(id)participantIdentifiers;

@end

