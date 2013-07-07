/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSCopying.h"
#import "NSObject.h"

@protocol DOMEventTarget <NSObject, NSCopying>
- (void)removeEventListener:(id)arg1:(id)arg2:(BOOL)arg3;
- (void)addEventListener:(id)arg1:(id)arg2:(BOOL)arg3;
- (BOOL)dispatchEvent:(id)arg1;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
@end
