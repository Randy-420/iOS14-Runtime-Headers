/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMLParserDelegate <NSObject>
@optional
-(void)CAMLParser:(id)arg1 formatErrorString:(const char*)arg2 arguments:(char*)arg3 lineNumber:(unsigned long long)arg4;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
-(void)CAMLParser:(id)arg1 formatWarningString:(const char*)arg2 arguments:(char*)arg3 lineNumber:(unsigned long long)arg4;
-(id)CAMLParser:(id)arg1 didFailToLoadResourceFromURL:(id)arg2;
-(void)CAMLParser:(id)arg1 evaluateScriptElement:(id)arg2 sourceURL:(id)arg3 lineNumber:(unsigned)arg4;
-(id)CAMLParser:(id)arg1 evaluateScriptValue:(id)arg2 sourceURL:(id)arg3 lineNumber:(unsigned)arg4;
-(id)CAMLParser:(id)arg1 resourceForURL:(id)arg2;
-(void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3;

@end

