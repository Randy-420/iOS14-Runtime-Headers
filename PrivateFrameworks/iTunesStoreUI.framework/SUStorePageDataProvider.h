/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISDataProvider.h>

@class SUClientInterface, ISPropertyListProvider;

@interface SUStorePageDataProvider : ISDataProvider {

	SUClientInterface* _clientInterface;
	long long _outputType;
	ISPropertyListProvider* _propertyListDataProvider;

}

@property (retain) SUClientInterface * clientInterface;                          //@synthesize clientInterface=_clientInterface - In the implementation block
@property (assign) long long outputType;                                         //@synthesize outputType=_outputType - In the implementation block
@property (copy) ISPropertyListProvider * propertyListDataProvider;              //@synthesize propertyListDataProvider=_propertyListDataProvider - In the implementation block
@property (readonly) BOOL shouldProcessTouchIDDialogs; 
-(long long)outputType;
-(SUClientInterface *)clientInterface;
-(void)setOutputType:(long long)arg1 ;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(ISPropertyListProvider *)propertyListDataProvider;
-(BOOL)shouldProcessTouchIDDialogs;
-(void)_loadPersonalizedStoreOffersForPage:(id)arg1 ;
-(void)setPropertyListDataProvider:(ISPropertyListProvider *)arg1 ;
@end
