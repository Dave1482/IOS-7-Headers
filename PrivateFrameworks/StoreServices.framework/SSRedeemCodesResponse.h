/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SSXPCCoding.h"

@class NSArray, NSDictionary;

@interface SSRedeemCodesResponse : NSObject <SSXPCCoding>
{
    NSDictionary *_errors;
    NSArray *_redeemedCodes;
}

@property(copy, nonatomic) NSArray *redeemedCodes; // @synthesize redeemedCodes=_redeemedCodes;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setFailedCodes:(id)arg1;
@property(readonly, nonatomic) NSArray *failedCodes;
- (id)errorForCode:(id)arg1;
- (void)dealloc;

@end

