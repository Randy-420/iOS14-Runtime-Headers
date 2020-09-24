/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@class MTLStructTypeInternal;

@interface MTLImageBlockDataArgument : MTLArgumentInternal {

	unsigned _dataSize;
	MTLStructTypeInternal* _masterStructMembers;
	BOOL _aliasImplicitImageBlock;
	unsigned _aliasImplicitImageBlockRenderTarget;

}
-(void)dealloc;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 index:(unsigned long long)arg5 dataSize:(unsigned)arg6 masterStructMembers:(id)arg7 aliasImplicitImageBlock:(BOOL)arg8 aliasImplicitImageBlockRenderTarget:(unsigned)arg9 ;
-(BOOL)aliasImplicitImageBlock;
-(unsigned long long)imageBlockDataSize;
-(id)imageBlockMasterStructMembers;
-(unsigned long long)aliasImplicitImageBlockRenderTarget;
-(void)setStructType:(id)arg1 ;
@end
