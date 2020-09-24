/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchRecoverFinalResponse.h>

@class NSString;

@interface FTMutableBatchRecoverFinalResponse : FTBatchRecoverFinalResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (assign,nonatomic) int num_of_requested; 
@property (assign,nonatomic) int num_of_processed; 
@property (assign,nonatomic) int num_of_succeeded; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(id)init;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
-(int)num_of_requested;
-(void)setNum_of_requested:(int)arg1 ;
-(int)num_of_processed;
-(void)setNum_of_processed:(int)arg1 ;
-(int)num_of_succeeded;
-(void)setNum_of_succeeded:(int)arg1 ;
@end
