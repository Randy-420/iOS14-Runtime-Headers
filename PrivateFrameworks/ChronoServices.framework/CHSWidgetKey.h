/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CHSWidget, CHSWidgetMetrics;

@interface CHSWidgetKey : NSObject <NSCopying, NSSecureCoding> {

	CHSWidget* _widget;
	CHSWidgetMetrics* _metrics;

}

@property (nonatomic,readonly) CHSWidget * widget;                      //@synthesize widget=_widget - In the implementation block
@property (nonatomic,readonly) CHSWidgetMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
+(BOOL)supportsSecureCoding;
-(CHSWidgetMetrics *)metrics;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CHSWidget *)widget;
-(id)initWithWidget:(id)arg1 metrics:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

