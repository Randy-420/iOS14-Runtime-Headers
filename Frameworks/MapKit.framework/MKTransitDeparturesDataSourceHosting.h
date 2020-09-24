/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKTransitDeparturesDataSourceHosting <NSObject>
@optional
-(UIEdgeInsets*)separatorInsetsForTransitDeparturesDataSource:(id)arg1;
-(id)separatorColorForTransitDeparturesDataSource:(id)arg1;
-(void)transitDeparturesDataSource:(id)arg1 didSelectConnectionInformation:(id)arg2;
-(void)transitDeparturesDataSource:(id)arg1 showIncidents:(id)arg2;
-(void)transitDeparturesDataSource:(id)arg1 didSelectTransitLine:(id)arg2 fromCell:(id)arg3;
-(void)transitDeparturesDataSource:(id)arg1 didSelectDepartureSequence:(id)arg2 transitStationMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5;
-(BOOL)transitDeparturesDataSource:(id)arg1 canSelectDepartureSequence:(id)arg2 transitStationMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5;
-(void)transitDeparturesDataSourceDidToggleHiddenSystem:(id)arg1;

@required
-(id)traitsForTransitDeparturesDataSource:(id)arg1;
-(void)transitDeparturesDataSourceDidReload:(id)arg1;

@end
