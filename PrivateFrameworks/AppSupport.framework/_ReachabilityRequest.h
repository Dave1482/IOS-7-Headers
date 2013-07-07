/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject
{
    NSLock *_lock;
    NSString *_hostname;
    struct __SCNetworkReachability *_reachability;
    unsigned int _flags;
    struct __CFDictionary *_observers;
    BOOL _isReachable;
    BOOL _receivedAtLeastOneCallback;
}

@property(nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (BOOL)hasObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (void)reachabilityChangedWithFlags:(unsigned int)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithHostname:(id)arg1;

@end
