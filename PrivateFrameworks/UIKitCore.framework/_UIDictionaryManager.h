/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _UIDictionaryManager : NSObject {

	NSArray* _availableDefinitionDictionaries;

}

@property (readonly) NSArray * availableDefinitionDictionaries;              //@synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries - In the implementation block
+(id)assetManager;
-(id)init;
-(BOOL)_isTTYEnabled;
-(NSArray *)availableDefinitionDictionaries;
-(id)_allAvailableDefinitionDictionaries;
-(void)_downloadDictionaryAssetCatalog:(/*^block*/id)arg1 ;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(id)_definitionValuesForTerm:(id)arg1 ;
-(id)_availableDictionaryAssets;
-(id)_dictionaryAssetType;
@end
