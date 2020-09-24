/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLGeocoderInternal, CLSilo;

@interface CLGeocoder : NSObject {

	CLGeocoderInternal* _internal;

}

@property (setter=_setResponseSilo:) CLSilo * _responseSilo; 
@property (getter=isGeocoding,nonatomic,readonly) BOOL geocoding; 
+(id)_timeZoneAtLocation:(id)arg1 ;
+(void)hydrateGeoMapItemLocallyFromHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isGeocoding;
-(void)reverseGeocodeLocation:(id)arg1 preferredLocale:(id)arg2 heading:(double)arg3 localResultsOnly:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_notifyResult:(id)arg1 error:(id)arg2 ;
-(void)_notifyCancel;
-(void)_ensureMainThreadExecutionContextForBlock:(/*^block*/id)arg1 ;
-(void)_notifyNoResult;
-(void)dealloc;
-(void)_notifyPartialResult:(id)arg1 ;
-(void)_ticket:(id)arg1 didReturnError:(id)arg2 ;
-(void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyResult:(id)arg1 ;
-(void)_ticket:(id)arg1 didReturnError:(id)arg2 partialResultForLocation:(id)arg3 ;
-(void)_ticket:(id)arg1 didReturnGeoMapItems:(id)arg2 ;
-(void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 localResultsOnly:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)geocodeAddressDictionary:(id)arg1 preferredLocale:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelGeocode;
-(void)reverseGeocodeLocation:(id)arg1 localResultsOnly:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)reverseGeocodeLocation:(id)arg1 preferredLocale:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(CLSilo *)_responseSilo;
-(void)_setResponseSilo:(id)arg1 ;
-(void)geocodePostalAddress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)geocodePostalAddress:(id)arg1 preferredLocale:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)geocodeAddressString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 preferredLocale:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyError:(id)arg1 ;
-(void)geocodeAddressDictionary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reverseGeocodeLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
