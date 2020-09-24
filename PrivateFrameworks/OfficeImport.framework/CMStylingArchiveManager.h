/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMArchiveManager.h>

@class NSMutableString, NSMutableDictionary;

@interface CMStylingArchiveManager : CMArchiveManager {

	NSMutableString* mCssString;
	NSMutableDictionary* mStyleCache;

}
-(id)init;
-(id)addCssStyle:(id)arg1 ;
-(void)addCssStyle:(id)arg1 withName:(id)arg2 ;
-(id)cssStylesheetString;
-(id)commitStylesheet;
@end
