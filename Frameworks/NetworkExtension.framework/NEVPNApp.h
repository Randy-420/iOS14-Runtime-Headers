/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPN.h>

@class NSArray;

@interface NEVPNApp : NEVPN {

	BOOL _noRestriction;
	BOOL _restrictDomains;
	NSArray* _appRules;
	NSArray* _excludedDomains;

}

@property (copy) NSArray * appRules;                     //@synthesize appRules=_appRules - In the implementation block
@property (assign) BOOL noRestriction;                   //@synthesize noRestriction=_noRestriction - In the implementation block
@property (assign) BOOL restrictDomains;                 //@synthesize restrictDomains=_restrictDomains - In the implementation block
@property (copy) NSArray * excludedDomains;              //@synthesize excludedDomains=_excludedDomains - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setNoRestriction:(BOOL)arg1 ;
-(BOOL)noRestriction;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyAppRuleIDs;
-(id)copyAppRuleByID:(id)arg1 ;
-(NSArray *)appRules;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)removeAppRuleByID:(id)arg1 ;
-(id)copyUniqueSigningIdentifiers;
-(id)copyAppRuleBySigningIdentifier:(id)arg1 ;
-(void)updateAppRulesForUID:(unsigned)arg1 ;
-(BOOL)installSigningIdentifiersWithFlowDivertControlSocket:(int)arg1 ;
-(id)init;
-(NSArray *)excludedDomains;
-(BOOL)restrictDomains;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setExcludedDomains:(NSArray *)arg1 ;
-(void)setAppRules:(NSArray *)arg1 ;
-(void)setRestrictDomains:(BOOL)arg1 ;
@end
