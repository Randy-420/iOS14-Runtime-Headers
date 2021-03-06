/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUOutputStream.h>

@class NSString;

@interface OISFUMoveableFileOutputStream : NSObject <SFUOutputStream> {

	int mFd;
	NSString* mPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPath:(id)arg1 ;
-(void)flush;
-(void)close;
-(id)path;
-(BOOL)canSeek;
-(void)dealloc;
-(long long)offset;
-(id)inputStream;
-(BOOL)moveToPath:(id)arg1 ;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(BOOL)canCreateInputStream;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)initWithTemporaryFile:(id)arg1 ;
-(void)truncateToLength:(long long)arg1 ;
@end

