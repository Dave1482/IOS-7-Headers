/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface MFMailAccountProxy : NSObject
{
    NSDictionary *_properties;
}

@property(readonly, nonatomic) id mailAccount;
- (BOOL)_isRestricted;
- (BOOL)_isActive;
@property(readonly, nonatomic) BOOL restrictsRepliesAndForwards;
@property(readonly, nonatomic) BOOL supportsSoftBankCodePoints;
@property(readonly, nonatomic) NSString *uniqueID;
- (id)_emailAddressesAndAliases;
@property(readonly, nonatomic) NSArray *fromEmailAddressesIncludingDisabled;
@property(readonly, nonatomic) NSArray *fromEmailAddresses;
@property(readonly, nonatomic) NSArray *emailAddresses;
@property(readonly, nonatomic) NSString *firstEmailAddress;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *fullUserName;
@property(readonly, nonatomic) BOOL isDefaultDeliveryAccount;
- (void)dealloc;
- (id)_initWithProperties:(id)arg1;

@end
