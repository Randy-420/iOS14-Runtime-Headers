/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NTPBDate;

@interface NTPBAppConfigurationResource : PBCodable <NSCopying> {

	long long _maxAge;
	NSString* _etag;
	NSData* _gzippedConfigurationData;
	NTPBDate* _lastFetchedDate;
	NTPBDate* _lastModifiedDate;
	NSString* _lastModifiedString;
	NSString* _resourceID;
	NSString* _sourceURL;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasGzippedConfigurationData; 
@property (nonatomic,retain) NSData * gzippedConfigurationData;               //@synthesize gzippedConfigurationData=_gzippedConfigurationData - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL;                            //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                 //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasLastFetchedDate; 
@property (nonatomic,retain) NTPBDate * lastFetchedDate;                      //@synthesize lastFetchedDate=_lastFetchedDate - In the implementation block
@property (nonatomic,readonly) BOOL hasLastModifiedDate; 
@property (nonatomic,retain) NTPBDate * lastModifiedDate;                     //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,readonly) BOOL hasLastModifiedString; 
@property (nonatomic,retain) NSString * lastModifiedString;                   //@synthesize lastModifiedString=_lastModifiedString - In the implementation block
@property (assign,nonatomic) BOOL hasMaxAge; 
@property (assign,nonatomic) long long maxAge;                                //@synthesize maxAge=_maxAge - In the implementation block
@property (nonatomic,readonly) BOOL hasResourceID; 
@property (nonatomic,retain) NSString * resourceID;                           //@synthesize resourceID=_resourceID - In the implementation block
-(void)setSourceURL:(NSString *)arg1 ;
-(NSString *)resourceID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setResourceID:(NSString *)arg1 ;
-(void)dealloc;
-(long long)maxAge;
-(void)setEtag:(NSString *)arg1 ;
-(void)setMaxAge:(long long)arg1 ;
-(void)setLastModifiedDate:(NTPBDate *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)sourceURL;
-(BOOL)hasEtag;
-(BOOL)hasMaxAge;
-(NTPBDate *)lastFetchedDate;
-(unsigned long long)hash;
-(void)setLastFetchedDate:(NTPBDate *)arg1 ;
-(NSString *)etag;
-(NTPBDate *)lastModifiedDate;
-(id)description;
-(void)setGzippedConfigurationData:(NSData *)arg1 ;
-(void)setLastModifiedString:(NSString *)arg1 ;
-(BOOL)hasGzippedConfigurationData;
-(BOOL)hasLastFetchedDate;
-(BOOL)hasLastModifiedDate;
-(BOOL)hasLastModifiedString;
-(void)setHasMaxAge:(BOOL)arg1 ;
-(BOOL)hasResourceID;
-(NSData *)gzippedConfigurationData;
-(NSString *)lastModifiedString;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceURL;
@end
