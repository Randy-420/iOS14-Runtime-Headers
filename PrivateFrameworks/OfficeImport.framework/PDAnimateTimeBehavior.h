/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class NSString;

@interface PDAnimateTimeBehavior : PDAnimateBehavior {

	NSString* mTo;
	NSString* mFrom;
	NSString* mBy;
	BOOL mHasCalcMode;
	int mCalcMode;
	BOOL mHasValueType;
	int mValueType;

}
-(id)to;
-(int)valueType;
-(id)by;
-(id)from;
-(void)setTo:(id)arg1 ;
-(id)init;
-(void)setFrom:(id)arg1 ;
-(void)setBy:(id)arg1 ;
-(BOOL)hasValueType;
-(void)setValueType:(int)arg1 ;
-(BOOL)hasCalcMode;
-(int)calcMode;
-(void)setCalcMode:(int)arg1 ;
@end
