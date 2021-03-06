/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaSiriResponseContext, NSData;

@interface SISchemaUUFRShown : PBCodable {

	NSString* _viewID;
	NSString* _snippetClass;
	int _siriUILocation;
	NSString* _dialogIdentifier;
	SISchemaSiriResponseContext* _siriResponseContext;
	NSString* _aceViewID;
	NSString* _aceViewClass;
	int _viewRegionDesignation;
	SCD_Struct_SI3 _has;
	BOOL _hasViewID;
	BOOL _hasSnippetClass;
	BOOL _hasDialogIdentifier;
	BOOL _hasSiriResponseContext;
	BOOL _hasAceViewID;
	BOOL _hasAceViewClass;

}

@property (nonatomic,copy) NSString * viewID;                                                //@synthesize viewID=_viewID - In the implementation block
@property (assign,nonatomic) BOOL hasViewID;                                                 //@synthesize hasViewID=_hasViewID - In the implementation block
@property (nonatomic,copy) NSString * snippetClass;                                          //@synthesize snippetClass=_snippetClass - In the implementation block
@property (assign,nonatomic) BOOL hasSnippetClass;                                           //@synthesize hasSnippetClass=_hasSnippetClass - In the implementation block
@property (assign,nonatomic) int siriUILocation;                                             //@synthesize siriUILocation=_siriUILocation - In the implementation block
@property (assign,nonatomic) BOOL hasSiriUILocation; 
@property (nonatomic,copy) NSString * dialogIdentifier;                                      //@synthesize dialogIdentifier=_dialogIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDialogIdentifier;                                       //@synthesize hasDialogIdentifier=_hasDialogIdentifier - In the implementation block
@property (nonatomic,retain) SISchemaSiriResponseContext * siriResponseContext;              //@synthesize siriResponseContext=_siriResponseContext - In the implementation block
@property (assign,nonatomic) BOOL hasSiriResponseContext;                                    //@synthesize hasSiriResponseContext=_hasSiriResponseContext - In the implementation block
@property (nonatomic,copy) NSString * aceViewID;                                             //@synthesize aceViewID=_aceViewID - In the implementation block
@property (assign,nonatomic) BOOL hasAceViewID;                                              //@synthesize hasAceViewID=_hasAceViewID - In the implementation block
@property (nonatomic,copy) NSString * aceViewClass;                                          //@synthesize aceViewClass=_aceViewClass - In the implementation block
@property (assign,nonatomic) BOOL hasAceViewClass;                                           //@synthesize hasAceViewClass=_hasAceViewClass - In the implementation block
@property (assign,nonatomic) int viewRegionDesignation;                                      //@synthesize viewRegionDesignation=_viewRegionDesignation - In the implementation block
@property (assign,nonatomic) BOOL hasViewRegionDesignation; 
@property (nonatomic,readonly) NSData * jsonData; 
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)viewID;
-(NSString *)dialogIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)jsonData;
-(id)dictionaryRepresentation;
-(void)setViewID:(NSString *)arg1 ;
-(void)setSnippetClass:(NSString *)arg1 ;
-(void)setSiriResponseContext:(SISchemaSiriResponseContext *)arg1 ;
-(void)setViewRegionDesignation:(int)arg1 ;
-(void)setAceViewID:(NSString *)arg1 ;
-(BOOL)hasViewID;
-(void)setHasViewID:(BOOL)arg1 ;
-(SISchemaSiriResponseContext *)siriResponseContext;
-(BOOL)hasSiriResponseContext;
-(void)setHasSiriResponseContext:(BOOL)arg1 ;
-(void)setAceViewClass:(NSString *)arg1 ;
-(NSString *)aceViewID;
-(NSString *)aceViewClass;
-(BOOL)hasDialogIdentifier;
-(BOOL)hasAceViewID;
-(BOOL)hasAceViewClass;
-(void)setHasDialogIdentifier:(BOOL)arg1 ;
-(void)setHasAceViewID:(BOOL)arg1 ;
-(void)setHasAceViewClass:(BOOL)arg1 ;
-(void)setSiriUILocation:(int)arg1 ;
-(NSString *)snippetClass;
-(int)siriUILocation;
-(int)viewRegionDesignation;
-(BOOL)hasSnippetClass;
-(BOOL)hasSiriUILocation;
-(void)setHasSiriUILocation:(BOOL)arg1 ;
-(BOOL)hasViewRegionDesignation;
-(void)setHasViewRegionDesignation:(BOOL)arg1 ;
-(void)setHasSnippetClass:(BOOL)arg1 ;
@end

