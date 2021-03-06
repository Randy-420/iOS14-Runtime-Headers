/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@class CRKIdentityConfiguration;

@interface CRKIdentityRefFactory : NSObject {

	CRKIdentityConfiguration* _configuration;

}

@property (nonatomic,copy,readonly) CRKIdentityConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)subject;
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(CRKIdentityConfiguration *)configuration;
-(const void*)CMSHashingAlgorithmForSecAlgorithm:(unsigned)arg1 ;
-(id)keyParameters;
-(id)certificateParametersWithCMSAlgorithm:(const void*)arg1 ;
-(void)safeRelease:(void*)arg1 ;
-(void)addClientAndServerAuthEKUsToParameters:(id)arg1 ;
-(SecIdentityRef)makeIdentityRefWithError:(id*)arg1 ;
@end

