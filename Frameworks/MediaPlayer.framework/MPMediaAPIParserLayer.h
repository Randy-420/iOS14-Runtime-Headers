/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MPMediaAPIParserLayer : NSObject {

	NSString* _key;
	unsigned long long _type;

}

@property (nonatomic,copy) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)layerWithKey:(id)arg1 ofType:(unsigned long long)arg2 ;
+(id)layerWithFirstObjectOfType:(unsigned long long)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
@end

