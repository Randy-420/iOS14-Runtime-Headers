/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMStyle.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDStyle;

@interface EMCellStyle : CMStyle <NSCopying> {

	EDStyle* _edStyle;
	int _edCellType;
	double _columnWidth;
	double _contentWidth;
	BOOL _truncateContents;
	BOOL _resolvedProperties;

}
+(double)contentWidthForColumnWidth:(double)arg1 ;
+(id)_parseFontName:(id)arg1 nameContainsBold:(BOOL*)arg2 nameContainsItalic:(BOOL*)arg3 ;
+(id)styleForFont:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)cssStyleString;
-(id)cacheFriendlyCSSStyleString;
-(id)initWithEDStyle:(id)arg1 type:(int)arg2 columnWidth:(unsigned long long)arg3 contentWidth:(unsigned long long)arg4 truncateContents:(BOOL)arg5 ;
-(void)addFontStyle:(id)arg1 ;
-(void)addBordersStyle:(id)arg1 ;
-(void)addFillStyle:(id)arg1 ;
-(void)addAlignmentStyle:(id)arg1 ;
-(void)resolveFormatType;
-(void)resolveContentWidth;
@end

