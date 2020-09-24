/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SASExtractSpeechData : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * audioOutputType; 
@property (nonatomic,copy) NSNumber * endTime; 
@property (nonatomic,copy) NSString * speechRequestId; 
@property (nonatomic,copy) NSNumber * startTime; 
+(id)extractSpeechData;
+(id)extractSpeechDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)endTime;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSNumber *)startTime;
-(void)setStartTime:(NSNumber *)arg1 ;
-(BOOL)requiresResponse;
-(void)setEndTime:(NSNumber *)arg1 ;
-(NSString *)audioOutputType;
-(void)setAudioOutputType:(NSString *)arg1 ;
-(NSString *)speechRequestId;
-(void)setSpeechRequestId:(NSString *)arg1 ;
@end
