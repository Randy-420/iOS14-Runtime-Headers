/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/WPAWDLDelegate.h>
#import <libobjc.A.dylib/WPNearbyDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CBCentralManager, NSMutableDictionary, NSObject, CURetrier, NSSet, NSData, NSArray, WPAWDL, WPNearby, WPPairing, SFBLERecorder, NSString;

@interface SFBLEScanner : NSObject <CBCentralManagerDelegate, WPAWDLDelegate, WPNearbyDelegate> {

	BOOL _activateCalled;
	BOOL _activated;
	BOOL _activeScan;
	BTSessionImplRef _btSession;
	BOOL _btStarted;
	CBCentralManager* _centralManager;
	NSMutableDictionary* _devices;
	BOOL _invalidateCalled;
	NSObject*<OS_dispatch_source> _lostTimer;
	BOOL _needDups;
	long long _payloadType;
	BOOL _poweredOffSleep;
	int _rescanSecondsActual;
	NSObject*<OS_dispatch_source> _rescanTimer;
	_sFILE* _rssiEventLogFile;
	BOOL _scanStarted;
	CURetrier* _startRetrier;
	BOOL _timeoutFired;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSSet* _trackedPeersApplied;
	LogCategory* _ucat;
	BOOL _updating;
	BOOL _scanParamActive;
	BOOL _scanParamCache;
	BOOL _scanParamDups;
	NSData* _scanParamFilterData;
	NSData* _scanParamFilterMask;
	long long _scanParamInterval;
	long long _scanParamWindow;
	long long _scanParamMode;
	NSArray* _scanParamPeers;
	long long _scanParamRSSI;
	WPAWDL* _wpAirDrop;
	WPNearby* _wpNearby;
	long long _wpNearbyType;
	WPPairing* _wpPairing;
	BOOL _rssiLog;
	BOOL _rssiLogStdOut;
	BOOL _scanCache;
	unsigned _changeFlags;
	/*^block*/id _bluetoothStateChangedHandler;
	NSArray* _deviceFilter;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _deviceChangedHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSData* _payloadFilterData;
	NSData* _payloadFilterMask;
	double _rescanInterval;
	SFBLERecorder* _recorder;
	long long _rssiThreshold;
	long long _scanInterval;
	long long _scanRate;
	long long _scanState;
	/*^block*/id _scanStateChangedHandler;
	long long _scanWindow;
	double _timeout;
	/*^block*/id _timeoutHandler;
	NSSet* _trackedPeers;

}

