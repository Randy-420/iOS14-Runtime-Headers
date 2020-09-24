/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface CKDPNotificationSyncResponsePushMessage : PBCodable <NSCopying> {

	int _badgeCount;
	NSString* _category;
	NSString* _dialog;
	NSData* _payload;
	NSString* _sound;
	int _source;
	NSString* _subtitle;
	NSMutableArray* _subtitleLocalizedArguments;
	NSString* _subtitleLocalizedKey;
	NSString* _title;
	NSMutableArray* _titleLocalizedArguments;
	NSString* _titleLocalizedKey;
	NSString* _uuid;
	BOOL _isRead;
	SCD_Struct_CK17 _has;

}

@property (assign,nonatomic) BOOL hasIsRead; 
@property (assign,nonatomic) BOOL isRead;                                              //@synthesize isRead=_isRead - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSString * uuid;                                          //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                                               //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL hasDialog; 
@property (nonatomic,retain) NSString * dialog;                                        //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,readonly) BOOL hasSound; 
@property (nonatomic,retain) NSString * sound;                                         //@synthesize sound=_sound - In the implementation block
@property (assign,nonatomic) BOOL hasBadgeCount; 
@property (assign,nonatomic) int badgeCount;                                           //@synthesize badgeCount=_badgeCount - In the implementation block
@property (nonatomic,readonly) BOOL hasPayload; 
@property (nonatomic,retain) NSData * payload;                                         //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                                      //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleLocalizedKey; 
@property (nonatomic,retain) NSString * titleLocalizedKey;                             //@synthesize titleLocalizedKey=_titleLocalizedKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * titleLocalizedArguments;                 //@synthesize titleLocalizedArguments=_titleLocalizedArguments - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitleLocalizedKey; 
@property (nonatomic,retain) NSString * subtitleLocalizedKey;                          //@synthesize subtitleLocalizedKey=_subtitleLocalizedKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * subtitleLocalizedArguments;              //@synthesize subtitleLocalizedArguments=_subtitleLocalizedArguments - In the implementation block
+(Class)titleLocalizedArgumentsType;
+(Class)subtitleLocalizedArgumentsType;
-(int)StringAsSource:(id)arg1 ;
-(BOOL)hasSound;
-(id)sourceAsString:(int)arg1 ;
-(NSString *)subtitle;
-(NSString *)dialog;
-(NSString *)sound;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setBadgeCount:(int)arg1 ;
-(void)setSound:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTitleLocalizedKey:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasSource;
-(void)addSubtitleLocalizedArguments:(id)arg1 ;
-(NSData *)payload;
-(BOOL)isRead;
-(int)badgeCount;
-(void)setTitleLocalizedArguments:(NSMutableArray *)arg1 ;
-(id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasUuid;
-(NSString *)subtitleLocalizedKey;
-(BOOL)hasTitle;
-(NSString *)title;
-(void)clearTitleLocalizedArguments;
-(BOOL)hasPayload;
-(id)titleLocalizedArgumentsAtIndex:(unsigned long long)arg1 ;
-(void)setHasSource:(BOOL)arg1 ;
-(void)setSource:(int)arg1 ;
-(void)setSubtitleLocalizedArguments:(NSMutableArray *)arg1 ;
-(NSString *)category;
-(BOOL)hasSubtitle;
-(unsigned long long)titleLocalizedArgumentsCount;
-(NSString *)titleLocalizedKey;
-(BOOL)hasCategory;
-(void)setCategory:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setDialog:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSubtitleLocalizedKey;
-(NSString *)uuid;
-(BOOL)hasTitleLocalizedKey;
-(NSMutableArray *)subtitleLocalizedArguments;
-(int)source;
-(NSMutableArray *)titleLocalizedArguments;
-(void)setSubtitleLocalizedKey:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setPayload:(NSData *)arg1 ;
-(void)clearSubtitleLocalizedArguments;
-(unsigned long long)subtitleLocalizedArgumentsCount;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(void)addTitleLocalizedArguments:(id)arg1 ;
-(void)setIsRead:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasBadgeCount:(BOOL)arg1 ;
-(BOOL)hasBadgeCount;
-(BOOL)hasDialog;
-(BOOL)hasIsRead;
-(void)setHasIsRead:(BOOL)arg1 ;
@end
