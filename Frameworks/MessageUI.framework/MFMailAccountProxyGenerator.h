/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class _MFMailAccountProxySource;

@interface MFMailAccountProxyGenerator : NSObject
{
    _MFMailAccountProxySource *_proxySource;
    BOOL _allowsRestrictedAccounts;
}

- (id)allAccountProxies;
- (id)activeAccountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4;
- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2;
- (id)defaultMailAccountProxyForDeliveryOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (void)dealloc;
- (id)initWithAllowsRestrictedAccounts:(BOOL)arg1;
- (id)init;

@end