@property (nonatomic,copy) id bluetoothStateChangedHandler;                           //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,copy) NSArray * deviceFilter;                                    //@synthesize deviceFilter=_deviceFilter - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id deviceChangedHandler;                                   //@synthesize deviceChangedHandler=_deviceChangedHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy,readonly) NSData * payloadFilterData;                       //@synthesize payloadFilterData=_payloadFilterData - In the implementation block
@property (nonatomic,copy,readonly) NSData * payloadFilterMask;                       //@synthesize payloadFilterMask=_payloadFilterMask - In the implementation block
@property (assign,nonatomic) double rescanInterval;                                   //@synthesize rescanInterval=_rescanInterval - In the implementation block
@property (assign,nonatomic) BOOL rssiLog;                                            //@synthesize rssiLog=_rssiLog - In the implementation block
@property (assign,nonatomic) BOOL rssiLogStdOut;                                      //@synthesize rssiLogStdOut=_rssiLogStdOut - In the implementation block
@property (nonatomic,retain) SFBLERecorder * recorder;                                //@synthesize recorder=_recorder - In the implementation block
@property (assign,nonatomic) long long rssiThreshold;                                 //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (assign,nonatomic) BOOL scanCache;                                          //@synthesize scanCache=_scanCache - In the implementation block
@property (assign,nonatomic) long long scanInterval;                                  //@synthesize scanInterval=_scanInterval - In the implementation block
@property (assign,nonatomic) long long scanRate;                                      //@synthesize scanRate=_scanRate - In the implementation block
@property (nonatomic,readonly) long long scanState;                                   //@synthesize scanState=_scanState - In the implementation block
@property (nonatomic,copy) id scanStateChangedHandler;                                //@synthesize scanStateChangedHandler=_scanStateChangedHandler - In the implementation block
@property (assign,nonatomic) long long scanWindow;                                    //@synthesize scanWindow=_scanWindow - In the implementation block
@property (assign,nonatomic) double timeout;                                          //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                                         //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
@property (nonatomic,copy) NSSet * trackedPeers;                                      //@synthesize trackedPeers=_trackedPeers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRssiThreshold:(long long)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)pairingStartedScanning:(id)arg1 ;
-(long long)scanState;
-(SFBLERecorder *)recorder;
-(NSArray *)deviceFilter;
-(void)_poweredOff;
-(void)setRssiLogStdOut:(BOOL)arg1 ;
-(id)invalidationHandler;
-(void)_restartIfNeeded:(BOOL)arg1 ;
-(void)awdlStartedScanning:(id)arg1 ;
-(BOOL)pairingUpdatePairedInfoMB:(id)arg1 fields:(id)arg2 bleDevice:(id)arg3 ;
-(void)_startTimeoutIfNeeded;
-(void)invalidate;
-(int)_btSessionEnsureStarted;
-(void)_invokeBlockActivateSafe:(/*^block*/id)arg1 ;
-(void)_watchSetupParseName:(id)arg1 fields:(id)arg2 ;
-(void)pairingDidUpdateState:(id)arg1 ;
-(NSData *)payloadFilterData;
-(double)timeout;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)foundAWDLDevice:(id)arg1 rssi:(id)arg2 ;
-(void)nearby:(id)arg1 didFailToStartScanningForType:(long long)arg2 WithError:(id)arg3 ;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(long long)scanRate;
-(void)setRecorder:(SFBLERecorder *)arg1 ;
-(void)parseStatus3:(unsigned char)arg1 productID:(unsigned)arg2 caseLEDColor:(char*)arg3 caseLEDStatus:(char*)arg4 ;
-(long long)scanWindow;
-(BOOL)_btSessionUsable;
-(void)_foundDevice:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 fields:(id)arg4 ;
-(void)_recordDevice:(id)arg1 data:(id)arg2 rssi:(id)arg3 info:(id)arg4 ;
-(long long)scanInterval;
-(BOOL)_needActiveScan;
-(void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)_rescanTimerFired;
-(void)pairing:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)dealloc;
-(id)modelWithProductID:(unsigned short)arg1 ;
-(void)setTimeoutHandler:(id)arg1 ;
-(void)foundPairingDevice:(id)arg1 payload:(id)arg2 rssi:(id)arg3 peerInfo:(id)arg4 ;
-(void)_btSessionEnsureStopped;
-(BOOL)rssiLog;
-(void)setTimeout:(double)arg1 ;
-(void)_invalidate;
-(void)_nearbyParseManufacturerData:(id)arg1 fields:(id)arg2 ;
-(void)_nearbyParseNearbyInfoPtr:(const char*)arg1 end:(const char*)arg2 fields:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(BOOL)rssiLogStdOut;
-(void)setRescanInterval:(double)arg1 ;
-(void)nearby:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3 ;
-(void)setScanInterval:(long long)arg1 ;
-(void)_rescanLostFired;
-(id)pairingParsePayload:(id)arg1 identifier:(id)arg2 bleDevice:(id)arg3 ;
-(NSData *)payloadFilterMask;
-(void)awdlDidUpdateState:(id)arg1 ;
-(void)performUpdate:(/*^block*/id)arg1 ;
-(void)setChangeFlags:(unsigned)arg1 ;
-(void)_updateTrackedPeers;
-(BOOL)pairingUpdatePairedInfo:(id)arg1 fields:(id)arg2 bleDevice:(id)arg3 ;
-(void)_rssiLogClose;
-(void)foundPeripheralDevice:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)_timeoutTimerFired;
-(id)timeoutHandler;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDeviceFilter:(NSArray *)arg1 ;
-(BOOL)scanCache;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_poweredOn;
-(id)bluetoothStateChangedHandler;
-(void)setScanCache:(BOOL)arg1 ;
-(void)setTrackedPeers:(NSSet *)arg1 ;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(void)_restartIfNeeded;
-(id)deviceLostHandler;
-(void)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4 peerInfo:(id)arg5 ;
-(unsigned)statusToHeadsetStatus:(unsigned char)arg1 forProductID:(unsigned short)arg2 ;
-(void)_rssiLogOpen;
-(void)setDeviceLostHandler:(id)arg1 ;
-(long long)rssiThreshold;
-(NSSet *)trackedPeers;
-(void)setRssiLog:(BOOL)arg1 ;
-(BOOL)_updateCounterpart:(id)arg1 ;
-(void)_nearbyParseNearbyActionPtr:(const char*)arg1 end:(const char*)arg2 fields:(id)arg3 ;
-(void)setScanWindow:(long long)arg1 ;
-(void)setScanStateChangedHandler:(id)arg1 ;
-(id)deviceFoundHandler;
-(id)deviceChangedHandler;
-(void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3 ;
-(void)_updateRescanTimer;
-(unsigned)changeFlags;
-(void)setScanRate:(long long)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)nearbyDidUpdateState:(id)arg1 ;
-(void)nearby:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4 peerInfo:(id)arg5 ;
-(id)scanStateChangedHandler;
-(void)nearby:(id)arg1 didStartScanningForType:(long long)arg2 ;
-(id)initWithType:(long long)arg1 ;
-(void)foundNearbyDevice:(id)arg1 data:(id)arg2 peerInfo:(id)arg3 ;
-(void)_removeAllDevicesWithReason:(id)arg1 ;
-(NSString *)description;
-(BOOL)_needDups;
-(double)rescanInterval;
-(void)setPayloadFilterData:(id)arg1 mask:(id)arg2 ;
@end
