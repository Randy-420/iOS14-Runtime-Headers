/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PrintKit/PrintKit-Structs.h>
@class NSString, NSDictionary;

@interface PKPaper : NSObject {

	NSString* name;
	NSString* _baseName;
	int width;
	int height;
	int leftMargin;
	int topMargin;
	int rightMargin;
	int bottomMargin;
	BOOL _isTransverse;
	NSDictionary* mediaInfo;

}

@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) int width; 
@property (assign,nonatomic) int height; 
@property (assign,nonatomic) int leftMargin; 
@property (assign,nonatomic) int topMargin; 
@property (assign,nonatomic) int rightMargin; 
@property (assign,nonatomic) int bottomMargin; 
@property (nonatomic,copy) NSDictionary * mediaInfo; 
@property (nonatomic,retain,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * baseName; 
@property (nonatomic,readonly) CGSize paperSize; 
@property (nonatomic,readonly) CGRect imageableAreaRect; 
@property (nonatomic,readonly) double imageableArea; 
@property (nonatomic,readonly) BOOL isBorderless; 
@property (nonatomic,readonly) BOOL isTransverse;                                    //@synthesize isTransverse=_isTransverse - In the implementation block
@property (nonatomic,readonly) BOOL isRoll; 
@property (nonatomic,readonly) unsigned long long minCutLength; 
@property (nonatomic,readonly) unsigned long long maxCutLength; 
@property (nonatomic,retain,readonly) NSString * mediaType; 
@property (nonatomic,retain,readonly) NSString * mediaTypeName; 
@property (nonatomic,readonly) unsigned long long topMarginInPoints; 
@property (nonatomic,readonly) unsigned long long bottomMarginInPoints; 
@property (nonatomic,readonly) int minHeight; 
@property (nonatomic,readonly) int maxHeight; 
+(id)photoPapers;
+(id)generic4x6Paper;
+(id)genericLetterPaper;
+(id)generic3_5x5Paper;
+(id)genericA4Paper;
+(id)documentPapers;
+(id)genericA6Paper;
+(id)genericPRC32KPaper;
+(id)genericWithName:(id)arg1 ;
+(BOOL)useMetric;
+(id)mediaNameForWidth:(int)arg1 Height:(int)arg2 mediaType:(id)arg3 Borderless:(BOOL)arg4 Simplex:(BOOL)arg5 ;
+(id)genericHagakiPaper;
+(id)genericBorderlessWithName:(id)arg1 ;
+(id)defaultGenericPaperForLocale:(id)arg1 ;
+(id)paperWithAttributes:(id)arg1 ;
+(id)rollPaperWithAttributes:(id)arg1 ;
+(id)genericLegalPaper;
+(BOOL)willAdjustMarginsForDuplexMode:(id)arg1 ;
-(NSString *)mediaType;
-(BOOL)isRoll;
-(void)setHeight:(int)arg1 ;
-(BOOL)isEqualSizeAndMediaType:(id)arg1 ;
-(int)width;
-(int)height;
-(NSString *)localizedName;
-(int)leftMargin;
-(void)dealloc;
-(int)minHeight;
-(CGRect)imageableAreaRect;
-(unsigned long long)minCutLength;
-(int)bottomMargin;
-(void)setWidth:(int)arg1 ;
-(unsigned long long)topMarginInPoints;
-(unsigned long long)bottomMarginInPoints;
-(NSString *)mediaTypeName;
-(CGSize)paperSize;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(int)rightMargin;
-(void)setRightMargin:(int)arg1 ;
-(unsigned long long)hash;
-(NSString *)baseName;
-(NSString *)name;
-(id)cutToLength:(double)arg1 ;
-(unsigned long long)maxCutLength;
-(int)topMargin;
-(int)maxHeight;
-(void)setLeftMargin:(int)arg1 ;
-(void)setTopMargin:(int)arg1 ;
-(void)setBottomMargin:(int)arg1 ;
-(NSDictionary *)mediaInfo;
-(void)setMediaInfo:(NSDictionary *)arg1 ;
-(id)initWithWidth:(int)arg1 Height:(int)arg2 Left:(int)arg3 Top:(int)arg4 Right:(int)arg5 Bottom:(int)arg6 localizedName:(id)arg7 codeName:(id)arg8 ;
-(id)cutToPWGLength:(int)arg1 ;
-(id)nameWithoutSuffixes:(id)arg1 ;
-(void)addToMediaCol:(ipp_sRef)arg1 ;
-(double)imageableArea;
-(id)localizedNameFromDimensions;
-(id)initWithPWGSize:(pwg_size_s*)arg1 localizedName:(id)arg2 codeName:(id)arg3 ;
-(BOOL)isBorderless;
-(ipp_sRef)createMediaColAndDoMargins:(BOOL)arg1 ;
-(BOOL)isEqualSize:(id)arg1 ;
-(long long)sizeAndImageableCompare:(id)arg1 ;
-(long long)sizeMediaTypeAndImageableCompare:(id)arg1 ;
-(id)paperWithMarginsAdjustedForDuplexMode:(id)arg1 ;
-(BOOL)isTransverse;
@end

