/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAWLWatchListChannelDetails, NSURL, NSString;

@interface SAWLWatchListPlayable : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAWLWatchListChannelDetails * channelDetails; 
@property (assign,nonatomic) BOOL entitled; 
@property (assign,nonatomic) BOOL installed; 
@property (nonatomic,copy) NSURL * playURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watchListPlayable;
+(id)watchListPlayableWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setEntitled:(BOOL)arg1 ;
-(BOOL)installed;
-(void)setInstalled:(BOOL)arg1 ;
-(NSURL *)playURL;
-(BOOL)entitled;
-(void)setPlayURL:(NSURL *)arg1 ;
-(SAWLWatchListChannelDetails *)channelDetails;
-(void)setChannelDetails:(SAWLWatchListChannelDetails *)arg1 ;
@end

